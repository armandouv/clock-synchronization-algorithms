//
// Created by armandouv on 3/10/22.
//

#include <sys/time.h>
#include <charconv>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

#include "gen/follower.grpc.pb.h"
#include "gen/follower.pb.h"

using namespace std;
using grpc::ChannelInterface;
using grpc::CreateChannel;
using grpc::ClientContext;


// TODO: Implement Leader election

class Leader {
    vector<unique_ptr<Follower::Stub>> stubs;
    const long NANO = 1000000000;

    static long get_offset(const long &reference, const long &to_adjust) {
        long diff = abs(reference - to_adjust);
        long sign = reference >= to_adjust ? 1 : -1;

        return sign * diff;
    }

    static long get_secs_offset(const timespec &reference, const timespec &to_adjust) {
        return get_offset(reference.tv_sec, to_adjust.tv_sec);
    }

    static long get_ns_offset(const timespec &reference, const timespec &to_adjust) {
        return get_offset(reference.tv_nsec, to_adjust.tv_nsec);
    }

    void synchronize() {
        timespec current_time{};
        clock_gettime(CLOCK_REALTIME, &current_time);
        cout << "Before synchronization" << endl;
        cout << "Seconds/nanoseconds since epoch: " << current_time.tv_sec << ":" << current_time.tv_nsec << endl;

        timespec average{current_time};
        vector<timespec> follower_times;

        int number_of_followers = stubs.size();
        for (int i = 0; i < number_of_followers; ++i) {
            const auto &stub = stubs[i];

            ClientContext context;
            GetTimeRequest request;
            Timespec response;

            auto start = chrono::steady_clock::now();
            stub->GetTime(&context, request, &response);
            auto end = chrono::steady_clock::now();

            chrono::nanoseconds elapsed_time_ns =
                    chrono::duration_cast<chrono::nanoseconds>(end - start);
            // Considering round-trip time, we assume that one-way elapsed time is half of it.
            chrono::nanoseconds elapsed_time_half_ns =
                    chrono::duration_cast<chrono::nanoseconds>((end - start) / 2);

            long half_diff_secs = elapsed_time_half_ns.count() % NANO;
            long half_diff_ns = elapsed_time_half_ns.count() - (half_diff_secs * NANO);

            long complete_diff_secs = elapsed_time_ns.count() % NANO;
            long complete_diff_ns = elapsed_time_ns.count() - (complete_diff_secs * NANO);

            // "Catch up"
            // For the current clock: Apart from considering the queried value, we add half of the round-trip time
            // to take into account only the time the follower took to send a response.
            // For the previous clocks: We add the round-trip time we took to get data for the current clock to each
            // previous clock (including the leader's) to catch up for the time lost obtaining the current clock.
            timespec current_follower_time{(response.seconds() + half_diff_secs),
                                           (response.nanoseconds() + half_diff_ns)};

            average.tv_sec += current_follower_time.tv_sec + ((i + 1) * complete_diff_secs);
            average.tv_nsec += current_follower_time.tv_nsec + ((i + 1) * complete_diff_ns);
            // No need to update the leader's time since it can be obtained anytime.
            // TODO: Optimize this
            for (auto &follower_time: follower_times) {
                follower_time.tv_sec += complete_diff_secs;
                follower_time.tv_nsec += complete_diff_ns;
            }
            follower_times.push_back(current_follower_time);

        }

        // +1 takes into account the leader as well
        average.tv_sec /= number_of_followers + 1;
        average.tv_nsec /= number_of_followers + 1;

        // Set leader's time
        clock_gettime(CLOCK_REALTIME, &current_time);
        const timeval final_time{get_secs_offset(average, current_time),
                                 get_ns_offset(average, current_time) / 1000};
        auto status_code = adjtime(&final_time, nullptr);
        if (status_code != 0)
            cout << "Couldn't adjust follower's time." << endl;


        // Take into account the time needed to set new adjusted times.
        auto start = chrono::steady_clock::now();

        for (int i = 0; i < number_of_followers; ++i) {
            const auto &stub = stubs[i];

            ClientContext context;
            SetTimeRequest request;
            SetTimeResponse response;

            auto end = chrono::steady_clock::now();
            chrono::nanoseconds elapsed_time_ns =
                    chrono::duration_cast<chrono::nanoseconds>(end - start);

            long diff_secs = elapsed_time_ns.count() % NANO;
            long diff_ns = elapsed_time_ns.count() - (diff_secs * NANO);

            const timespec new_time{average.tv_sec + diff_secs,
                                    average.tv_nsec + diff_ns};


            auto delta = new Timeval();
            delta->set_seconds(get_secs_offset(new_time, follower_times[i]));
            delta->set_microseconds(get_ns_offset(new_time, follower_times[i]) / 1000);

            request.set_allocated_delta(delta);

            stub->SetTime(&context, request, &response);
        }

        clock_gettime(CLOCK_REALTIME, &current_time);
        cout << "After synchronization" << endl;
        cout << "Seconds/nanoseconds since epoch: " << current_time.tv_sec << ":" << current_time.tv_nsec << "\n\n";
    }

public:
    Leader(const vector<shared_ptr<grpc::Channel>> &channels, int attempts) {
        for (const auto &channel: channels)
            stubs.push_back(Follower::NewStub(channel));

        for (auto i = 0; i < attempts; i++)
            synchronize();
    }
};


int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "Usage: ./leader <port1> <port2> ..." << endl;
        return -1;
    }

    vector<int> ports;
    for (int i = 1; i < argc; i++) {
        int port;
        auto [_, errc] = from_chars(argv[i], argv[i] + strlen(argv[i]), port);

        if (errc != std::errc{}) {
            cout << "Invalid port: " << argv[i] << endl;
            cout << "Usage: ./follower <port>" << endl;
            return -1;
        }

        ports.push_back(port);
    }

    vector<shared_ptr<grpc::Channel>> channels;

    for (const auto &port: ports) {
        auto channel =
                grpc::CreateChannel("localhost:" + to_string(port), grpc::InsecureChannelCredentials());
        channels.push_back(channel);
    }

    Leader leader{channels, 2};
}
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
#include <random>

#include "gen/time_server.grpc.pb.h"
#include "gen/time_server.pb.h"

using namespace std;
using grpc::ChannelInterface;
using grpc::CreateChannel;
using grpc::ClientContext;


class TimeClient {
    vector<unique_ptr<TimeServer::Stub>> stubs;
    const long NANO = 1000000000;

    void synchronize() {
        timespec current_time{};
        clock_gettime(CLOCK_REALTIME, &current_time);
        cout << "Before synchronization" << endl;
        cout << "Seconds/nanoseconds since epoch: " << current_time.tv_sec << ":" << current_time.tv_nsec << "\n\n";

        for (const auto &stub: stubs) {
            ClientContext context;
            GetTimeRequest request;
            Timespec response;

            auto start = chrono::steady_clock::now();
            auto status = stub->GetTime(&context, request, &response);
            auto end = chrono::steady_clock::now();

            // If the current server could not be reached, try the next one.
            if (!status.ok()) continue;

            // Considering round-trip time, we assume that one-way elapsed time is half of it.
            chrono::nanoseconds elapsed_time_half_ns =
                    chrono::duration_cast<chrono::nanoseconds>((end - start) / 2);

            long half_diff_secs = elapsed_time_half_ns.count() / NANO;
            long half_diff_ns = elapsed_time_half_ns.count() - (half_diff_secs * NANO);

            // Set new time queried from time-server
            timespec current_server_time{(response.seconds() + half_diff_secs),
                                         (response.nanoseconds() + half_diff_ns)};
            clock_settime(CLOCK_REALTIME, &current_server_time);


            clock_gettime(CLOCK_REALTIME, &current_time);
            cout << "After synchronization" << endl;
            cout << "Seconds/nanoseconds since epoch: " << current_time.tv_sec << ":" << current_time.tv_nsec << "\n\n";
            return;
        }


        clock_gettime(CLOCK_REALTIME, &current_time);
        cout << "Couldn't synchronize the client's clock" << endl;
        cout << "Seconds/nanoseconds since epoch: " << current_time.tv_sec << ":" << current_time.tv_nsec << "\n\n";
    }

public:
    explicit TimeClient(const vector<shared_ptr<grpc::Channel>> &channels) {
        for (const auto &channel: channels)
            stubs.push_back(TimeServer::NewStub(channel));

        synchronize();
    }
};


int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "Usage: ./time_client <port1> <port2> ..." << endl;
        return -1;
    }

    vector<int> ports;
    for (int i = 1; i < argc; i++) {
        int port;
        auto [_, errc] = from_chars(argv[i], argv[i] + strlen(argv[i]), port);

        if (errc != std::errc{}) {
            cout << "Invalid port: " << argv[i] << endl;
            cout << "Usage: ./time_client <port>" << endl;
            return -1;
        }

        ports.push_back(port);
    }


    // Initial random time
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 80);
    timeval offset{dist(mt), 0};

    cout << "Initial offset from real time: " << offset.tv_sec << " seconds" << endl;
    auto status_code = adjtime(&offset, nullptr);
    if (status_code != 0)
        cout << "Couldn't adjust follower's time." << endl;


    vector<shared_ptr<grpc::Channel>> channels;
    for (const auto &port: ports) {
        auto channel =
                grpc::CreateChannel("localhost:" + to_string(port), grpc::InsecureChannelCredentials());
        channels.push_back(channel);
    }

    TimeClient time_client{channels};
}
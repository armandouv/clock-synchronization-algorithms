//
// Created by armandouv on 3/10/22.
//

#include <iostream>
#include <sys/time.h>
#include <charconv>
#include <grpcpp/server_builder.h>
#include <random>
#include "gen/follower.grpc.pb.h"
#include "gen/follower.pb.h"

using namespace std;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::ServerWriter;
using grpc::Status;


class FollowerImpl final : public Follower::Service {
public:
    // Returns timespec from time.h
    Status GetTime(ServerContext *_context,
                   const GetTimeRequest *_request, Timespec *response) override {
        timespec current_time{};
        clock_gettime(CLOCK_REALTIME, &current_time);

        response->set_seconds(current_time.tv_sec);
        response->set_nanoseconds(current_time.tv_nsec);
        cout << "Dispatched leader - Seconds: " << current_time.tv_sec
             << ", Nanoseconds: " << current_time.tv_nsec << endl;

        return Status::OK;
    }

    Status SetTime(ServerContext *_context,
                   const SetTimeRequest *request, SetTimeResponse *_response) override {
        timespec current_time{};
        clock_gettime(CLOCK_REALTIME, &current_time);
        cout << "Before synchronization" << endl;
        cout << "Seconds/nanoseconds since epoch: " << current_time.tv_sec << ":" << current_time.tv_nsec << endl;

        const auto &delta_grpc = request->delta();
        const auto &old_delta_grpc = request->olddelta();

        timeval delta{delta_grpc.seconds(), delta_grpc.microseconds()};
        // TODO: Check for old delta and adjust until it is zero.
        timeval _old_delta{old_delta_grpc.seconds(), old_delta_grpc.microseconds()};

        auto status_code = adjtime(&delta, nullptr);
        if (status_code != 0)
            cout << "Couldn't adjust follower's time." << endl;


        clock_gettime(CLOCK_REALTIME, &current_time);
        cout << "After synchronization" << endl;
        cout << "Seconds/nanoseconds since epoch: " << current_time.tv_sec << ":" << current_time.tv_nsec << "\n\n";

        return status_code == 0 ?
               Status::OK : Status(grpc::INTERNAL, "Couldn't adjust follower's time.");
    }
};


int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Usage: ./follower <port>" << endl;
        return -1;
    }

    int port;
    auto [_, errc] = from_chars(argv[1], argv[1] + strlen(argv[1]), port);

    if (errc != std::errc{}) {
        cout << "Invalid port: " << argv[1] << endl;
        cout << "Usage: ./follower <port>" << endl;
        return -1;
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

    string server_address{"localhost:" + to_string(port)};
    FollowerImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Follower listening on " << server_address << std::endl;
    server->Wait();
}
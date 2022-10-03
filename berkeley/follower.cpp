//
// Created by armandouv on 3/10/22.
//

#include <iostream>
#include <sys/time.h>
#include <charconv>
#include <grpcpp/server_builder.h>
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

        return Status::OK;
    }

    Status SetTime(ServerContext *_context,
                   const SetTimeRequest *request, SetTimeResponse *_response) override {
        const auto& delta_grpc = request->delta();
        const auto& old_delta_grpc = request->olddelta();

        timeval delta{delta_grpc.seconds(), delta_grpc.microseconds()};
        // TODO: Check for old delta and adjust until it is zero.
        timeval _old_delta{old_delta_grpc.seconds(), old_delta_grpc.microseconds()};

        auto status_code = adjtime(&delta, nullptr);
        if (status_code != 0)
            cout << "Couldn't adjust follower's time." << endl;

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

    string server_address{"0.0.0.0:" + to_string(port)};
    FollowerImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Follower listening on " << server_address << std::endl;
    server->Wait();
}
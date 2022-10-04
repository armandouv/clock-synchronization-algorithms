//
// Created by armandouv on 3/10/22.
//

#include <iostream>
#include <sys/time.h>
#include <charconv>
#include <grpcpp/server_builder.h>
#include <random>
#include "gen/time_server.grpc.pb.h"
#include "gen/time_server.pb.h"

using namespace std;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::ServerWriter;
using grpc::Status;


class TimeServerImpl final : public TimeServer::Service {
public:
    // Returns timespec from time.h
    Status GetTime(ServerContext *_context,
                   const GetTimeRequest *_request, Timespec *response) override {
        timespec current_time{};
        clock_gettime(CLOCK_REALTIME, &current_time);

        response->set_seconds(current_time.tv_sec);
        response->set_nanoseconds(current_time.tv_nsec);
        cout << "Dispatched client - Seconds: " << current_time.tv_sec
             << ", Nanoseconds: " << current_time.tv_nsec << endl;

        return Status::OK;
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
        cout << "Usage: ./time_server <port>" << endl;
        return -1;
    }

    string server_address{"localhost:" + to_string(port)};
    TimeServerImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Time server listening on " << server_address << std::endl;
    server->Wait();
}
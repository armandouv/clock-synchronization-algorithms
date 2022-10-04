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


// TODO: Implement Leader election

class Leader {
    vector<unique_ptr<Follower::Stub>> stubs;

    void synchronize() {

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
        auto [_, errc] = from_chars(argv[1], argv[1] + strlen(argv[1]), port);

        if (errc != std::errc{}) {
            cout << "Invalid port: " << argv[1] << endl;
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
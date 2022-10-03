RPC

BerkeleyFollower
- datetime get_time()
- set_time(datetime time)

BerkeleyLeader


Follower must listen for requests, leader does not listen.
Leader get average of followers and listens

Use libfaketime to mock system calls to time.

Use Docker to isolate nodes.

Info on installing grpc and libfaketime.

Generating protos:

protoc -I ./protos --grpc_out=. --plugin=protoc-gen-grpc=\`which grpc_cpp_plugin` ./protos/follower.proto

protoc -I ./protos --cpp_out=. ./protos/follower.proto


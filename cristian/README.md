RPC

BerkeleyFollower

- datetime get_time()
- set_time(datetime time)

BerkeleyLeader

Follower must listen for requests, leader does not listen.
Leader get average of followers and listens

Use libfaketime to mock system calls to time.
Add env variable LD_PRELOAD=/usr/local/lib/faketime/libfaketime.so.1

Use Docker to isolate nodes.

Info on installing grpc and libfaketime.

Compiling proto:

protoc -I ./protos --grpc_out=gen --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./protos/time_server.proto
protoc -I ./protos --cpp_out=gen ./protos/time_server.proto

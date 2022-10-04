**Requirements**

Working installations of gRPC and libfaketime are needed. libfaketime needs to be compiled with the settime mocking
flag.

CMake and make are also required for building the project.

gRPC is used for RPC between nodes, and libfaketime is used for mocking time-related system calls. Otherwise, the
program
needs root permissions to change the system time.

**Compiling**

From berkeley directory:

`cmake CMakeLists.txt`

`make all`

**Usage**

Add env variable LD_PRELOAD=/usr/local/lib/faketime/libfaketime.so.1 (a valid installation of libfaketime is needed):

`export LD_PRELOAD=/usr/local/lib/faketime/libfaketime.so.1`

`./follower port1`

`... more followers`

`./leader port1 port2 ...more ports`

**Roadmap**

Use Docker to isolate nodes.

Add info on installing grpc and libfaketime.

Generating protos:

`protoc -I ./protos --grpc_out=gen --plugin=protoc-gen-grpc="which grpc_cpp_plugin" ./protos/follower.proto`

`protoc -I ./protos --cpp_out=gen ./protos/follower.proto`

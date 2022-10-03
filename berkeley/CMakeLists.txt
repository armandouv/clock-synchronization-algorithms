cmake_minimum_required(VERSION 3.23)
project(clock_synchronization_algorithms)

set(CMAKE_CXX_STANDARD 20)

include(../cmake/common.cmake)

# Proto file
get_filename_component(rg_proto "./protos/follower.proto" ABSOLUTE)
get_filename_component(rg_proto_path "${rg_proto}" PATH)

# Generated sources
set(rg_proto_srcs "gen/follower.pb.cc")
set(rg_proto_hdrs "gen/follower.pb.h")
set(rg_grpc_srcs "gen/follower.grpc.pb.cc")
set(rg_grpc_hdrs "gen/follower.grpc.pb.h")

# Include generated *.pb.h files
include_directories("gen")

# rg_grpc_proto
add_library(rg_grpc_proto
        ${rg_grpc_srcs}
        ${rg_grpc_hdrs}
        ${rg_proto_srcs}
        ${rg_proto_hdrs})
target_link_libraries(rg_grpc_proto
        ${_REFLECTION}
        ${_GRPC_GRPCPP}
        ${_PROTOBUF_LIBPROTOBUF})


# Targets (client|server)
foreach(_target
        follower leader)
    add_executable(${_target}
            "${_target}.cpp")
    target_link_libraries(${_target}
            rg_grpc_proto
            ${_REFLECTION}
            ${_GRPC_GRPCPP}
            ${_PROTOBUF_LIBPROTOBUF})
endforeach()

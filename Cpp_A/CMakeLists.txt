cmake_minimum_required(VERSION 3.26)

project(cpp_a)

file(GLOB PROTO_SRCS
    protos/*.h
    protos/*.cc
)

add_library(grpc_proto ${PROTO_SRCS})

target_include_directories(grpc_proto PRIVATE ${CMAKE_SOURCE_DIR})

add_executable(server src/server.cc)

target_include_directories(server PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(server grpc_proto)

load("@io_grpc_grpc_java//:java_grpc_library.bzl", "java_grpc_library")
load("@rules_java//java:defs.bzl", "java_proto_library")

java_grpc_library(
    name = "java_grpc",
    srcs = [":benchmark_proto"],
    visibility = ["//visibility:public"],
    deps = [":java_benchmark_proto"],
)

java_proto_library(
    name = "java_benchmark_proto",
    deps = [":benchmark_proto"],
    visibility = ["//visibility:public"],
)

proto_library(
    name = "benchmark_proto",
    srcs = glob(["*.proto"]),
    visibility = ["//visibility:public"],
    deps = [
        "@com_google_protobuf//:any_proto",
        "@com_google_protobuf//:duration_proto",
        "@com_google_protobuf//:timestamp_proto",
    ],
)

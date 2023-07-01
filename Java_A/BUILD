load("@rules_java//java:defs.bzl", "java_binary")

java_binary(
    name = "server",
    srcs = ["src/main/benchmark/Server.java"],
    main_class = "Server",
    runtime_deps = [
        "@io_grpc_grpc_java//netty",
    ],
    deps = [
        "//protos:java_benchmark_proto",
        "//protos:java_grpc",
        "@io_grpc_grpc_java//api",
        "@io_grpc_grpc_java//stub",
    ],
)

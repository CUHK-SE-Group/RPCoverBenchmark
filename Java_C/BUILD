load("@rules_java//java:defs.bzl", "java_binary")

java_binary(
    name = "server",
    srcs = ["src/main/benchmark/Server.java"],
    main_class = "Server",
    deps = [
        "//protos:java_grpc",
    ],
)

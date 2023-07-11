load("@scip_java//semanticdb-javac:defs.bzl", "java_binary")

java_binary(
    name = "server",
    srcs = glob(["src/main/benchmark/*.java"]),
    main_class = "Server",
    deps = [
        "@io_grpc_grpc_java//api",
        "@io_grpc_grpc_java//protobuf",
        "@io_grpc_grpc_java//stub",
        "@io_grpc_grpc_java//stub:javax_annotation",
        "@com_google_guava_guava//jar",
        "@com_google_protobuf//:protobuf_java",
        "@com_google_protobuf//:protobuf_java_util",
    ],
)

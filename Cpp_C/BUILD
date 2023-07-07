load("@rules_cc//cc:defs.bzl", "cc_binary")
load("@hedron_compile_commands//:refresh_compile_commands.bzl", "refresh_compile_commands")

cc_binary(
    name = "server",
    srcs = [
        "src/server.cc",
        "src/server.h",
    ],
    deps = [
        "//protos:cc_grpc",
    ],
)

refresh_compile_commands(
    name = "compile_commands",
    exclude_external_sources = True,
    exclude_headers = "external",
    targets = {
        "//Cpp_C:server": "",
    },
)

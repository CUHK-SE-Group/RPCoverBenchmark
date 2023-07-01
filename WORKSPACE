load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "io_grpc_grpc_java",
    strip_prefix = "grpc-java-1.56.1",
    url = "https://github.com/grpc/grpc-java/archive/refs/tags/v1.56.1.zip",
)

http_archive(
    name = "rules_jvm_external",
    sha256 = "c21ce8b8c4ccac87c809c317def87644cdc3a9dd650c74f41698d761c95175f3",
    strip_prefix = "rules_jvm_external-1498ac6ccd3ea9cdb84afed65aa257c57abf3e0a",
    url = "https://github.com/bazelbuild/rules_jvm_external/archive/1498ac6ccd3ea9cdb84afed65aa257c57abf3e0a.zip",
)

load("@rules_jvm_external//:defs.bzl", "maven_install")
load("@io_grpc_grpc_java//:repositories.bzl", "IO_GRPC_GRPC_JAVA_ARTIFACTS", "IO_GRPC_GRPC_JAVA_OVERRIDE_TARGETS", "grpc_java_repositories")

grpc_java_repositories()

# Protobuf now requires C++14 or higher, which requires Bazel configuration
# outside the WORKSPACE. See .bazelrc in this directory.
load("@com_google_protobuf//:protobuf_deps.bzl", "PROTOBUF_MAVEN_ARTIFACTS", "protobuf_deps")

protobuf_deps()

maven_install(
    artifacts = [
        "com.google.api.grpc:grpc-google-cloud-pubsub-v1:0.1.24",
        "com.google.api.grpc:proto-google-cloud-pubsub-v1:0.1.24",
    ] + IO_GRPC_GRPC_JAVA_ARTIFACTS + PROTOBUF_MAVEN_ARTIFACTS,
    generate_compat_repositories = True,
    override_targets = IO_GRPC_GRPC_JAVA_OVERRIDE_TARGETS,
    repositories = [
        "https://repo.maven.apache.org/maven2/",
    ],
)

load("@maven//:compat.bzl", "compat_repositories")

compat_repositories()

# git_repository(
#     name = "com_google_protobuf",
#     commit = "571fae48b0370722e26abb267da5699694ca46e8",
#     remote = "https://github.com/protocolbuffers/protobuf",
# )

# load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

# protobuf_deps()

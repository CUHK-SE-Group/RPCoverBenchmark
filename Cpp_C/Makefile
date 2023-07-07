all: server cc.json

server:
	bazel build //Cpp_C:server

cc.json:
	bazel run //Cpp_C:compile_commands

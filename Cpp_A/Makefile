all: server cc.json

server:
	bazel build //Cpp_A:server

cc.json:
	bazel run //Cpp_A:compile_commands

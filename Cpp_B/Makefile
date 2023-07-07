all: server cc.json

server:
	bazel build //Cpp_B:server

cc.json:
	bazel run //Cpp_B:compile_commands

all: server cc.json

server:
	bazel build //Cpp_A:server

cc.json:
	./generate_index.sh

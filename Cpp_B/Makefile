all: server cc.json

server:
	bazel build //Cpp_B:server

cc.json:
	./generate_index.sh

protos:
	protoc --go_out=Go_A  --grpc_out=Go_A --plugin=protoc-gen-grpc=/Users/lincyaw/go/bin/protoc-gen-go-grpc protos/Go_A.proto
	protoc --go_out=Go_B  --grpc_out=Go_B --plugin=protoc-gen-grpc=/Users/lincyaw/go/bin/protoc-gen-go-grpc protos/Go_B.proto
	protoc --go_out=Go_C  --grpc_out=Go_C --plugin=protoc-gen-grpc=/Users/lincyaw/go/bin/protoc-gen-go-grpc protos/Go_C.proto

clean:
	bazel clean

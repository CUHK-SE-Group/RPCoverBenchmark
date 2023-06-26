#!/bin/bash

PROTOC_GEN_GO=$(which protoc-gen-go)
PROTOC_GEN_GO_GRPC=$(which protoc-gen-go-grpc)
PROTOC_GEN_PY_GRPC=$(which grpc_python_plugin)
PROTO_DIR=protos
GO_OUT_DIRS=(Go_A Go_B Go_C Cpp_A Cpp_B Cpp_C Java_A Java_B Java_C Ts_A Ts_B Ts_C Python_A Python_B Python_C)

for dir in "${GO_OUT_DIRS[@]}"; do
  if [ ! -d "$dir" ]; then
    mkdir "$dir"
  fi
  protoc --go_out=Go_A --go-grpc_out=Go_A --plugin=protoc-gen-go=$PROTOC_GEN_GO --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/*.proto
  protoc --go_out=Go_B --go-grpc_out=Go_B --plugin=protoc-gen-go=$PROTOC_GEN_GO --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/*.proto
  protoc --go_out=Go_C --go-grpc_out=Go_C --plugin=protoc-gen-go=$PROTOC_GEN_GO --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/*.proto
  protoc --python_out=Python_A --python-grpc_out=Python_A --pyi_out=. --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC $PROTO_DIR/*.proto
  protoc --python_out=Python_B --python-grpc_out=Python_B --pyi_out=. --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC $PROTO_DIR/*.proto
  protoc --python_out=Python_C --python-grpc_out=Python_C --pyi_out=. --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC $PROTO_DIR/*.proto
done

#!/bin/bash

PROTOC_GEN_GO=$(which protoc-gen-go)
PROTOC_GEN_GO_GRPC=$(which protoc-gen-go-grpc)
PROTO_DIR=protos
GO_OUT_DIRS=(Go_A Go_B Go_C Cpp_B Cpp_C Java_A Java_B Ts_B Ts_C)

for dir in "${GO_OUT_DIRS[@]}"; do
  if [ ! -d "$dir" ]; then
    mkdir "$dir"
  fi
  protoc --go_out=Go_A --go-grpc_out=Go_A --plugin=protoc-gen-go=$PROTOC_GEN_GO --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/$dir.proto
done

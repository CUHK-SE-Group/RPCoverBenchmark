#!/bin/bash

PROTOC_GEN_GO=$(which protoc-gen-go)
PROTOC_GEN_GO_GRPC=$(which protoc-gen-go-grpc)
PROTOC_GEN_PY_GRPC=$(which grpc_python_plugin)
PROTOC_GEN_CPP_GRPC=$(which grpc_cpp_plugin)
PROTO_DIR=protos
GO_OUT_DIRS=(Go_A Go_B Go_C Cpp_A Cpp_B Cpp_C Java_A Java_B Java_C Ts_A Ts_B Ts_C Python_A Python_B Python_C message)
TS_FOLDER=(Ts_A Ts_B Ts_C)
GO_FOLDER=(Go_A Go_B Go_C)
PYTHON_FOLDER=(Python_A Python_B Python_C)

# for dir in "${GO_OUT_DIRS[@]}"; do
#   if [ ! -d "$dir" ]; then
#     mkdir "$dir"
#   fi
#   protoc --go_out=Go_A --go-grpc_out=Go_A --plugin=protoc-gen-go=$PROTOC_GEN_GO --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/*.proto
#   protoc --go_out=Go_B --go-grpc_out=Go_B --plugin=protoc-gen-go=$PROTOC_GEN_GO --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/*.proto
#   protoc --go_out=Go_C --go-grpc_out=Go_C --plugin=protoc-gen-go=$PROTOC_GEN_GO --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/*.proto
#   protoc --python_out=Python_A --python-grpc_out=Python_A --pyi_out=Python_A --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC $PROTO_DIR/*.proto
#   protoc --python_out=Python_B --python-grpc_out=Python_B --pyi_out=Python_B --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC $PROTO_DIR/*.proto
#   protoc --python_out=Python_C --python-grpc_out=Python_C --pyi_out=Python_C --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC $PROTO_DIR/*.proto
#   protoc --cpp_out=Cpp_A --grpc_out=Cpp_A --plugin=protoc-gen-grpc=$PROTOC_GEN_CPP_GRPC $PROTO_DIR/*.proto
#   protoc --cpp_out=Cpp_B --grpc_out=Cpp_B --plugin=protoc-gen-grpc=$PROTOC_GEN_CPP_GRPC $PROTO_DIR/*.proto
#   protoc --cpp_out=Cpp_C --grpc_out=Cpp_C --plugin=protoc-gen-grpc=$PROTOC_GEN_CPP_GRPC $PROTO_DIR/*.proto
for file in "${GO_FOLDER[@]}"; do
  for dir in "${GO_OUT_DIRS[@]}"; do
    if [ ! -d "$dir" ]; then
      mkdir "$dir"
    fi
    protoc --go_out=$file --go-grpc_out=$file --plugin=protoc-gen-go=$PROTOC_GEN_GO --lsif_out=$file --plugin=./protoc-gen-lsif --lsif_opt=grpc_file=$file/proto/"$dir"_grpc.pb.go --plugin=protoc-gen-go-grpc=$PROTOC_GEN_GO_GRPC $PROTO_DIR/"$dir".proto
  done
done

for file in "${PYTHON_FOLDER[@]}"; do
  for dir in "${GO_OUT_DIRS[@]}"; do
    if [ ! -d "$dir" ]; then
      mkdir "$dir"
    fi
    protoc --python_out=$file --python-grpc_out=$file --pyi_out=$file --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC $PROTO_DIR/"$dir".proto
    # protoc --python_out=$file --python-grpc_out=$file --pyi_out=$file --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC --lsif_out=$file --plugin=./protoc-gen-lsif --lsif_opt=grpc_file=$file/protos/"$dir"_pb2_grpc.py $PROTO_DIR/"$dir".proto
  done
done

for file in "${TS_FOLDER[@]}"; do
  for dir in "${GO_OUT_DIRS[@]}"; do
    if [ ! -d "$dir" ]; then
      mkdir "$dir"
    fi
    # npx grpc_tools_node_protoc --ts_out=$file --js_out=import_style=commonjs,binary:$file --grpc_out="grpc_js:$file" --plugin=protoc-gen-grpc=$PROTOC_GEN_NODE_GRPC -I ./ $PROTO_DIR/"$dir".proto
    # protoc --python_out=$file --python-grpc_out=$file --pyi_out=$file --plugin=protoc-gen-python-grpc=$PROTOC_GEN_PY_GRPC --lsif_out=$file --plugin=./protoc-gen-lsif --lsif_opt=grpc_file=$file/protos/"$dir"_pb2_grpc.py $PROTO_DIR/"$dir".proto
    protoc --plugin=$(npm root)/.bin/protoc-gen-ts_proto \
      --ts_proto_out=$file \
      --ts_proto_opt=outputServices=grpc-js \
      --ts_proto_opt=esModuleInterop=true \
      -I=./ protos/"$dir".proto
  done
done

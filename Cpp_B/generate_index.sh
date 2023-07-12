#!/bin/bash

PREV_DIR=$(pwd)
CASE_DIR=$(readlink -f $(dirname "$0"))
ROOT_DIR=$CASE_DIR/..
SCIP_CLANG_DIR=$ROOT_DIR/third_party/scip-clang-0.2.3
SCIP_CLANG_BIN=$SCIP_CLANG_DIR/bazel-bin/indexer/scip-clang

CC_PATH=$CASE_DIR/build/compile_commands.json

OUTPUT_DIR=$1

cd $CASE_DIR

if [ -d "build" ]; then
    rm -rf ./build
fi

mkdir build && cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ../

cd $SCIP_CLANG_DIR
bazel build //indexer:scip-clang --config=release

cd $ROOT_DIR
$SCIP_CLANG_BIN --compdb-path=$CC_PATH --index-output-path=$OUTPUT_DIR/index.scip

cd $PREV_DIR

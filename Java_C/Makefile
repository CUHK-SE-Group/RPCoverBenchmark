all: build scip

build:
	bazel build //Java_C:server --@scip_java//semanticdb-javac:enabled=true

scip: build
	bazel run @scip_java//scip-semanticdb:bazel -- --sourceroot $$PWD/.. --output $$PWD/index.scip

all: build scip

build:
	bazel build //Java_C:server --@scip_java//semanticdb-javac:enabled=true

scip:
	bazel run @scip_java//scip-semanticdb:bazel -- --sourceroot $$PWD/.. --no-query-maven-imports --output $$PWD/index.scip
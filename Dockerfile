FROM debian:unstable
RUN rm /etc/apt/sources.list.d/debian.sources
RUN echo "deb http://mirrors.ustc.edu.cn/debian/ sid main contrib" > /etc/apt/sources.list
RUN apt update && apt install apt-transport-https curl gnupg -y
RUN curl -fsSL https://bazel.build/bazel-release.pub.gpg | gpg --dearmor >bazel-archive-keyring.gpg
RUN mv bazel-archive-keyring.gpg /usr/share/keyrings
RUN echo "deb [arch=amd64 signed-by=/usr/share/keyrings/bazel-archive-keyring.gpg] https://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list
RUN apt update && apt install wget build-essential ninja-build cmake golang gcc clang libgrpc++-dev libgrpc-dev protobuf-compiler-grpc protobuf-compiler python3 python-is-python3 python3-pip pipx openjdk-11-jdk bazel bazel-5.3.0 bazel-6.1.2 npm -y
RUN npm install -g @sourcegraph/scip-python
RUN npm install -g @sourcegraph/scip-typescript
COPY . /opt/RPCoverBenchmark/
WORKDIR /opt/RPCoverBenchmark
RUN wget https://github.com/sourcegraph/scip-clang/releases/download/v0.2.3/scip-clang-x86_64-linux -o scip-clang

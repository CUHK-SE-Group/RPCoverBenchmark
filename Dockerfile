FROM debian:unstable
COPY third_party /opt/third_party/
COPY . /opt/RPCoverBenchmark
WORKDIR /opt/RPCoverBenchmark
RUN bash -c "./install.sh"
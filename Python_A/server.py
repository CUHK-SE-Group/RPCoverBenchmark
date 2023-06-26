import inspect
import logging
from protos.Python_A_pb2_grpc import *
from concurrent import futures
import grpc


class Python_A(Python_AServicer):
    def Python_A_1(self, request, context):
        logging.info(f"{inspect.currentframe()} called by {request}")

    def Python_A_2(self, request, context):
        pass

    def Python_A_3(self, request, context):
        pass


if __name__ == '__main__':
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    add_Python_AServicer_to_server(Python_A(), server)
    server.add_insecure_port('[::]:8324')
    server.start()
    server.wait_for_termination()

import inspect

from protos.Python_A_pb2_grpc import *
from concurrent import futures
import grpc

def get_current_function_name():
    frame = inspect.currentframe()
    return frame.f_code.co_name

class Python_A(Python_AServicer):
    def Python_A_1(self, request, context):
        pass

    def Python_A_2(self, request, context):
        pass

    def Python_A_3(self, request, context):
        pass

def function1():
    name = get_current_function_name()
    print(name)


if __name__ == '__main__':
    function1()
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    add_Python_AServicer_to_server(Python_A(), server)
    server.add_insecure_port('[::]:8080')
    server.start()
    server.wait_for_termination()

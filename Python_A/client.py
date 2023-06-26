from __future__ import print_function

import logging
import random

import grpc
from protos.Python_A_pb2 import *
from protos.Python_A_pb2_grpc import *


def run():
    with grpc.insecure_channel('localhost:8324') as channel:
        stub = Python_AStub(channel)
        stub.Python_A_1("fuck")


if __name__ == '__main__':
    run()

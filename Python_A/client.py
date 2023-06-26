from __future__ import print_function

import logging
import random

import grpc

import protos.message_pb2
from protos.Python_A_pb2 import *
from protos.Python_A_pb2_grpc import *
from protos.message_pb2 import *

def run():
    with grpc.insecure_channel('localhost:8324') as channel:
        stub = Python_AStub(channel)
        msg = protos.message_pb2.CommonMessage()
        msg.my_string = "fuck"
        stub.Python_A_1(msg)


if __name__ == '__main__':
    run()

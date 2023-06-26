# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from protos import message_pb2 as protos_dot_message__pb2


class Python_AStub(object):
    """定义交易履约系统服务接口
    """

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.Python_A_1 = channel.unary_unary(
                '/protos.Python_A/Python_A_1',
                request_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
                response_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                )
        self.Python_A_2 = channel.unary_unary(
                '/protos.Python_A/Python_A_2',
                request_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
                response_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                )
        self.Python_A_3 = channel.unary_unary(
                '/protos.Python_A/Python_A_3',
                request_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
                response_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                )


class Python_AServicer(object):
    """定义交易履约系统服务接口
    """

    def Python_A_1(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Python_A_2(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Python_A_3(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_Python_AServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'Python_A_1': grpc.unary_unary_rpc_method_handler(
                    servicer.Python_A_1,
                    request_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                    response_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
            ),
            'Python_A_2': grpc.unary_unary_rpc_method_handler(
                    servicer.Python_A_2,
                    request_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                    response_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
            ),
            'Python_A_3': grpc.unary_unary_rpc_method_handler(
                    servicer.Python_A_3,
                    request_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                    response_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'protos.Python_A', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class Python_A(object):
    """定义交易履约系统服务接口
    """

    @staticmethod
    def Python_A_1(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/protos.Python_A/Python_A_1',
            protos_dot_message__pb2.CommonMessage.SerializeToString,
            protos_dot_message__pb2.CommonMessage.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Python_A_2(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/protos.Python_A/Python_A_2',
            protos_dot_message__pb2.CommonMessage.SerializeToString,
            protos_dot_message__pb2.CommonMessage.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Python_A_3(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/protos.Python_A/Python_A_3',
            protos_dot_message__pb2.CommonMessage.SerializeToString,
            protos_dot_message__pb2.CommonMessage.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

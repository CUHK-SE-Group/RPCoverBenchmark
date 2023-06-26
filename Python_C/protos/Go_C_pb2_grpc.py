# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from protos import message_pb2 as protos_dot_message__pb2


class Go_CStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.Go_C_1 = channel.unary_unary(
                '/protos.Go_C/Go_C_1',
                request_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
                response_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                )
        self.Go_C_2 = channel.unary_unary(
                '/protos.Go_C/Go_C_2',
                request_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
                response_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                )
        self.Go_C_3 = channel.unary_unary(
                '/protos.Go_C/Go_C_3',
                request_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
                response_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                )


class Go_CServicer(object):
    """Missing associated documentation comment in .proto file."""

    def Go_C_1(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Go_C_2(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Go_C_3(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_Go_CServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'Go_C_1': grpc.unary_unary_rpc_method_handler(
                    servicer.Go_C_1,
                    request_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                    response_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
            ),
            'Go_C_2': grpc.unary_unary_rpc_method_handler(
                    servicer.Go_C_2,
                    request_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                    response_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
            ),
            'Go_C_3': grpc.unary_unary_rpc_method_handler(
                    servicer.Go_C_3,
                    request_deserializer=protos_dot_message__pb2.CommonMessage.FromString,
                    response_serializer=protos_dot_message__pb2.CommonMessage.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'protos.Go_C', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class Go_C(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def Go_C_1(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/protos.Go_C/Go_C_1',
            protos_dot_message__pb2.CommonMessage.SerializeToString,
            protos_dot_message__pb2.CommonMessage.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Go_C_2(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/protos.Go_C/Go_C_2',
            protos_dot_message__pb2.CommonMessage.SerializeToString,
            protos_dot_message__pb2.CommonMessage.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Go_C_3(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/protos.Go_C/Go_C_3',
            protos_dot_message__pb2.CommonMessage.SerializeToString,
            protos_dot_message__pb2.CommonMessage.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

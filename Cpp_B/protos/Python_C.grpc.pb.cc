// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/Python_C.proto

#include "protos/Python_C.pb.h"
#include "protos/Python_C.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace protos {

static const char* Python_C_method_names[] = {
  "/protos.Python_C/Python_C_1",
  "/protos.Python_C/Python_C_2",
  "/protos.Python_C/Python_C_3",
};

std::unique_ptr< Python_C::Stub> Python_C::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Python_C::Stub> stub(new Python_C::Stub(channel, options));
  return stub;
}

Python_C::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Python_C_1_(Python_C_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Python_C_2_(Python_C_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Python_C_3_(Python_C_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Python_C::Stub::Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Python_C_1_, context, request, response);
}

void Python_C::Stub::async::Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Python_C_1_, context, request, response, std::move(f));
}

void Python_C::Stub::async::Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Python_C_1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Python_C::Stub::PrepareAsyncPython_C_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Python_C_1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Python_C::Stub::AsyncPython_C_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPython_C_1Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Python_C::Stub::Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Python_C_2_, context, request, response);
}

void Python_C::Stub::async::Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Python_C_2_, context, request, response, std::move(f));
}

void Python_C::Stub::async::Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Python_C_2_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Python_C::Stub::PrepareAsyncPython_C_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Python_C_2_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Python_C::Stub::AsyncPython_C_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPython_C_2Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Python_C::Stub::Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Python_C_3_, context, request, response);
}

void Python_C::Stub::async::Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Python_C_3_, context, request, response, std::move(f));
}

void Python_C::Stub::async::Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Python_C_3_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Python_C::Stub::PrepareAsyncPython_C_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Python_C_3_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Python_C::Stub::AsyncPython_C_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPython_C_3Raw(context, request, cq);
  result->StartCall();
  return result;
}

Python_C::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Python_C_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Python_C::Service, ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Python_C::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::CommonMessage* req,
             ::protos::CommonMessage* resp) {
               return service->Python_C_1(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Python_C_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Python_C::Service, ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Python_C::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::CommonMessage* req,
             ::protos::CommonMessage* resp) {
               return service->Python_C_2(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Python_C_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Python_C::Service, ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Python_C::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::CommonMessage* req,
             ::protos::CommonMessage* resp) {
               return service->Python_C_3(ctx, req, resp);
             }, this)));
}

Python_C::Service::~Service() {
}

::grpc::Status Python_C::Service::Python_C_1(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Python_C::Service::Python_C_2(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Python_C::Service::Python_C_3(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace protos


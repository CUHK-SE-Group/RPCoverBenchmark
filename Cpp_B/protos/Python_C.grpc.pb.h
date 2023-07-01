// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/Python_C.proto
#ifndef GRPC_protos_2fPython_5fC_2eproto__INCLUDED
#define GRPC_protos_2fPython_5fC_2eproto__INCLUDED

#include "protos/Python_C.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace protos {

class Python_C final {
 public:
  static constexpr char const* service_full_name() {
    return "protos.Python_C";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> AsyncPython_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(AsyncPython_C_1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> PrepareAsyncPython_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(PrepareAsyncPython_C_1Raw(context, request, cq));
    }
    virtual ::grpc::Status Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> AsyncPython_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(AsyncPython_C_2Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> PrepareAsyncPython_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(PrepareAsyncPython_C_2Raw(context, request, cq));
    }
    virtual ::grpc::Status Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> AsyncPython_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(AsyncPython_C_3Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>> PrepareAsyncPython_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>>(PrepareAsyncPython_C_3Raw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* AsyncPython_C_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* PrepareAsyncPython_C_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* AsyncPython_C_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* PrepareAsyncPython_C_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* AsyncPython_C_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::CommonMessage>* PrepareAsyncPython_C_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> AsyncPython_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(AsyncPython_C_1Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> PrepareAsyncPython_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(PrepareAsyncPython_C_1Raw(context, request, cq));
    }
    ::grpc::Status Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> AsyncPython_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(AsyncPython_C_2Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> PrepareAsyncPython_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(PrepareAsyncPython_C_2Raw(context, request, cq));
    }
    ::grpc::Status Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> AsyncPython_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(AsyncPython_C_3Raw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>> PrepareAsyncPython_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>>(PrepareAsyncPython_C_3Raw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) override;
      void Python_C_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) override;
      void Python_C_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)>) override;
      void Python_C_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* AsyncPython_C_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* PrepareAsyncPython_C_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* AsyncPython_C_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* PrepareAsyncPython_C_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* AsyncPython_C_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* PrepareAsyncPython_C_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Python_C_1_;
    const ::grpc::internal::RpcMethod rpcmethod_Python_C_2_;
    const ::grpc::internal::RpcMethod rpcmethod_Python_C_3_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Python_C_1(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response);
    virtual ::grpc::Status Python_C_2(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response);
    virtual ::grpc::Status Python_C_3(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Python_C_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Python_C_1() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Python_C_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPython_C_1(::grpc::ServerContext* context, ::protos::CommonMessage* request, ::grpc::ServerAsyncResponseWriter< ::protos::CommonMessage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Python_C_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Python_C_2() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Python_C_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPython_C_2(::grpc::ServerContext* context, ::protos::CommonMessage* request, ::grpc::ServerAsyncResponseWriter< ::protos::CommonMessage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Python_C_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Python_C_3() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Python_C_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPython_C_3(::grpc::ServerContext* context, ::protos::CommonMessage* request, ::grpc::ServerAsyncResponseWriter< ::protos::CommonMessage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Python_C_1<WithAsyncMethod_Python_C_2<WithAsyncMethod_Python_C_3<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Python_C_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Python_C_1() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) { return this->Python_C_1(context, request, response); }));}
    void SetMessageAllocatorFor_Python_C_1(
        ::grpc::MessageAllocator< ::protos::CommonMessage, ::protos::CommonMessage>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Python_C_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Python_C_1(
      ::grpc::CallbackServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Python_C_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Python_C_2() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) { return this->Python_C_2(context, request, response); }));}
    void SetMessageAllocatorFor_Python_C_2(
        ::grpc::MessageAllocator< ::protos::CommonMessage, ::protos::CommonMessage>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Python_C_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Python_C_2(
      ::grpc::CallbackServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Python_C_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Python_C_3() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) { return this->Python_C_3(context, request, response); }));}
    void SetMessageAllocatorFor_Python_C_3(
        ::grpc::MessageAllocator< ::protos::CommonMessage, ::protos::CommonMessage>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::protos::CommonMessage, ::protos::CommonMessage>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Python_C_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Python_C_3(
      ::grpc::CallbackServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Python_C_1<WithCallbackMethod_Python_C_2<WithCallbackMethod_Python_C_3<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Python_C_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Python_C_1() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Python_C_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Python_C_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Python_C_2() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Python_C_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Python_C_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Python_C_3() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Python_C_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Python_C_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Python_C_1() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Python_C_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPython_C_1(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Python_C_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Python_C_2() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Python_C_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPython_C_2(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Python_C_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Python_C_3() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_Python_C_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPython_C_3(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Python_C_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Python_C_1() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Python_C_1(context, request, response); }));
    }
    ~WithRawCallbackMethod_Python_C_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Python_C_1(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Python_C_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Python_C_2() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Python_C_2(context, request, response); }));
    }
    ~WithRawCallbackMethod_Python_C_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Python_C_2(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Python_C_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Python_C_3() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Python_C_3(context, request, response); }));
    }
    ~WithRawCallbackMethod_Python_C_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Python_C_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Python_C_3(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Python_C_1 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Python_C_1() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::protos::CommonMessage, ::protos::CommonMessage>* streamer) {
                       return this->StreamedPython_C_1(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Python_C_1() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Python_C_1(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPython_C_1(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::CommonMessage,::protos::CommonMessage>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Python_C_2 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Python_C_2() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::protos::CommonMessage, ::protos::CommonMessage>* streamer) {
                       return this->StreamedPython_C_2(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Python_C_2() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Python_C_2(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPython_C_2(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::CommonMessage,::protos::CommonMessage>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Python_C_3 : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Python_C_3() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::protos::CommonMessage, ::protos::CommonMessage>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::protos::CommonMessage, ::protos::CommonMessage>* streamer) {
                       return this->StreamedPython_C_3(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Python_C_3() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Python_C_3(::grpc::ServerContext* /*context*/, const ::protos::CommonMessage* /*request*/, ::protos::CommonMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPython_C_3(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::CommonMessage,::protos::CommonMessage>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Python_C_1<WithStreamedUnaryMethod_Python_C_2<WithStreamedUnaryMethod_Python_C_3<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Python_C_1<WithStreamedUnaryMethod_Python_C_2<WithStreamedUnaryMethod_Python_C_3<Service > > > StreamedService;
};

}  // namespace protos


#endif  // GRPC_protos_2fPython_5fC_2eproto__INCLUDED

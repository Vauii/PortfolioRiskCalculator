// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: PortfolioBuilder.proto
#ifndef GRPC_PortfolioBuilder_2eproto__INCLUDED
#define GRPC_PortfolioBuilder_2eproto__INCLUDED

#include "PortfolioBuilder.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace portfolio {

class PortfolioBuilder final {
 public:
  static constexpr char const* service_full_name() {
    return "portfolio.PortfolioBuilder";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // The client calls this method to build a portfolio
    virtual ::grpc::Status BuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::portfolio::PortfolioResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::PortfolioResponse>> AsyncBuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::PortfolioResponse>>(AsyncBuildPortfolioRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::PortfolioResponse>> PrepareAsyncBuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::PortfolioResponse>>(PrepareAsyncBuildPortfolioRaw(context, request, cq));
    }
    // Another service calls this method to save the builded portfolio
    virtual ::grpc::Status SendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::portfolio::StorageResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::StorageResponse>> AsyncSendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::StorageResponse>>(AsyncSendPortfolioToStorageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::StorageResponse>> PrepareAsyncSendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::StorageResponse>>(PrepareAsyncSendPortfolioToStorageRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // The client calls this method to build a portfolio
      virtual void BuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest* request, ::portfolio::PortfolioResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void BuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest* request, ::portfolio::PortfolioResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Another service calls this method to save the builded portfolio
      virtual void SendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest* request, ::portfolio::StorageResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest* request, ::portfolio::StorageResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::PortfolioResponse>* AsyncBuildPortfolioRaw(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::PortfolioResponse>* PrepareAsyncBuildPortfolioRaw(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::StorageResponse>* AsyncSendPortfolioToStorageRaw(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::portfolio::StorageResponse>* PrepareAsyncSendPortfolioToStorageRaw(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status BuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::portfolio::PortfolioResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::PortfolioResponse>> AsyncBuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::PortfolioResponse>>(AsyncBuildPortfolioRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::PortfolioResponse>> PrepareAsyncBuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::PortfolioResponse>>(PrepareAsyncBuildPortfolioRaw(context, request, cq));
    }
    ::grpc::Status SendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::portfolio::StorageResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::StorageResponse>> AsyncSendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::StorageResponse>>(AsyncSendPortfolioToStorageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::StorageResponse>> PrepareAsyncSendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::portfolio::StorageResponse>>(PrepareAsyncSendPortfolioToStorageRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void BuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest* request, ::portfolio::PortfolioResponse* response, std::function<void(::grpc::Status)>) override;
      void BuildPortfolio(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest* request, ::portfolio::PortfolioResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void SendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest* request, ::portfolio::StorageResponse* response, std::function<void(::grpc::Status)>) override;
      void SendPortfolioToStorage(::grpc::ClientContext* context, const ::portfolio::StorageRequest* request, ::portfolio::StorageResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::portfolio::PortfolioResponse>* AsyncBuildPortfolioRaw(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::portfolio::PortfolioResponse>* PrepareAsyncBuildPortfolioRaw(::grpc::ClientContext* context, const ::portfolio::PortfolioRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::portfolio::StorageResponse>* AsyncSendPortfolioToStorageRaw(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::portfolio::StorageResponse>* PrepareAsyncSendPortfolioToStorageRaw(::grpc::ClientContext* context, const ::portfolio::StorageRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_BuildPortfolio_;
    const ::grpc::internal::RpcMethod rpcmethod_SendPortfolioToStorage_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // The client calls this method to build a portfolio
    virtual ::grpc::Status BuildPortfolio(::grpc::ServerContext* context, const ::portfolio::PortfolioRequest* request, ::portfolio::PortfolioResponse* response);
    // Another service calls this method to save the builded portfolio
    virtual ::grpc::Status SendPortfolioToStorage(::grpc::ServerContext* context, const ::portfolio::StorageRequest* request, ::portfolio::StorageResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_BuildPortfolio : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_BuildPortfolio() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_BuildPortfolio() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BuildPortfolio(::grpc::ServerContext* /*context*/, const ::portfolio::PortfolioRequest* /*request*/, ::portfolio::PortfolioResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBuildPortfolio(::grpc::ServerContext* context, ::portfolio::PortfolioRequest* request, ::grpc::ServerAsyncResponseWriter< ::portfolio::PortfolioResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SendPortfolioToStorage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SendPortfolioToStorage() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SendPortfolioToStorage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendPortfolioToStorage(::grpc::ServerContext* /*context*/, const ::portfolio::StorageRequest* /*request*/, ::portfolio::StorageResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendPortfolioToStorage(::grpc::ServerContext* context, ::portfolio::StorageRequest* request, ::grpc::ServerAsyncResponseWriter< ::portfolio::StorageResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_BuildPortfolio<WithAsyncMethod_SendPortfolioToStorage<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_BuildPortfolio : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_BuildPortfolio() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::portfolio::PortfolioRequest, ::portfolio::PortfolioResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::portfolio::PortfolioRequest* request, ::portfolio::PortfolioResponse* response) { return this->BuildPortfolio(context, request, response); }));}
    void SetMessageAllocatorFor_BuildPortfolio(
        ::grpc::MessageAllocator< ::portfolio::PortfolioRequest, ::portfolio::PortfolioResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::portfolio::PortfolioRequest, ::portfolio::PortfolioResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_BuildPortfolio() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BuildPortfolio(::grpc::ServerContext* /*context*/, const ::portfolio::PortfolioRequest* /*request*/, ::portfolio::PortfolioResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* BuildPortfolio(
      ::grpc::CallbackServerContext* /*context*/, const ::portfolio::PortfolioRequest* /*request*/, ::portfolio::PortfolioResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_SendPortfolioToStorage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SendPortfolioToStorage() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::portfolio::StorageRequest, ::portfolio::StorageResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::portfolio::StorageRequest* request, ::portfolio::StorageResponse* response) { return this->SendPortfolioToStorage(context, request, response); }));}
    void SetMessageAllocatorFor_SendPortfolioToStorage(
        ::grpc::MessageAllocator< ::portfolio::StorageRequest, ::portfolio::StorageResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::portfolio::StorageRequest, ::portfolio::StorageResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SendPortfolioToStorage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendPortfolioToStorage(::grpc::ServerContext* /*context*/, const ::portfolio::StorageRequest* /*request*/, ::portfolio::StorageResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendPortfolioToStorage(
      ::grpc::CallbackServerContext* /*context*/, const ::portfolio::StorageRequest* /*request*/, ::portfolio::StorageResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_BuildPortfolio<WithCallbackMethod_SendPortfolioToStorage<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_BuildPortfolio : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_BuildPortfolio() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_BuildPortfolio() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BuildPortfolio(::grpc::ServerContext* /*context*/, const ::portfolio::PortfolioRequest* /*request*/, ::portfolio::PortfolioResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SendPortfolioToStorage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SendPortfolioToStorage() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SendPortfolioToStorage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendPortfolioToStorage(::grpc::ServerContext* /*context*/, const ::portfolio::StorageRequest* /*request*/, ::portfolio::StorageResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_BuildPortfolio : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_BuildPortfolio() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_BuildPortfolio() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BuildPortfolio(::grpc::ServerContext* /*context*/, const ::portfolio::PortfolioRequest* /*request*/, ::portfolio::PortfolioResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBuildPortfolio(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendPortfolioToStorage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SendPortfolioToStorage() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_SendPortfolioToStorage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendPortfolioToStorage(::grpc::ServerContext* /*context*/, const ::portfolio::StorageRequest* /*request*/, ::portfolio::StorageResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendPortfolioToStorage(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_BuildPortfolio : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_BuildPortfolio() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->BuildPortfolio(context, request, response); }));
    }
    ~WithRawCallbackMethod_BuildPortfolio() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BuildPortfolio(::grpc::ServerContext* /*context*/, const ::portfolio::PortfolioRequest* /*request*/, ::portfolio::PortfolioResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* BuildPortfolio(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SendPortfolioToStorage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SendPortfolioToStorage() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SendPortfolioToStorage(context, request, response); }));
    }
    ~WithRawCallbackMethod_SendPortfolioToStorage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendPortfolioToStorage(::grpc::ServerContext* /*context*/, const ::portfolio::StorageRequest* /*request*/, ::portfolio::StorageResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendPortfolioToStorage(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_BuildPortfolio : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_BuildPortfolio() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::portfolio::PortfolioRequest, ::portfolio::PortfolioResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::portfolio::PortfolioRequest, ::portfolio::PortfolioResponse>* streamer) {
                       return this->StreamedBuildPortfolio(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_BuildPortfolio() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status BuildPortfolio(::grpc::ServerContext* /*context*/, const ::portfolio::PortfolioRequest* /*request*/, ::portfolio::PortfolioResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedBuildPortfolio(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::portfolio::PortfolioRequest,::portfolio::PortfolioResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendPortfolioToStorage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SendPortfolioToStorage() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::portfolio::StorageRequest, ::portfolio::StorageResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::portfolio::StorageRequest, ::portfolio::StorageResponse>* streamer) {
                       return this->StreamedSendPortfolioToStorage(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SendPortfolioToStorage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendPortfolioToStorage(::grpc::ServerContext* /*context*/, const ::portfolio::StorageRequest* /*request*/, ::portfolio::StorageResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendPortfolioToStorage(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::portfolio::StorageRequest,::portfolio::StorageResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_BuildPortfolio<WithStreamedUnaryMethod_SendPortfolioToStorage<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_BuildPortfolio<WithStreamedUnaryMethod_SendPortfolioToStorage<Service > > StreamedService;
};

}  // namespace portfolio


#endif  // GRPC_PortfolioBuilder_2eproto__INCLUDED

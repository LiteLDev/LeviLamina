#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/http/PersistentWebSocket.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/network/services/signaling/json_rpc/JsonRpcProvider.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ISignalingServiceConfigProvider;
class Scheduler;
class WorkerPool;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
namespace Bedrock::PubSub { class Subscription; }
namespace Json { class Value; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct StunRelayServer; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SignalingService : public ::Bedrock::EnableNonOwnerReferences,
                         public ::JsonRpc::JsonRpcProvider,
                         public ::std::enable_shared_from_this<::SignalingService> {
public:
    // SignalingService inner types declare
    // clang-format off
    class Channel;
    class Connection;
    class JsonRpcConnection;
    class JsonRpcConnectionSpy;
    class SignalingServiceSpy;
    // clang-format on

    // SignalingService inner types define
    enum class ConnectionStatus : uchar {
        Connected    = 0,
        Disconnected = 1,
    };

    class Connection : public ::Bedrock::Http::PersistentWebSocket, public ::AppPlatformListener {
    public:
        // Connection inner types define
        enum class ServiceError : int {
            UnknownError                 = 0,
            PlayerUnreachable            = 1,
            MessageDeliveryFailed        = 2,
            TurnAuthFailed               = 3,
            FallbackToBestEffortDelivery = 4,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 128> mUnk306a7e;
        ::ll::UntypedStorage<8, 128> mUnkfff716;
        ::ll::UntypedStorage<8, 24>  mUnkc25058;
        ::ll::UntypedStorage<8, 24>  mUnk57d1b0;
        ::ll::UntypedStorage<8, 16>  mUnkdf0ed3;
        ::ll::UntypedStorage<8, 8>   mUnk36ce6c;
        ::ll::UntypedStorage<8, 8>   mUnkc7230f;
        ::ll::UntypedStorage<8, 8>   mUnkffd797;
        ::ll::UntypedStorage<8, 8>   mUnkf492c0;
        ::ll::UntypedStorage<8, 16>  mUnkcb5d0c;
        ::ll::UntypedStorage<8, 88>  mUnk2cd884;
        // NOLINTEND

    public:
        // prevent constructor by default
        Connection& operator=(Connection const&);
        Connection(Connection const&);
        Connection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Connection() /*override*/;

        // vIndex: 2
        virtual void onMessage(::std::string_view incomingMessage) /*override*/;

        // vIndex: 5
        virtual bool shouldReconnect() const /*override*/;

        // vIndex: 6
        virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getUrl() /*override*/;

        // vIndex: 7
        virtual ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> getHeaders() /*override*/;

        // vIndex: 8
        virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy() /*override*/;

        // vIndex: 9
        virtual void onConnect() /*override*/;

        // vIndex: 10
        virtual void onDisconnect(bool, uint closeStatus) /*override*/;

        // vIndex: 11
        virtual void _requestTurnConfig() const;

        // vIndex: 12
        virtual void _sendPing() const;

        // vIndex: 4
        virtual void onAppSuspended() /*override*/;

        // vIndex: 5
        virtual void onAppResumed() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Connection(
            ::NetherNet::NetworkID                                           id,
            ::Bedrock::NotNullNonOwnerPtr<::ISignalingServiceConfigProvider> serviceConfigProvider,
            ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>              eventing
        );

        MCNAPI void _handleError(
            ::SignalingService::Connection::ServiceError errorCode,
            ::std::string const&                         errorMessage,
            ::std::string const&                         messageId
        );

        MCNAPI void _onTurnConfigFailure(::Bedrock::ErrorInfo<::NetherNet::ESessionError> const& error);

        MCNAPI void _parseError(::std::string const& message, ::std::string messageId);

        MCNAPI void _parseSignal(::NetherNet::NetworkID fromNetworkID, ::std::string message, ::std::string messageId);

        MCNAPI ::Bedrock::Result<::std::vector<::NetherNet::StunRelayServer>, ::NetherNet::ESessionError>
        _parseTurnConfig(::Json::Value const& config);

        MCNAPI void _sendTurnConfigTelemetry(
            ::NetherNet::ESessionError                         result,
            ::std::vector<::NetherNet::StunRelayServer> const& config
        );

        MCNAPI ::Bedrock::Threading::Async<::std::error_code> connect();

        MCNAPI void parseTurnConfig(::std::string const& bodyText);

        MCNAPI void parseTurnConfig(::Json::Value const& config);

        MCNAPI ::Bedrock::Threading::Async<::NetherNet::ESessionError>
        sendTo(::NetherNet::NetworkID to, ::std::string const& message);

        MCNAPI void update();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::NetherNet::NetworkID                                           id,
            ::Bedrock::NotNullNonOwnerPtr<::ISignalingServiceConfigProvider> serviceConfigProvider,
            ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>              eventing
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onMessage(::std::string_view incomingMessage);

        MCNAPI bool $shouldReconnect() const;

        MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Url> $getUrl();

        MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> $getHeaders();

        MCNAPI ::Bedrock::Http::RetryPolicy $getReconnectPolicy();

        MCNAPI void $onConnect();

        MCNAPI void $onDisconnect(bool, uint closeStatus);

        MCNAPI void $_requestTurnConfig() const;

        MCNAPI void $_sendPing() const;

        MCNAPI void $onAppSuspended();

        MCNAPI void $onAppResumed();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftableForPersistentWebSocket();

        MCNAPI static void** $vftableForAppPlatformListener();
        // NOLINTEND
    };

    class JsonRpcConnection : public ::SignalingService::Connection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk89d535;
        // NOLINTEND

    public:
        // prevent constructor by default
        JsonRpcConnection& operator=(JsonRpcConnection const&);
        JsonRpcConnection(JsonRpcConnection const&);
        JsonRpcConnection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 6
        virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getUrl() /*override*/;

        // vIndex: 2
        virtual void onMessage(::std::string_view incomingMessage) /*override*/;

        // vIndex: 9
        virtual void onConnect() /*override*/;

        // vIndex: 0
        virtual ~JsonRpcConnection() /*override*/ = default;

        // vIndex: 12
        virtual void _sendPing() const /*override*/;

        // vIndex: 11
        virtual void _requestTurnConfig() const /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void
        handleJsonRpcResult(::std::string id, ::nonstd::expected<::Json::Value, ::Json::Value> const& result);

        MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>>
        sendJsonRpc(::std::string const& message);

        MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> sendJsonRpcTo(
            ::NetherNet::NetworkID                networkIdTo,
            ::std::optional<::std::string> const& messageId,
            ::std::string const&                  message
        );
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Url> $getUrl();

        MCNAPI void $onMessage(::std::string_view incomingMessage);

        MCNAPI void $onConnect();

        MCNAPI void $_sendPing() const;

        MCNAPI void $_requestTurnConfig() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftableForPersistentWebSocket();

        MCNAPI static void** $vftableForAppPlatformListener();
        // NOLINTEND
    };

    class JsonRpcConnectionSpy {};

    class SignalingServiceSpy {};

    class Channel : public ::NetherNet::ISignalingInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk4edbb4;
        ::ll::UntypedStorage<8, 8>  mUnk2976c4;
        // NOLINTEND

    public:
        // prevent constructor by default
        Channel& operator=(Channel const&);
        Channel(Channel const&);
        Channel();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Channel() /*override*/ = default;

        // vIndex: 1
        virtual void SendSignal(
            ::NetherNet::NetworkID                              to,
            ::std::string const&                                message,
            ::std::function<void(::NetherNet::ESessionError)>&& onComplete
        ) /*override*/;

        // vIndex: 2
        virtual ::Bedrock::PubSub::Subscription
        RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $SendSignal(
            ::NetherNet::NetworkID                              to,
            ::std::string const&                                message,
            ::std::function<void(::NetherNet::ESessionError)>&& onComplete
        );

        MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk189d42;
    ::ll::UntypedStorage<8, 8>  mUnk6e4dfb;
    ::ll::UntypedStorage<8, 8>  mUnk964da2;
    ::ll::UntypedStorage<1, 1>  mUnk16095b;
    ::ll::UntypedStorage<8, 8>  mUnk2bff76;
    ::ll::UntypedStorage<8, 16> mUnk4684f9;
    ::ll::UntypedStorage<8, 16> mUnk66d5f0;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingService& operator=(SignalingService const&);
    SignalingService(SignalingService const&);
    SignalingService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SignalingService() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> sendJsonRpcTo(
        ::NetherNet::NetworkID                networkIdTo,
        ::std::optional<::std::string> const& messageId,
        ::std::string const&                  message
    ) const /*override*/;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>>
    sendJsonRpc(::std::string const& message) const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> sendPing() const /*override*/;

    // vIndex: 4
    virtual ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>>
    sendTurnConfigRequest() /*override*/;

    // vIndex: 5
    virtual ::cereal::ReflectionCtx& getReflectionContext() /*override*/;

    // vIndex: 6
    virtual ::std::unique_ptr<::std::string, ::std::function<void(::std::string*)>> registerJsonRpcMethod(
        ::std::string                                              method,
        ::std::function<void(::std::string, ::Json::Value const&)> handler
    ) /*override*/;

    // vIndex: 9
    virtual void _unregisterJsonRpcMethod(::std::string method) /*override*/;

    // vIndex: 7
    virtual void dispatchJsonRpc(::std::string const& method, ::Json::Value const& params) /*override*/;

    // vIndex: 8
    virtual void
    handleJsonRpcResult(::std::string id, ::nonstd::expected<::Json::Value, ::Json::Value> const& result) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingService(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing> eventing,
        ::WorkerPool&                                       pool,
        ::Scheduler&                                        scheduler
    );

    MCNAPI ::std::shared_ptr<::SignalingService::Connection> _makeConnection(::NetherNet::NetworkID id, bool jsonRpc);

    MCNAPI ::gsl::not_null<::std::shared_ptr<::NetherNet::ISignalingInterface>> getChannel() const;

    MCNAPI ::Bedrock::Threading::Async<::std::vector<::NetherNet::StunRelayServer>> getRelayConfig() const;

    MCNAPI ::Bedrock::Threading::Async<::std::error_code> signIn(::NetherNet::NetworkID id, bool useJsonRpc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing> eventing, ::WorkerPool& pool, ::Scheduler& scheduler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> $sendJsonRpcTo(
        ::NetherNet::NetworkID                networkIdTo,
        ::std::optional<::std::string> const& messageId,
        ::std::string const&                  message
    ) const;

    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>>
    $sendJsonRpc(::std::string const& message) const;

    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> $sendPing() const;

    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Json::Value, ::Json::Value>> $sendTurnConfigRequest();

    MCNAPI ::cereal::ReflectionCtx& $getReflectionContext();

    MCNAPI ::std::unique_ptr<::std::string, ::std::function<void(::std::string*)>>
    $registerJsonRpcMethod(::std::string method, ::std::function<void(::std::string, ::Json::Value const&)> handler);

    MCNAPI void $_unregisterJsonRpcMethod(::std::string method);

    MCNAPI void $dispatchJsonRpc(::std::string const& method, ::Json::Value const& params);

    MCNAPI void $handleJsonRpcResult(::std::string id, ::nonstd::expected<::Json::Value, ::Json::Value> const& result);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForJsonRpcProvider();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

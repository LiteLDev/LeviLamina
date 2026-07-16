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
#include "mc/network/services/signaling/ISignalingJsonRpcInterop.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IJsonRpcComponent;
class IMinecraftEventing;
class MessageTracker;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
namespace Bedrock::PubSub { class Subscription; }
namespace Json { class Value; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct StunRelayServer; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class SignalingService : public ::Bedrock::EnableNonOwnerReferences,
                         public ::std::enable_shared_from_this<::SignalingService> {
public:
    // SignalingService inner types declare
    // clang-format off
    class Connection;
    class Channel;
    class ConnectionSpy;
    class SignalingServiceSpy;
    class JsonRpcInterop;
    // clang-format on

    // SignalingService inner types define
    enum class ConnectionStatus : uchar {
        Connected    = 0,
        Disconnected = 1,
    };

    enum class SignInError : int {
        Ok                       = 0,
        EmptyAuthFromDiscovery   = 100,
        EmptyUrlFromDiscovery    = 101,
        ExpiredAuthFromDiscovery = 102,
    };

    class Connection : public ::Bedrock::Http::PersistentWebSocket, public ::AppPlatformListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 128> mUnk306a7e;
        ::ll::UntypedStorage<8, 128> mUnkfff716;
        ::ll::UntypedStorage<8, 16>  mUnk4d866b;
        ::ll::UntypedStorage<8, 24>  mUnk57d1b0;
        ::ll::UntypedStorage<8, 16>  mUnkdf0ed3;
        ::ll::UntypedStorage<8, 16>  mUnk6cd7b9;
        ::ll::UntypedStorage<8, 8>   mUnk8dbb48;
        ::ll::UntypedStorage<8, 8>   mUnkffd797;
        ::ll::UntypedStorage<8, 8>   mUnkfce3b0;
        ::ll::UntypedStorage<8, 8>   mUnkf492c0;
        ::ll::UntypedStorage<8, 16>  mUnk8388e9;
        ::ll::UntypedStorage<8, 16>  mUnk282280;
        ::ll::UntypedStorage<8, 48>  mUnk615ddf;
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
        virtual ~Connection() /*override*/ = default;

        virtual void onConnect() /*override*/;

        virtual void onMessage(::std::string_view) /*override*/;

        virtual bool shouldReconnect() const /*override*/;

        virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getUrl() /*override*/;

        virtual ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> getHeaders() /*override*/;

        virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy() /*override*/;

        virtual void onDisconnect(bool, uint) /*override*/;

        virtual void _requestTurnConfig() const;

        virtual void _sendPing() const;

        virtual void onAppSuspended() /*override*/;

        virtual void onAppResumed() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void update();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class Channel : public ::NetherNet::ISignalingInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk4edbb4;
        ::ll::UntypedStorage<8, 16> mUnkb6642a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Channel& operator=(Channel const&);
        Channel(Channel const&);
        Channel();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Channel() /*override*/ = default;

        virtual void SendSignal(
            ::NetherNet::NetworkID,
            ::NetherNet::NetworkID,
            ::std::string const&,
            ::std::function<void(::NetherNet::ESessionError)>&&
        ) /*override*/;

        virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class ConnectionSpy {};

    class SignalingServiceSpy {};

    class JsonRpcInterop : public ::ISignalingJsonRpcInterop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk4b3ca3;
        // NOLINTEND

    public:
        // prevent constructor by default
        JsonRpcInterop& operator=(JsonRpcInterop const&);
        JsonRpcInterop(JsonRpcInterop const&);
        JsonRpcInterop();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~JsonRpcInterop() /*override*/ = default;

        virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>>
        sendJsonRpcTo(::PlayerMessaging::NetworkID, ::std::optional<::std::string> const&, ::std::string const&) const
            /*override*/;

        virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>>
        sendJsonRpc(::std::optional<::std::string> const&, ::std::string const&) const /*override*/;

        virtual ::std::shared_ptr<::MessageTracker> getMessageTracker() /*override*/;

        virtual void parseSignal(::NetherNet::NetworkID, ::std::string, ::std::string) /*override*/;

        virtual void parseTurnConfig(::Json::Value const&) /*override*/;

        virtual void setTurnConfig(
            ::std::vector<::NetherNet::StunRelayServer>&&,
            ::std::chrono::steady_clock::time_point
        ) /*override*/;

        virtual void onTurnConfigFailure(::Bedrock::ErrorInfo<::NetherNet::ESessionError> const&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk189d42;
    ::ll::UntypedStorage<8, 8>  mUnk9bd0b9;
    ::ll::UntypedStorage<8, 8>  mUnka6149a;
    ::ll::UntypedStorage<8, 16> mUnk4684f9;
    ::ll::UntypedStorage<8, 16> mUnk66d5f0;
    ::ll::UntypedStorage<8, 16> mUnk8726eb;
    ::ll::UntypedStorage<8, 8>  mUnkb4662a;
    ::ll::UntypedStorage<8, 16> mUnk8ed84c;
    ::ll::UntypedStorage<8, 16> mUnk6ee143;
    ::ll::UntypedStorage<8, 16> mUnkf22bbd;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingService& operator=(SignalingService const&);
    SignalingService(SignalingService const&);
    SignalingService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignalingService() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingService(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>   eventing,
        ::std::vector<::std::shared_ptr<::IJsonRpcComponent>> additionalJsonRpcComponents
    );

#ifdef LL_PLAT_C
    MCNAPI void addNetworkIdMapping(::NetherNet::NetworkID nethernetId, ::PlayerMessaging::NetworkID playerMessagingId);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>   eventing,
        ::std::vector<::std::shared_ptr<::IJsonRpcComponent>> additionalJsonRpcComponents
    );
    // NOLINTEND
};

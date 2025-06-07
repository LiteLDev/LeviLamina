#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"
#include "mc/deps/core/http/PersistentWebSocket.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ISignalingServiceConfigProvider;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { struct Url; }
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct StunRelayServer; }
// clang-format on

class SignalingService : public ::Bedrock::EnableNonOwnerReferences {
public:
    // SignalingService inner types declare
    // clang-format off
    class Channel;
    class Connection;
    // clang-format on

    // SignalingService inner types define
    enum class ConnectionStatus : uchar {
        Connected    = 0,
        Disconnected = 1,
    };

    class Connection : public ::Bedrock::Http::PersistentWebSocket, public ::AppPlatformListener {
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

        // vIndex: 1
        virtual void onMessage(::std::string_view incomingMessage) /*override*/;

        // vIndex: 4
        virtual bool shouldReconnect() const /*override*/;

        // vIndex: 5
        virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>> getUrl() /*override*/;

        // vIndex: 6
        virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::HeaderCollection>>
        getHeaders() /*override*/;

        // vIndex: 8
        virtual void onConnect() /*override*/;

        // vIndex: 9
        virtual void onDisconnect(bool, uint closeStatus) /*override*/;

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

        MCNAPI void _disconnect();

        MCNAPI void _parseError(::std::string const& message, ::std::string messageId);

        MCNAPI void _parseSignal(::NetherNet::NetworkID fromNetworkID, ::std::string message, ::std::string messageId);

        MCNAPI ::Bedrock::Result<::std::vector<::NetherNet::StunRelayServer>, ::NetherNet::ESessionError>
        _parseTurnConfig(::std::string const& bodyText);

        MCNAPI void _requestTurnConfig() const;

        MCNAPI void _sendPing() const;

        MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::error_code>> connect();

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

        MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>> $getUrl();

        MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::HeaderCollection>> $getHeaders();

        MCNAPI void $onConnect();

        MCNAPI void $onDisconnect(bool, uint closeStatus);

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
            ::NetherNet::NetworkID,
            ::std::string const&,
            ::std::function<void(::NetherNet::ESessionError)>&&
        ) /*override*/;

        // vIndex: 2
        virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;
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
    ::ll::UntypedStorage<8, 8>  mUnk6e4dfb;
    ::ll::UntypedStorage<8, 8>  mUnk964da2;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SignalingService(::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing> eventing);

    MCNAPI ::std::shared_ptr<::SignalingService::Connection> _makeConnection(::NetherNet::NetworkID id);

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::error_code>> signIn(::NetherNet::NetworkID id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing> eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

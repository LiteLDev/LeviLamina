#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/StubServerLocator.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
class SignalingService;
class TransportEndpointCache;
struct NetherNetConnector;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
namespace Bedrock::Http { class DispatcherInterface; }
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct NetworkID; }
namespace Social { struct Nonce; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaWriter; }
// clang-format on

class NetherNetServerLocator : public ::StubServerLocator {
public:
    // NetherNetServerLocator inner types declare
    // clang-format off
    struct ExternalServerPing;
    struct HttpProbeImpl;
    struct ServerData;
    // clang-format on

    // NetherNetServerLocator inner types define
    struct ExternalServerPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64>  mUnk844989;
        ::ll::UntypedStorage<2, 2>   mUnk4833f4;
        ::ll::UntypedStorage<8, 40>  mUnkc5147c;
        ::ll::UntypedStorage<8, 40>  mUnkda1767;
        ::ll::UntypedStorage<8, 424> mUnkf65c24;
        ::ll::UntypedStorage<8, 8>   mUnka6d1dd;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExternalServerPing& operator=(ExternalServerPing const&);
        ExternalServerPing(ExternalServerPing const&);
        ExternalServerPing();
    };

    struct HttpProbeImpl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48>  mUnk849326;
        ::ll::UntypedStorage<8, 128> mUnk8d8819;
        ::ll::UntypedStorage<8, 40>  mUnke15916;
        ::ll::UntypedStorage<8, 8>   mUnk4ca46d;
        // NOLINTEND

    public:
        // prevent constructor by default
        HttpProbeImpl& operator=(HttpProbeImpl const&);
        HttpProbeImpl(HttpProbeImpl const&);
        HttpProbeImpl();
    };

    struct ServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkbc0cac;
        ::ll::UntypedStorage<8, 32> mUnke25e40;
        ::ll::UntypedStorage<4, 4>  mUnk55e082;
        ::ll::UntypedStorage<8, 24> mUnk1ae9e5;
        ::ll::UntypedStorage<8, 32> mUnk7d9cc2;
        ::ll::UntypedStorage<4, 4>  mUnkab0aac;
        ::ll::UntypedStorage<4, 4>  mUnk3ed176;
        ::ll::UntypedStorage<4, 4>  mUnkc83c1f;
        ::ll::UntypedStorage<1, 1>  mUnk91bac1;
        ::ll::UntypedStorage<1, 1>  mUnk1b4aaf;
        ::ll::UntypedStorage<1, 2>  mUnkd722a4;
        ::ll::UntypedStorage<8, 32> mUnkcbabae;
        ::ll::UntypedStorage<2, 2>  mUnkb17aa9;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
        ServerData();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk983682;
    ::ll::UntypedStorage<8, 8>   mUnk36b3eb;
    ::ll::UntypedStorage<8, 24>  mUnka0ecad;
    ::ll::UntypedStorage<8, 24>  mUnke14539;
    ::ll::UntypedStorage<8, 16>  mUnk3ee0a8;
    ::ll::UntypedStorage<8, 8>   mUnk965302;
    ::ll::UntypedStorage<8, 168> mUnk9e12a8;
    ::ll::UntypedStorage<8, 16>  mUnkeab7f7;
    ::ll::UntypedStorage<8, 24>  mUnk4b5a50;
    ::ll::UntypedStorage<1, 1>   mUnkfee0d4;
    ::ll::UntypedStorage<1, 1>   mUnk646852;
    ::ll::UntypedStorage<8, 160> mUnk330682;
    ::ll::UntypedStorage<8, 80>  mUnke6202d;
    ::ll::UntypedStorage<8, 336> mUnk1ca294;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetServerLocator& operator=(NetherNetServerLocator const&);
    NetherNetServerLocator(NetherNetServerLocator const&);
    NetherNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherNetServerLocator() /*override*/ = default;

    virtual ::std::shared_ptr<::TransportEndpointCache> getTransportEndpointCache() const /*override*/;

    virtual void startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth,
        ::Social::Nonce const&               nonce
    ) /*override*/;

    virtual void stopAnnouncingServer() /*override*/;

    virtual void startServerDiscovery(::PortPair ports) /*override*/;

    virtual void stopServerDiscovery() /*override*/;

    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;

    virtual ::Bedrock::PubSub::Subscription acquireHttpProbePermission() /*override*/;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetServerLocator(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&            connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                 appPlatform,
        ::Bedrock::NonOwnerPointer<::Bedrock::Http::DispatcherInterface> dispatcher,
        ::Bedrock::NonOwnerPointer<::SignalingService>                   signalingService
    );

    MCNAPI void _cacheDiscoveryResponseData();

    MCNAPI bool _onDiscoveryRequest(::cereal::SchemaWriter& writer, ::cereal::ContextArea area);

    MCNAPI void _setDiscoveryRequestCallback(bool enable);

    MCNAPI void _setIsDiscovering(bool isDiscovering);

    MCNAPI void _startPendingExternalServerRequests();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PingedCompatibleServer
    _transformFrom(::NetherNet::NetworkID const& networkID, ::NetherNetServerLocator::ServerData&& serverData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&            connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                 appPlatform,
        ::Bedrock::NonOwnerPointer<::Bedrock::Http::DispatcherInterface> dispatcher,
        ::Bedrock::NonOwnerPointer<::SignalingService>                   signalingService
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::TransportEndpointCache> $getTransportEndpointCache() const;

    MCNAPI void $startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth,
        ::Social::Nonce const&               nonce
    );

    MCNAPI void $stopAnnouncingServer();

    MCNAPI void $startServerDiscovery(::PortPair ports);

    MCNAPI void $stopServerDiscovery();

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);

    MCNAPI ::Bedrock::PubSub::Subscription $acquireHttpProbePermission();

    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCNAPI void $update();


    // NOLINTEND
};

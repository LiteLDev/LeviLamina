#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/PermissionIPv6.h"
#include "mc/network/PermissionLAN.h"
#include "mc/network/RakNetServerLANVisibility.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/StubServerLocator.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
class NetworkSessionOwner;
class RakNetConnector;
class TransportEndpointCache;
struct NetherNetConnector;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
namespace Bedrock::Http { class DispatcherInterface; }
namespace Bedrock::PubSub { class Subscription; }
namespace Social { struct Nonce; }
// clang-format on

class ServerLocatorComposite : public ::StubServerLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkff7b44;
    ::ll::UntypedStorage<8, 8>  mUnk46d7e3;
    ::ll::UntypedStorage<8, 8>  mUnk53642b;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLocatorComposite& operator=(ServerLocatorComposite const&);
    ServerLocatorComposite(ServerLocatorComposite const&);
    ServerLocatorComposite();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerLocatorComposite() /*override*/ = default;

    virtual void startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           worldGameType,
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

    virtual ::std::shared_ptr<::TransportEndpointCache> getTransportEndpointCache() const /*override*/;

    virtual void update() /*override*/;

    virtual ::std::chrono::milliseconds getPingTimeForGUID(::std::string const& guid) /*override*/;

    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ServerLocatorComposite(
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::brstd::copyable_function<bool() const>             isNetworkAllowed
    );

    MCNAPI void initializeNetherNetServerLocator(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&               connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                    appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::Http::DispatcherInterface> dispatcher
    );

    MCNAPI void initializeRakNetServerLocator(
        ::RakNetConnector&                               rakNetConnector,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::std::vector<::std::string>                     overrideBroadcastAddresses,
        bool                                             isServer,
        ::RakNetServerLANVisibility                      lanDiscoveryStatus,
        ::PermissionLAN                                  permissionLAN,
        ::PermissionIPv6                                 permissionIPv6,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::brstd::copyable_function<bool() const>             isNetworkAllowed
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           worldGameType,
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

    MCNAPI ::std::shared_ptr<::TransportEndpointCache> $getTransportEndpointCache() const;

    MCNAPI void $update();

    MCNAPI ::std::chrono::milliseconds $getPingTimeForGUID(::std::string const& guid);

    MCNAPI void $checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    );

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();
#endif


    // NOLINTEND
};

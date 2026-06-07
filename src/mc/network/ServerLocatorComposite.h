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
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
class NetworkSessionOwner;
class RakNetConnector;
class ServerLocator;
struct NetherNetConnector;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
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
#ifdef LL_PLAT_S
    virtual ~ServerLocatorComposite() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ServerLocatorComposite() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void startAnnouncingServer(
        ::std::string const&,
        ::std::string const&,
        ::GameType,
        int,
        int,
        bool,
        bool,
        bool,
        ::ServerSupportedAuthenticationTypes
    ) /*override*/;
#else // LL_PLAT_C
    virtual void startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           worldGameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth
    ) /*override*/;
#endif

    virtual void stopAnnouncingServer() /*override*/;

#ifdef LL_PLAT_S
    virtual void startServerDiscovery(::PortPair) /*override*/;
#else // LL_PLAT_C
    virtual void startServerDiscovery(::PortPair ports) /*override*/;
#endif

    virtual void stopServerDiscovery() /*override*/;

#ifdef LL_PLAT_S
    virtual void addCustomServer(::AsynchronousIPResolver const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void addCustomServer(::std::string const&, int) /*override*/;
#else // LL_PLAT_C
    virtual void addCustomServer(::std::string const& address, int port) /*override*/;
#endif

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void clearServerList() /*override*/;

    virtual void update() /*override*/;

#ifdef LL_PLAT_S
    virtual float getPingTimeForGUID(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual float getPingTimeForGUID(::std::string const& guid) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string,
        int,
        ::std::function<void(::ServerConnectivityTestResult)>
    ) /*override*/;
#else // LL_PLAT_C
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) /*override*/;
#endif

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ServerLocatorComposite(
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&     appPlatform
    );

    MCNAPI ::ServerLocator& _getActiveServerLocator();

    MCNAPI void initializeNetherNetServerLocator(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&& connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&      appPlatform
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
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&     appPlatform
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
        ::ServerSupportedAuthenticationTypes supportedAuth
    );

    MCNAPI void $stopAnnouncingServer();

    MCNAPI void $startServerDiscovery(::PortPair ports);

    MCNAPI void $stopServerDiscovery();

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);

    MCNAPI void $addCustomServer(::std::string const& address, int port);

    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCNAPI void $clearServerList();

    MCNAPI void $update();

    MCNAPI float $getPingTimeForGUID(::std::string const& guid);

    MCNAPI void $checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    );

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
// clang-format on

class StubServerLocator : public ::ServerLocator {
public:
    // prevent constructor by default
    StubServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StubServerLocator() /*override*/;

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

    virtual void stopAnnouncingServer() /*override*/;

    virtual void startServerDiscovery(::PortPair ports) /*override*/;

    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;

    virtual void addCustomServer(::std::string const& address, int port) /*override*/;

    virtual void stopServerDiscovery() /*override*/;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void clearServerList() /*override*/;

    virtual void update() /*override*/;

    virtual float getPingTimeForGUID(::std::string const& guid) /*override*/;

#ifdef LL_PLAT_S
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string hostIpAddress,
        int           callback,
        ::std::function<void(::ServerConnectivityTestResult)>
    ) /*override*/;
#else // LL_PLAT_C
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StubServerLocator(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);

    MCNAPI void $addCustomServer(::std::string const& address, int port);

    MCNAPI void $stopServerDiscovery();

    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCNAPI void $clearServerList();

    MCNAPI void $update();

    MCNAPI float $getPingTimeForGUID(::std::string const& guid);

    MCNAPI void $checkCanConnectToCustomServerAsync(
        ::std::string hostIpAddress,
        int           callback,
        ::std::function<void(::ServerConnectivityTestResult)>
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

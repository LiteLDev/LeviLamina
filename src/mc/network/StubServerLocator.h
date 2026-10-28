#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AsynchronousIPResolver;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
namespace Social { struct Nonce; }
// clang-format on

class StubServerLocator : public ::ServerLocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StubServerLocator() /*override*/ = default;

#ifdef LL_PLAT_S
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
        ::ServerSupportedAuthenticationTypes supportedAuth,
        ::Social::Nonce const&               nonce
    ) /*override*/;
#endif

    virtual void stopAnnouncingServer() /*override*/;

    virtual void startServerDiscovery(::PortPair ports) /*override*/;

    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;

    virtual void stopServerDiscovery() /*override*/;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void update() /*override*/;

#ifdef LL_PLAT_S
    virtual ::std::chrono::milliseconds getPingTimeForGUID(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual ::std::chrono::milliseconds getPingTimeForGUID(::std::string const& guid) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string,
        int,
        ::std::function<void(::ServerConnectivityTestResult)> callback
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
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
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
#else // LL_PLAT_C
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
#endif

    MCNAPI void $stopAnnouncingServer();

    MCNAPI void $startServerDiscovery(::PortPair ports);

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);

    MCNAPI void $stopServerDiscovery();

    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCNAPI void $update();

#ifdef LL_PLAT_S
    MCNAPI ::std::chrono::milliseconds $getPingTimeForGUID(::std::string const&);
#else // LL_PLAT_C
    MCNAPI ::std::chrono::milliseconds $getPingTimeForGUID(::std::string const& guid);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $checkCanConnectToCustomServerAsync(
        ::std::string,
        int,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    );
#else // LL_PLAT_C
    MCNAPI void $checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    );
#endif


    // NOLINTEND
};

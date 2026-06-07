#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AsynchronousIPResolver;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
// clang-format on

class ServerLocator : public ::NetworkEnableDisableListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerLocator() /*override*/ = default;

    virtual void startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth
    ) = 0;

    virtual void stopAnnouncingServer() = 0;

    virtual void startServerDiscovery(::PortPair ports) = 0;

    virtual void stopServerDiscovery() = 0;

    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) = 0;

    virtual void addCustomServer(::std::string const& address, int port) = 0;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const = 0;

    virtual void clearServerList() = 0;

    virtual void update() = 0;

    virtual float getPingTimeForGUID(::std::string const& guid) = 0;

    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) = 0;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<::ServerConnectivityTestResult>
    checkCanConnectToCustomServerAsync(::std::string const& hostIpAddress, int port);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();


    // NOLINTEND
};

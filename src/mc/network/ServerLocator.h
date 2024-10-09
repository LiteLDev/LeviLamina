#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/world/level/GameType.h"

class ServerLocator : public ::NetworkEnableDisableListener {
public:
    // prevent constructor by default
    ServerLocator& operator=(ServerLocator const&);
    ServerLocator(ServerLocator const&);
    ServerLocator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerLocator();

    // vIndex: 1
    virtual void _onDisable();

    // vIndex: 2
    virtual void _onEnable();

    // vIndex: 3
    virtual void startAnnouncingServer(
        std::string const&                                playerName,
        std::string const&                                worldName,
        class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform,
        ::GameType                                        gameType,
        int                                               numPlayers,
        int                                               maxNumPlayers,
        bool                                              isJoinableThroughServerScreen,
        bool                                              isEditorWorld
    ) = 0;

    // vIndex: 4
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform) = 0;

    // vIndex: 5
    virtual void startServerDiscovery(struct PortPair ports) = 0;

    // vIndex: 6
    virtual void stopServerDiscovery() = 0;

    // vIndex: 7
    virtual void addCustomServer(class AsynchronousIPResolver const& futureIP, int port) = 0;

    // vIndex: 8
    virtual void addCustomServer(std::string const& address, int port) = 0;

    // vIndex: 9
    virtual std::vector<struct PingedCompatibleServer> getServerList() const = 0;

    // vIndex: 10
    virtual void clearServerList() = 0;

    // vIndex: 11
    virtual void update() = 0;

    // vIndex: 12
    virtual float getPingTimeForGUID(std::string const& guid) = 0;

    // vIndex: 13
    virtual void checkCanConnectToCustomServerAsync(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    ) = 0;

    // NOLINTEND
};

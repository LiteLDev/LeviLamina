#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/world/level/GameType.h"

class StubServerLocator : public ::ServerLocator {
public:
    // prevent constructor by default
    StubServerLocator& operator=(StubServerLocator const&);
    StubServerLocator(StubServerLocator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StubServerLocator();

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
    );

    // vIndex: 4
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    // vIndex: 5
    virtual void startServerDiscovery(struct PortPair ports);

    // vIndex: 6
    virtual void stopServerDiscovery();

    // vIndex: 7
    virtual void addCustomServer(class AsynchronousIPResolver const& futureIP, int port);

    // vIndex: 8
    virtual void addCustomServer(std::string const& address, int port);

    // vIndex: 9
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;

    // vIndex: 10
    virtual void clearServerList();

    // vIndex: 11
    virtual void update();

    // vIndex: 12
    virtual float getPingTimeForGUID(std::string const& guid);

    // vIndex: 13
    virtual void checkCanConnectToCustomServerAsync(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    );

    MCAPI StubServerLocator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void addCustomServer$(class AsynchronousIPResolver const& futureIP, int port);

    MCAPI void addCustomServer$(std::string const& address, int port);

    MCAPI void checkCanConnectToCustomServerAsync$(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    );

    MCAPI void clearServerList$();

    MCAPI float getPingTimeForGUID$(std::string const& guid);

    MCAPI std::vector<struct PingedCompatibleServer> getServerList$() const;

    MCAPI void startAnnouncingServer$(
        std::string const&                                playerName,
        std::string const&                                worldName,
        class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform,
        ::GameType                                        gameType,
        int                                               numPlayers,
        int                                               maxNumPlayers,
        bool                                              isJoinableThroughServerScreen,
        bool                                              isEditorWorld
    );

    MCAPI void startServerDiscovery$(struct PortPair ports);

    MCAPI void stopAnnouncingServer$(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    MCAPI void stopServerDiscovery$();

    MCAPI void update$();

    // NOLINTEND
};

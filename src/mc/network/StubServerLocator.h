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
// clang-format on

class StubServerLocator : public ::ServerLocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StubServerLocator() /*override*/ = default;

    virtual void startAnnouncingServer(
        ::std::string const&                      playerName,
        ::std::string const&                      worldName,
        ::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform,
        ::GameType                                gameType,
        int                                       numPlayers,
        int                                       maxNumPlayers,
        bool                                      isJoinableThroughServerScreen,
        bool                                      isEditorWorld,
        bool                                      isHardcore
    ) /*override*/;

    virtual void stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform) /*override*/;

    virtual void startServerDiscovery(::PortPair ports) /*override*/;

    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;

    virtual void addCustomServer(::std::string const& address, int port) /*override*/;

    virtual void stopServerDiscovery() /*override*/;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void clearServerList() /*override*/;

    virtual void update() /*override*/;

    virtual float getPingTimeForGUID(::std::string const& guid) /*override*/;

    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StubServerLocator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $startAnnouncingServer(
        ::std::string const&                      playerName,
        ::std::string const&                      worldName,
        ::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform,
        ::GameType                                gameType,
        int                                       numPlayers,
        int                                       maxNumPlayers,
        bool                                      isJoinableThroughServerScreen,
        bool                                      isEditorWorld,
        bool                                      isHardcore
    );

    MCNAPI void $stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform);

    MCNAPI void $startServerDiscovery(::PortPair ports);

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);

    MCNAPI void $addCustomServer(::std::string const& address, int port);

    MCNAPI void $stopServerDiscovery();

    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCNAPI void $clearServerList();

    MCNAPI void $update();

    MCNAPI float $getPingTimeForGUID(::std::string const& guid);

    MCNAPI void $checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

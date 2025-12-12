#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/StubServerLocator.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
struct PingedCompatibleServer;
struct PortPair;
// clang-format on

class ServerLocatorComposite : public ::StubServerLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkff7b44;
    ::ll::UntypedStorage<8, 8>  mUnk64eb8f;
    ::ll::UntypedStorage<8, 8>  mUnk89c7fa;
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
        ::std::string const&                      playerName,
        ::std::string const&                      worldName,
        ::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform,
        ::GameType                                worldGameType,
        int                                       numPlayers,
        int                                       maxNumPlayers,
        bool                                      isJoinableThroughServerScreen,
        bool                                      isEditorWorld,
        bool                                      isHardcore
    ) /*override*/;

    virtual void stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform) /*override*/;

    virtual void startServerDiscovery(::PortPair ports) /*override*/;

    virtual void stopServerDiscovery() /*override*/;

    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;

    virtual void addCustomServer(::std::string const& address, int port) /*override*/;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void clearServerList() /*override*/;

    virtual void update() /*override*/;

    virtual float getPingTimeForGUID(::std::string const& guid) /*override*/;

    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $startAnnouncingServer(
        ::std::string const&                      playerName,
        ::std::string const&                      worldName,
        ::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform,
        ::GameType                                worldGameType,
        int                                       numPlayers,
        int                                       maxNumPlayers,
        bool                                      isJoinableThroughServerScreen,
        bool                                      isEditorWorld,
        bool                                      isHardcore
    );

    MCNAPI void $stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform);

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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
struct PingedCompatibleServer;
struct PortPair;
// clang-format on

class ServerLocator : public ::NetworkEnableDisableListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerLocator() /*override*/;

    // vIndex: 3
    virtual void startAnnouncingServer(
        ::std::string const&,
        ::std::string const&,
        ::Bedrock::NonOwnerPointer<::AppPlatform>,
        ::GameType,
        int,
        int,
        bool,
        bool,
        bool
    ) = 0;

    // vIndex: 4
    virtual void stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform>) = 0;

    // vIndex: 5
    virtual void startServerDiscovery(::PortPair) = 0;

    // vIndex: 6
    virtual void stopServerDiscovery() = 0;

    // vIndex: 8
    virtual void addCustomServer(::AsynchronousIPResolver const&, int) = 0;

    // vIndex: 7
    virtual void addCustomServer(::std::string const&, int) = 0;

    // vIndex: 9
    virtual ::std::vector<::PingedCompatibleServer> getServerList() const = 0;

    // vIndex: 10
    virtual void clearServerList() = 0;

    // vIndex: 11
    virtual void update() = 0;

    // vIndex: 12
    virtual float getPingTimeForGUID(::std::string const&) = 0;

    // vIndex: 13
    virtual void
    checkCanConnectToCustomServerAsync(::std::string, int, ::std::function<void(::ServerConnectivityTestResult)>) = 0;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $_onDisable();

    MCFOLD void $_onEnable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

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
    virtual ~ServerLocator() /*override*/;

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

    virtual void stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform>) = 0;

    virtual void startServerDiscovery(::PortPair) = 0;

    virtual void stopServerDiscovery() = 0;

    virtual void addCustomServer(::AsynchronousIPResolver const&, int) = 0;

    virtual void addCustomServer(::std::string const&, int) = 0;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const = 0;

    virtual void clearServerList() = 0;

    virtual void update() = 0;

    virtual float getPingTimeForGUID(::std::string const&) = 0;

    virtual void
    checkCanConnectToCustomServerAsync(::std::string, int, ::std::function<void(::ServerConnectivityTestResult)>) = 0;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

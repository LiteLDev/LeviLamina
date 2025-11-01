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
    ::ll::UntypedStorage<8, 8> mUnk64eb8f;
    ::ll::UntypedStorage<8, 8> mUnk89c7fa;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLocatorComposite& operator=(ServerLocatorComposite const&);
    ServerLocatorComposite(ServerLocatorComposite const&);
    ServerLocatorComposite();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerLocatorComposite() /*override*/ = default;

    // vIndex: 3
    virtual void startAnnouncingServer(::std::string const&, ::std::string const&, ::Bedrock::NonOwnerPointer<::AppPlatform>, ::GameType, int, int, bool, bool, bool) /*override*/;

    // vIndex: 4
    virtual void stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform>) /*override*/;

    // vIndex: 5
    virtual void startServerDiscovery(::PortPair) /*override*/;

    // vIndex: 6
    virtual void stopServerDiscovery() /*override*/;

    // vIndex: 8
    virtual void addCustomServer(::AsynchronousIPResolver const&, int) /*override*/;

    // vIndex: 7
    virtual void addCustomServer(::std::string const&, int) /*override*/;

    // vIndex: 9
    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    // vIndex: 10
    virtual void clearServerList() /*override*/;

    // vIndex: 11
    virtual void update() /*override*/;

    // vIndex: 12
    virtual float getPingTimeForGUID(::std::string const&) /*override*/;

    // vIndex: 13
    virtual void checkCanConnectToCustomServerAsync(::std::string, int, ::std::function<void(::ServerConnectivityTestResult)>) /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ServerConnectivityTestResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/GameType.h"
#include "mc/network/ServerLocator.h"

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
        std::string const&,
        std::string const&,
        class Bedrock::NonOwnerPointer<class AppPlatform>,
        ::GameType,
        int,
        int,
        bool,
        bool
    );

    // vIndex: 4
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    // vIndex: 5
    virtual void startServerDiscovery(struct PortPair);

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
};

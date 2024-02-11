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
    // vIndex: 0, symbol: ??1StubServerLocator@@UEAA@XZ
    virtual ~StubServerLocator();

    // vIndex: 3, symbol:
    // ?startAnnouncingServer@StubServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$NonOwnerPointer@VAppPlatform@@@Bedrock@@W4GameType@@HH_N3@Z
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

    // vIndex: 4, symbol: ?stopAnnouncingServer@StubServerLocator@@UEAAXV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    // vIndex: 5, symbol: ?startServerDiscovery@StubServerLocator@@UEAAXUPortPair@@@Z
    virtual void startServerDiscovery(struct PortPair);

    // vIndex: 6, symbol: ?stopServerDiscovery@StubServerLocator@@UEAAXXZ
    virtual void stopServerDiscovery();

    // vIndex: 7, symbol: ?addCustomServer@StubServerLocator@@UEAAXAEBVAsynchronousIPResolver@@H@Z
    virtual void addCustomServer(class AsynchronousIPResolver const& futureIP, int port);

    // vIndex: 8, symbol:
    // ?addCustomServer@StubServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual void addCustomServer(std::string const& address, int port);

    // vIndex: 9, symbol:
    // ?getServerList@StubServerLocator@@UEBA?AV?$vector@UPingedCompatibleServer@@V?$allocator@UPingedCompatibleServer@@@std@@@std@@XZ
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;

    // vIndex: 10, symbol: ?clearServerList@StubServerLocator@@UEAAXXZ
    virtual void clearServerList();

    // vIndex: 11, symbol: ?update@StubServerLocator@@UEAAXXZ
    virtual void update();

    // vIndex: 12, symbol:
    // ?getPingTimeForGUID@StubServerLocator@@UEAAMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual float getPingTimeForGUID(std::string const& guid);

    // vIndex: 13, symbol:
    // ?checkCanConnectToCustomServerAsync@StubServerLocator@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6AXW4ServerConnectivityTestResult@@@Z@3@@Z
    virtual void checkCanConnectToCustomServerAsync(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    );

    // symbol: ??0StubServerLocator@@QEAA@XZ
    MCAPI StubServerLocator();

    // NOLINTEND
};

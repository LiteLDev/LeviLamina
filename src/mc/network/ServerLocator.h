#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ServerConnectivityTestResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/GameType.h"
#include "mc/network/NetworkEnableDisableListener.h"

class ServerLocator : public ::NetworkEnableDisableListener {
public:
    // prevent constructor by default
    ServerLocator& operator=(ServerLocator const&);
    ServerLocator(ServerLocator const&);
    ServerLocator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerLocator@@UEAA@XZ
    virtual ~ServerLocator();

    // vIndex: 1, symbol: ?_onDisable@ServerLocator@@EEAAXXZ
    virtual void _onDisable();

    // vIndex: 2, symbol: ?_onEnable@ServerLocator@@EEAAXXZ
    virtual void _onEnable();

    // vIndex: 3, symbol:
    // ?startAnnouncingServer@NetherNetServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$NonOwnerPointer@VAppPlatform@@@Bedrock@@W4GameType@@HH_N3@Z
    virtual void startAnnouncingServer(
        std::string const&,
        std::string const&,
        class Bedrock::NonOwnerPointer<class AppPlatform>,
        ::GameType,
        int,
        int,
        bool,
        bool
    ) = 0;

    // vIndex: 4, symbol:
    // ?stopAnnouncingServer@NetherNetServerLocator@@UEAAXV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform) = 0;

    // vIndex: 5, symbol: ?startServerDiscovery@NetherNetServerLocator@@UEAAXUPortPair@@@Z
    virtual void startServerDiscovery(struct PortPair) = 0;

    // vIndex: 6, symbol: ?stopServerDiscovery@NetherNetServerLocator@@UEAAXXZ
    virtual void stopServerDiscovery() = 0;

    // vIndex: 7, symbol: ?addCustomServer@RakNetServerLocator@@UEAAXAEBVAsynchronousIPResolver@@H@Z
    virtual void addCustomServer(class AsynchronousIPResolver const& futureIP, int port) = 0;

    // vIndex: 8, symbol:
    // ?addCustomServer@RakNetServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual void addCustomServer(std::string const& address, int port) = 0;

    // vIndex: 9, symbol:
    // ?getServerList@NetherNetServerLocator@@UEBA?AV?$vector@UPingedCompatibleServer@@V?$allocator@UPingedCompatibleServer@@@std@@@std@@XZ
    virtual std::vector<struct PingedCompatibleServer> getServerList() const = 0;

    // vIndex: 10, symbol: ?clearServerList@NetherNetServerLocator@@UEAAXXZ
    virtual void clearServerList() = 0;

    // vIndex: 11, symbol: ?update@NetherNetServerLocator@@UEAAXXZ
    virtual void update() = 0;

    // vIndex: 12, symbol:
    // ?getPingTimeForGUID@RakNetServerLocator@@UEAAMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual float getPingTimeForGUID(std::string const& guid) = 0;

    // vIndex: 13, symbol:
    // ?checkCanConnectToCustomServerAsync@StubServerLocator@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6AXW4ServerConnectivityTestResult@@@Z@3@@Z
    virtual void checkCanConnectToCustomServerAsync(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    ) = 0;

    // NOLINTEND
};

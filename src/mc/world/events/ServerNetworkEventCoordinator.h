#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/events/MutableServerNetworkGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class ServerNetworkEventCoordinator {
public:
    // prevent constructor by default
    ServerNetworkEventCoordinator& operator=(ServerNetworkEventCoordinator const&);
    ServerNetworkEventCoordinator(ServerNetworkEventCoordinator const&);
    ServerNetworkEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerNetworkEventCoordinator@@UEAA@XZ
    virtual ~ServerNetworkEventCoordinator() = default;

    // symbol: ?getServerNetworkEventHandler@ServerNetworkEventCoordinator@@QEAAAEAVServerNetworkEventHandler@@XZ
    MCAPI class ServerNetworkEventHandler& getServerNetworkEventHandler();

    // symbol:
    // ?registerServerNetworkEventHandler@ServerNetworkEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VServerNetworkEventHandler@@U?$default_delete@VServerNetworkEventHandler@@@std@@@std@@@Z
    MCAPI void registerServerNetworkEventHandler(std::unique_ptr<class ServerNetworkEventHandler>&& handler);

    // symbol:
    // ?sendEvent@ServerNetworkEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableServerNetworkGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult
    sendEvent(class EventRef<struct MutableServerNetworkGameplayEvent<::CoordinatorResult>> event);

    // symbol: ?sendMessage@ServerNetworkEventCoordinator@@QEAAXAEAUMessageEvent@@@Z
    MCAPI void sendMessage(struct MessageEvent&);

    // NOLINTEND
};

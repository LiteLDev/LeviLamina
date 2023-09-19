#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ServerNetworkEventListener {
public:
    // prevent constructor by default
    ServerNetworkEventListener& operator=(ServerNetworkEventListener const&);
    ServerNetworkEventListener(ServerNetworkEventListener const&);
    ServerNetworkEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onEvent@ServerNetworkEventListener@@UEAA?AW4EventResult@@AEBUServerNetworkGameplayNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const&);

    // vIndex: 2, symbol: ?onMessage@ServerNetworkEventListener@@UEAA?AW4EventResult@@AEBUMessageEvent@@@Z
    virtual ::EventResult onMessage(struct MessageEvent const&);

    // NOLINTEND
};

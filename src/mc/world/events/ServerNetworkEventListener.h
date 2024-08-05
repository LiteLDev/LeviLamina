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
    // vIndex: 0
    virtual ~ServerNetworkEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const&);

    // vIndex: 2
    virtual ::EventResult onMessage(struct MessageEvent const&);

    // NOLINTEND
};

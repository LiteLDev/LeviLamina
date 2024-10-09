#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"

class ServerNetworkEventCoordinator {
public:
    // prevent constructor by default
    ServerNetworkEventCoordinator& operator=(ServerNetworkEventCoordinator const&);
    ServerNetworkEventCoordinator(ServerNetworkEventCoordinator const&);
    ServerNetworkEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkEventCoordinator() = default;

    MCAPI class ServerNetworkEventHandler& getServerNetworkEventHandler();

    MCAPI void registerServerNetworkEventHandler(std::unique_ptr<class ServerNetworkEventHandler>&& handler);

    MCAPI ::CoordinatorResult
    sendEvent(class EventRef<struct MutableServerNetworkGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendMessage(struct MessageEvent& messageEvent);

    // NOLINTEND
};

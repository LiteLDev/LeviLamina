#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/ActorEvent.h"

class ActorEventBroadcaster {
public:
    // prevent constructor by default
    ActorEventBroadcaster& operator=(ActorEventBroadcaster const&);
    ActorEventBroadcaster(ActorEventBroadcaster const&);
    ActorEventBroadcaster();

public:
    // NOLINTBEGIN
    // symbol: ?broadcastActorEvent@ActorEventBroadcaster@@QEBAXAEAVActor@@W4ActorEvent@@HAEAVDimension@@@Z
    MCAPI void broadcastActorEvent(class Actor&, ::ActorEvent, int, class Dimension&) const;

    // NOLINTEND
};

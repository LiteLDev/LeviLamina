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
    MCAPI void broadcastActorEvent(class Actor&, ::ActorEvent, int, class Dimension&) const;

    // NOLINTEND
};

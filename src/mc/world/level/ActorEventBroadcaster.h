#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ActorEvent.h"

class ActorEventBroadcaster {
public:
    // prevent constructor by default
    ActorEventBroadcaster& operator=(ActorEventBroadcaster const&);
    ActorEventBroadcaster(ActorEventBroadcaster const&);
    ActorEventBroadcaster();

public:
    // NOLINTBEGIN
    MCAPI void
    broadcastActorEvent(class Actor& actor, ::ActorEvent eventId, int data, class Dimension& dimension) const;

    // NOLINTEND
};

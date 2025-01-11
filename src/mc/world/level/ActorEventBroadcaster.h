#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
// clang-format on

class ActorEventBroadcaster {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void broadcastActorEvent(::Actor& actor, ::ActorEvent eventId, int data, ::Dimension& dimension) const;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorStopRidingEventSystem {
public:
    // prevent constructor by default
    ActorStopRidingEventSystem& operator=(ActorStopRidingEventSystem const&);
    ActorStopRidingEventSystem(ActorStopRidingEventSystem const&);
    ActorStopRidingEventSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createCancelableEventSystem@ActorStopRidingEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createCancelableEventSystem();

    // symbol: ?createSystem@ActorStopRidingEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

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
    MCAPI static struct TickingSystemWithInfo createCancelableEventSystem();

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorUpdateRidingIDSystem {
public:
    // prevent constructor by default
    ActorUpdateRidingIDSystem& operator=(ActorUpdateRidingIDSystem const&);
    ActorUpdateRidingIDSystem(ActorUpdateRidingIDSystem const&);
    ActorUpdateRidingIDSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createClearPrevRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createClearPrevRidingIDSystem();

    // symbol: ?createClearRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createClearRidingIDSystem();

    // symbol: ?createUpdatePrevRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createUpdatePrevRidingIDSystem();

    // NOLINTEND
};

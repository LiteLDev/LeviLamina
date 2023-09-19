#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMoveSystem {
public:
    // prevent constructor by default
    ActorMoveSystem& operator=(ActorMoveSystem const&);
    ActorMoveSystem(ActorMoveSystem const&);
    ActorMoveSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createActorMoveSystem@ActorMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createActorMoveSystem();

    // symbol: ?createUpdateHitboxSystem@ActorMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createUpdateHitboxSystem();

    // NOLINTEND
};

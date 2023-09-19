#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMovementTickFilterSystem {
public:
    // prevent constructor by default
    ActorMovementTickFilterSystem& operator=(ActorMovementTickFilterSystem const&);
    ActorMovementTickFilterSystem(ActorMovementTickFilterSystem const&);
    ActorMovementTickFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createBase@ActorMovementTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createBase();

    // NOLINTEND
};

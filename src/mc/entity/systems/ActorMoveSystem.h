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
    MCAPI static struct TickingSystemWithInfo createActorMoveSystem();

    MCAPI static struct TickingSystemWithInfo createConfigureDepenetrationSystem();

    MCAPI static struct TickingSystemWithInfo createUpdateDepenetrationSystem();

    MCAPI static struct TickingSystemWithInfo createUpdateHitboxSystem();

    // NOLINTEND
};

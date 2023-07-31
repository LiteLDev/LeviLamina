#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMoveSystem {

public:
    // prevent constructor by default
    ActorMoveSystem& operator=(ActorMoveSystem const&) = delete;
    ActorMoveSystem(ActorMoveSystem const&)            = delete;
    ActorMoveSystem()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createActorMoveSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorMoveSystem();
    /**
     * @symbol ?createUpdateHitboxSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdateHitboxSystem();
    // NOLINTEND
};

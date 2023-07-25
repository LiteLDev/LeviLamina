#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVESYSTEM
public:
    ActorMoveSystem& operator=(ActorMoveSystem const&) = delete;
    ActorMoveSystem(ActorMoveSystem const&)            = delete;
    ActorMoveSystem()                                  = delete;
#endif

public:
    /**
     * @symbol ?createActorMoveSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorMoveSystem();
    /**
     * @symbol ?createUpdateHitboxSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdateHitboxSystem();
};

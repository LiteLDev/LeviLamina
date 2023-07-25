#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMovementTickFilterSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVEMENTTICKFILTERSYSTEM
public:
    ActorMovementTickFilterSystem& operator=(ActorMovementTickFilterSystem const&) = delete;
    ActorMovementTickFilterSystem(ActorMovementTickFilterSystem const&)            = delete;
    ActorMovementTickFilterSystem()                                                = delete;
#endif

public:
    /**
     * @symbol ?createBase\@ActorMovementTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBase();
};

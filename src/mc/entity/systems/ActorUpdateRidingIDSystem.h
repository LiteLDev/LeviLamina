#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorUpdateRidingIDSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATERIDINGIDSYSTEM
public:
    ActorUpdateRidingIDSystem& operator=(ActorUpdateRidingIDSystem const&) = delete;
    ActorUpdateRidingIDSystem(ActorUpdateRidingIDSystem const&)            = delete;
    ActorUpdateRidingIDSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createClearPrevRidingIDSystem\@ActorUpdateRidingIDSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearPrevRidingIDSystem();
    /**
     * @symbol ?createClearRidingIDSystem\@ActorUpdateRidingIDSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearRidingIDSystem();
    /**
     * @symbol ?createUpdatePrevRidingIDSystem\@ActorUpdateRidingIDSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdatePrevRidingIDSystem();
};

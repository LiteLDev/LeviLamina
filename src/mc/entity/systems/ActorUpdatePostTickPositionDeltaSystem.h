#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorUpdatePostTickPositionDeltaSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATEPOSTTICKPOSITIONDELTASYSTEM
public:
    ActorUpdatePostTickPositionDeltaSystem& operator=(ActorUpdatePostTickPositionDeltaSystem const&) = delete;
    ActorUpdatePostTickPositionDeltaSystem(ActorUpdatePostTickPositionDeltaSystem const&)            = delete;
    ActorUpdatePostTickPositionDeltaSystem()                                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?createActorUpdatePostTickPositionDeltaSystem\@ActorUpdatePostTickPositionDeltaSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorUpdatePostTickPositionDeltaSystem();
};

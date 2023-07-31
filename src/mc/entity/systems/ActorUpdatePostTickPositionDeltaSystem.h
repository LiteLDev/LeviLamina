#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorUpdatePostTickPositionDeltaSystem {

public:
    // prevent constructor by default
    ActorUpdatePostTickPositionDeltaSystem& operator=(ActorUpdatePostTickPositionDeltaSystem const&) = delete;
    ActorUpdatePostTickPositionDeltaSystem(ActorUpdatePostTickPositionDeltaSystem const&)            = delete;
    ActorUpdatePostTickPositionDeltaSystem()                                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createActorUpdatePostTickPositionDeltaSystem\@ActorUpdatePostTickPositionDeltaSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorUpdatePostTickPositionDeltaSystem();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorStopRidingEventSystem {

public:
    // prevent constructor by default
    ActorStopRidingEventSystem& operator=(ActorStopRidingEventSystem const&) = delete;
    ActorStopRidingEventSystem(ActorStopRidingEventSystem const&)            = delete;
    ActorStopRidingEventSystem()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createCancelableEventSystem\@ActorStopRidingEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCancelableEventSystem();
    /**
     * @symbol ?createSystem\@ActorStopRidingEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};

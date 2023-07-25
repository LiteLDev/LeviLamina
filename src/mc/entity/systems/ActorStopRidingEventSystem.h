#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorStopRidingEventSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSTOPRIDINGEVENTSYSTEM
public:
    ActorStopRidingEventSystem& operator=(ActorStopRidingEventSystem const&) = delete;
    ActorStopRidingEventSystem(ActorStopRidingEventSystem const&)            = delete;
    ActorStopRidingEventSystem()                                             = delete;
#endif

public:
    /**
     * @symbol ?createCancelableEventSystem\@ActorStopRidingEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCancelableEventSystem();
    /**
     * @symbol ?createSystem\@ActorStopRidingEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};

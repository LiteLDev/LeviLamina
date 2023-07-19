/**
 * @file  ActorStopRidingEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorStopRidingEventSystem.
 *
 */
class ActorStopRidingEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSTOPRIDINGEVENTSYSTEM
public:
    class ActorStopRidingEventSystem& operator=(class ActorStopRidingEventSystem const &) = delete;
    ActorStopRidingEventSystem(class ActorStopRidingEventSystem const &) = delete;
    ActorStopRidingEventSystem() = delete;
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

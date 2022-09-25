/**
 * @file  ActorMoveNotifierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorMoveNotifierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVENOTIFIERSYSTEM
public:
    class ActorMoveNotifierSystem& operator=(class ActorMoveNotifierSystem const &) = delete;
    ActorMoveNotifierSystem(class ActorMoveNotifierSystem const &) = delete;
    ActorMoveNotifierSystem() = delete;
#endif

public:
    /**
     * @symbol ?createActorMoveNotifierSystem@ActorMoveNotifierSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorMoveNotifierSystem();

};
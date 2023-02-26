/**
 * @file  ActorMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMoveSystem.
 *
 */
class ActorMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVESYSTEM
public:
    class ActorMoveSystem& operator=(class ActorMoveSystem const &) = delete;
    ActorMoveSystem(class ActorMoveSystem const &) = delete;
    ActorMoveSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createActorMoveSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorMoveSystem();
    /**
     * @symbol  ?createUpdateHitboxSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdateHitboxSystem();

};
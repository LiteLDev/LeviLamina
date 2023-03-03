/**
 * @file  ActorMoveToSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMoveToSystem.
 *
 */
class ActorMoveToSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVETOSYSTEM
public:
    class ActorMoveToSystem& operator=(class ActorMoveToSystem const &) = delete;
    ActorMoveToSystem(class ActorMoveToSystem const &) = delete;
    ActorMoveToSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createActorMoveToSystem\@ActorMoveToSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorMoveToSystem();

};
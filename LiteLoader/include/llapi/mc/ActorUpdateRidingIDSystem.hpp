/**
 * @file  ActorUpdateRidingIDSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorUpdateRidingIDSystem.
 *
 */
class ActorUpdateRidingIDSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATERIDINGIDSYSTEM
public:
    class ActorUpdateRidingIDSystem& operator=(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem() = delete;
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

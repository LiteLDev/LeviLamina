/**
 * @file  ActorUpdatePreviousPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorUpdatePreviousPositionSystem.
 *
 */
class ActorUpdatePreviousPositionSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATEPREVIOUSPOSITIONSYSTEM
public:
    class ActorUpdatePreviousPositionSystem& operator=(class ActorUpdatePreviousPositionSystem const &) = delete;
    ActorUpdatePreviousPositionSystem(class ActorUpdatePreviousPositionSystem const &) = delete;
    ActorUpdatePreviousPositionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?create\@ActorUpdatePreviousPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};
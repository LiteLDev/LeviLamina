/**
 * @file  InsideHoneyBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideHoneyBlockSystem.
 *
 */
class InsideHoneyBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEHONEYBLOCKSYSTEM
public:
    class InsideHoneyBlockSystem& operator=(class InsideHoneyBlockSystem const &) = delete;
    InsideHoneyBlockSystem(class InsideHoneyBlockSystem const &) = delete;
    InsideHoneyBlockSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createEventsSystem\@InsideHoneyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createEventsSystem();
    /**
     * @symbol  ?createMovementSystem\@InsideHoneyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMovementSystem();

};
/**
 * @file  SprintTimerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SprintTimerSystem.
 *
 */
class SprintTimerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPRINTTIMERSYSTEM
public:
    class SprintTimerSystem& operator=(class SprintTimerSystem const &) = delete;
    SprintTimerSystem(class SprintTimerSystem const &) = delete;
    SprintTimerSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSprintTimerSystem\@SprintTimerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSprintTimerSystem();

};
/**
 * @file  TriggerJumpSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TriggerJumpSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIGGERJUMPSYSTEM
public:
    class TriggerJumpSystem& operator=(class TriggerJumpSystem const &) = delete;
    TriggerJumpSystem(class TriggerJumpSystem const &) = delete;
    TriggerJumpSystem() = delete;
#endif

public:
    /**
     * @symbol ?createCleanupSystem\@TriggerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createTriggerJumpSystem\@TriggerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTriggerJumpSystem();

};

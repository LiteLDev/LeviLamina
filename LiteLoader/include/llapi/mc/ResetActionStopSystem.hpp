/**
 * @file  ResetActionStopSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetActionStopSystem.
 *
 */
class ResetActionStopSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETACTIONSTOPSYSTEM
public:
    class ResetActionStopSystem& operator=(class ResetActionStopSystem const &) = delete;
    ResetActionStopSystem(class ResetActionStopSystem const &) = delete;
    ResetActionStopSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createResetActionStopSystem\@ResetActionStopSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetActionStopSystem();

};
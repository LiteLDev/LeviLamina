/**
 * @file  FlagPassengerRemovalSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FlagPassengerRemovalSystem.
 *
 */
class FlagPassengerRemovalSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLAGPASSENGERREMOVALSYSTEM
public:
    class FlagPassengerRemovalSystem& operator=(class FlagPassengerRemovalSystem const &) = delete;
    FlagPassengerRemovalSystem(class FlagPassengerRemovalSystem const &) = delete;
    FlagPassengerRemovalSystem() = delete;
#endif

public:
    /**
     * @symbol ?createDeferredSystem\@FlagPassengerRemovalSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDeferredSystem();
    /**
     * @symbol ?createImmediateSystem\@FlagPassengerRemovalSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmediateSystem();

};

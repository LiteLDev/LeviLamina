#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlagPassengerRemovalSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLAGPASSENGERREMOVALSYSTEM
public:
    FlagPassengerRemovalSystem& operator=(FlagPassengerRemovalSystem const&) = delete;
    FlagPassengerRemovalSystem(FlagPassengerRemovalSystem const&)            = delete;
    FlagPassengerRemovalSystem()                                             = delete;
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

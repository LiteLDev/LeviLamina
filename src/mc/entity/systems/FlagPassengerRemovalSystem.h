#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlagPassengerRemovalSystem {

public:
    // prevent constructor by default
    FlagPassengerRemovalSystem& operator=(FlagPassengerRemovalSystem const&) = delete;
    FlagPassengerRemovalSystem(FlagPassengerRemovalSystem const&)            = delete;
    FlagPassengerRemovalSystem()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createDeferredSystem\@FlagPassengerRemovalSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDeferredSystem();
    /**
     * @symbol ?createImmediateSystem\@FlagPassengerRemovalSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmediateSystem();
    // NOLINTEND
};

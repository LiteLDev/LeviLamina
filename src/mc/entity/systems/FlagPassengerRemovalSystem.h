#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlagPassengerRemovalSystem {

public:
    // prevent constructor by default
    FlagPassengerRemovalSystem& operator=(FlagPassengerRemovalSystem const&) = delete;
    FlagPassengerRemovalSystem(FlagPassengerRemovalSystem const&)            = delete;
    FlagPassengerRemovalSystem()                                             = delete;

public:
    /**
     * @symbol ?createDeferredSystem\@FlagPassengerRemovalSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDeferredSystem(); // NOLINT
    /**
     * @symbol ?createImmediateSystem\@FlagPassengerRemovalSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmediateSystem(); // NOLINT
};

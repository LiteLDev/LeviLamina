#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlagPassengerRemovalSystem {
public:
    // prevent constructor by default
    FlagPassengerRemovalSystem& operator=(FlagPassengerRemovalSystem const&);
    FlagPassengerRemovalSystem(FlagPassengerRemovalSystem const&);
    FlagPassengerRemovalSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createDeferredSystem@FlagPassengerRemovalSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createDeferredSystem();

    // symbol: ?createImmediateSystem@FlagPassengerRemovalSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createImmediateSystem();

    // NOLINTEND
};

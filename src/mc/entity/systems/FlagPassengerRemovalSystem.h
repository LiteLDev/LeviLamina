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
    MCAPI static struct TickingSystemWithInfo createDeferredSystem();

    MCAPI static struct TickingSystemWithInfo createImmediateSystem();

    // NOLINTEND
};

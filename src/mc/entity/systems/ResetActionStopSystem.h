#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetActionStopSystem {
public:
    // prevent constructor by default
    ResetActionStopSystem& operator=(ResetActionStopSystem const&);
    ResetActionStopSystem(ResetActionStopSystem const&);
    ResetActionStopSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createResetActionStopSystem@ResetActionStopSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createResetActionStopSystem();

    // NOLINTEND
};

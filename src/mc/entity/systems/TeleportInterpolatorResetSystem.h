#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportInterpolatorResetSystem {
public:
    // prevent constructor by default
    TeleportInterpolatorResetSystem& operator=(TeleportInterpolatorResetSystem const&);
    TeleportInterpolatorResetSystem(TeleportInterpolatorResetSystem const&);
    TeleportInterpolatorResetSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createTeleportInterpolatorResetSystem@TeleportInterpolatorResetSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createTeleportInterpolatorResetSystem();

    // NOLINTEND
};

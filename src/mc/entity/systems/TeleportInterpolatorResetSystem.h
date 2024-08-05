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
    MCAPI static struct TickingSystemWithInfo createTeleportInterpolatorResetSystem();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MovementInterpolatorSystem {
public:
    // prevent constructor by default
    MovementInterpolatorSystem& operator=(MovementInterpolatorSystem const&);
    MovementInterpolatorSystem(MovementInterpolatorSystem const&);
    MovementInterpolatorSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createOnGroundPostTickSystem@MovementInterpolatorSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createOnGroundPostTickSystem();

    // symbol: ?createTickSystem@MovementInterpolatorSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createTickSystem(bool isClientSide);

    // NOLINTEND
};

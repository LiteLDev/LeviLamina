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
    MCAPI static struct TickingSystemWithInfo createOnGroundPostTickSystem();

    MCAPI static struct TickingSystemWithInfo createTickSystem(bool isClientSide);

    // NOLINTEND
};

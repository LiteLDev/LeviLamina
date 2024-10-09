#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MovementTickResetTemporaryComponentsSystem {
public:
    // prevent constructor by default
    MovementTickResetTemporaryComponentsSystem& operator=(MovementTickResetTemporaryComponentsSystem const&);
    MovementTickResetTemporaryComponentsSystem(MovementTickResetTemporaryComponentsSystem const&);
    MovementTickResetTemporaryComponentsSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

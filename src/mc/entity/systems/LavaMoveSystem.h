#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaMoveSystem {
public:
    // prevent constructor by default
    LavaMoveSystem& operator=(LavaMoveSystem const&);
    LavaMoveSystem(LavaMoveSystem const&);
    LavaMoveSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createLavaMoveSystem();

    // NOLINTEND
};

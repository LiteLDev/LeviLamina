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
    // symbol: ?createLavaMoveSystem@LavaMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLavaMoveSystem();

    // NOLINTEND
};

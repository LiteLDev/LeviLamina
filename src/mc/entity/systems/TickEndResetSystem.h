#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickEndResetSystem {
public:
    // prevent constructor by default
    TickEndResetSystem& operator=(TickEndResetSystem const&);
    TickEndResetSystem(TickEndResetSystem const&);
    TickEndResetSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@TickEndResetSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaTravelSystem {
public:
    // prevent constructor by default
    LavaTravelSystem& operator=(LavaTravelSystem const&);
    LavaTravelSystem(LavaTravelSystem const&);
    LavaTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createLavaTravelSystem@LavaTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLavaTravelSystem();

    // NOLINTEND
};

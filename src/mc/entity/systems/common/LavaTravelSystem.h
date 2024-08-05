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
    MCAPI static struct TickingSystemWithInfo createLavaTravelSystem();

    // NOLINTEND
};

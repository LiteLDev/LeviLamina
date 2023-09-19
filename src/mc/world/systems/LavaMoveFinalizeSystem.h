#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaMoveFinalizeSystem {
public:
    // prevent constructor by default
    LavaMoveFinalizeSystem& operator=(LavaMoveFinalizeSystem const&);
    LavaMoveFinalizeSystem(LavaMoveFinalizeSystem const&);
    LavaMoveFinalizeSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createLavaMoveFinalizeSystem@LavaMoveFinalizeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLavaMoveFinalizeSystem();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveSpeedCapSystem {
public:
    // prevent constructor by default
    MoveSpeedCapSystem& operator=(MoveSpeedCapSystem const&);
    MoveSpeedCapSystem(MoveSpeedCapSystem const&);
    MoveSpeedCapSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@MoveSpeedCapSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpEndSystem {
public:
    // prevent constructor by default
    JumpEndSystem& operator=(JumpEndSystem const&);
    JumpEndSystem(JumpEndSystem const&);
    JumpEndSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@JumpEndSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LadderResetFallDamageSystem {
public:
    // prevent constructor by default
    LadderResetFallDamageSystem& operator=(LadderResetFallDamageSystem const&);
    LadderResetFallDamageSystem(LadderResetFallDamageSystem const&);
    LadderResetFallDamageSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createLadderResetFallDamageSystem@LadderResetFallDamageSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLadderResetFallDamageSystem();

    // NOLINTEND
};

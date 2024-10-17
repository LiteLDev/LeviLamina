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
    MCAPI static struct TickingSystemWithInfo createLadderResetFallDamageSystem();

    // NOLINTEND
};

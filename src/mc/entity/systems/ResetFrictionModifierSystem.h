#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetFrictionModifierSystem {
public:
    // prevent constructor by default
    ResetFrictionModifierSystem& operator=(ResetFrictionModifierSystem const&);
    ResetFrictionModifierSystem(ResetFrictionModifierSystem const&);
    ResetFrictionModifierSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ResetFrictionModifierSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

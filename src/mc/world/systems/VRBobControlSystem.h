#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VRBobControlSystem {
public:
    // prevent constructor by default
    VRBobControlSystem& operator=(VRBobControlSystem const&);
    VRBobControlSystem(VRBobControlSystem const&);
    VRBobControlSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@VRBobControlSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};

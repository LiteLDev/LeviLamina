#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VRBobControlSystem {

public:
    // prevent constructor by default
    VRBobControlSystem& operator=(VRBobControlSystem const&) = delete;
    VRBobControlSystem(VRBobControlSystem const&)            = delete;
    VRBobControlSystem()                                     = delete;

public:
    /**
     * @symbol ?create\@VRBobControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
};

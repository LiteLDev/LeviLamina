#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VRBobControlSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VRBOBCONTROLSYSTEM
public:
    VRBobControlSystem& operator=(VRBobControlSystem const&) = delete;
    VRBobControlSystem(VRBobControlSystem const&)            = delete;
    VRBobControlSystem()                                     = delete;
#endif

public:
    /**
     * @symbol ?create\@VRBobControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};

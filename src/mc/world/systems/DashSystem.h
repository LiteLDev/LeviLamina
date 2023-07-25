#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DashSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DASHSYSTEM
public:
    DashSystem& operator=(DashSystem const&) = delete;
    DashSystem(DashSystem const&)            = delete;
    DashSystem()                             = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@DashSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};

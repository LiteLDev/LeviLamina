#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideHoneyBlockSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEHONEYBLOCKSYSTEM
public:
    InsideHoneyBlockSystem& operator=(InsideHoneyBlockSystem const&) = delete;
    InsideHoneyBlockSystem(InsideHoneyBlockSystem const&)            = delete;
    InsideHoneyBlockSystem()                                         = delete;
#endif

public:
    /**
     * @symbol ?createEventsSystem\@InsideHoneyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createEventsSystem();
};

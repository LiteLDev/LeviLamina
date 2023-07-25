#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideWaterlilyBlockSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEWATERLILYBLOCKSYSTEM
public:
    InsideWaterlilyBlockSystem& operator=(InsideWaterlilyBlockSystem const&) = delete;
    InsideWaterlilyBlockSystem(InsideWaterlilyBlockSystem const&)            = delete;
    InsideWaterlilyBlockSystem()                                             = delete;
#endif

public:
    /**
     * @symbol ?createDestroyWaterlilySystem\@InsideWaterlilyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDestroyWaterlilySystem();
};

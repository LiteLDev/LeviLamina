#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideGenericBlockSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEGENERICBLOCKSYSTEM
public:
    InsideGenericBlockSystem& operator=(InsideGenericBlockSystem const&) = delete;
    InsideGenericBlockSystem(InsideGenericBlockSystem const&)            = delete;
    InsideGenericBlockSystem()                                           = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@InsideGenericBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};

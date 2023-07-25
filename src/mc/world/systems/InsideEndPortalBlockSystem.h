#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideEndPortalBlockSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEENDPORTALBLOCKSYSTEM
public:
    InsideEndPortalBlockSystem& operator=(InsideEndPortalBlockSystem const&) = delete;
    InsideEndPortalBlockSystem(InsideEndPortalBlockSystem const&)            = delete;
    InsideEndPortalBlockSystem()                                             = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@InsideEndPortalBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};

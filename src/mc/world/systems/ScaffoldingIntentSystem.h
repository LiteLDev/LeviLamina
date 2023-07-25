#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScaffoldingIntentSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAFFOLDINGINTENTSYSTEM
public:
    ScaffoldingIntentSystem& operator=(ScaffoldingIntentSystem const&) = delete;
    ScaffoldingIntentSystem(ScaffoldingIntentSystem const&)            = delete;
    ScaffoldingIntentSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ScaffoldingIntentSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};

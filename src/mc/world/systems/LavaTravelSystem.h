#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVATRAVELSYSTEM
public:
    LavaTravelSystem& operator=(LavaTravelSystem const&) = delete;
    LavaTravelSystem(LavaTravelSystem const&)            = delete;
    LavaTravelSystem()                                   = delete;
#endif

public:
    /**
     * @symbol ?createLavaTravelSystem\@LavaTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaTravelSystem();
};

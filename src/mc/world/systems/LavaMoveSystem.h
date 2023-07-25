#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVAMOVESYSTEM
public:
    LavaMoveSystem& operator=(LavaMoveSystem const&) = delete;
    LavaMoveSystem(LavaMoveSystem const&)            = delete;
    LavaMoveSystem()                                 = delete;
#endif

public:
    /**
     * @symbol ?createLavaMoveSystem\@LavaMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveSystem();
};

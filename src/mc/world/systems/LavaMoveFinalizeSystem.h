#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaMoveFinalizeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVAMOVEFINALIZESYSTEM
public:
    LavaMoveFinalizeSystem& operator=(LavaMoveFinalizeSystem const&) = delete;
    LavaMoveFinalizeSystem(LavaMoveFinalizeSystem const&)            = delete;
    LavaMoveFinalizeSystem()                                         = delete;
#endif

public:
    /**
     * @symbol ?createLavaMoveFinalizeSystem\@LavaMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveFinalizeSystem();
};

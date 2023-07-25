#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlideMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEMOVESYSTEM
public:
    GlideMoveSystem& operator=(GlideMoveSystem const&) = delete;
    GlideMoveSystem(GlideMoveSystem const&)            = delete;
    GlideMoveSystem()                                  = delete;
#endif

public:
    /**
     * @symbol ?createGlideMoveSystem\@GlideMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGlideMoveSystem();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlideMoveSystem {

public:
    // prevent constructor by default
    GlideMoveSystem& operator=(GlideMoveSystem const&) = delete;
    GlideMoveSystem(GlideMoveSystem const&)            = delete;
    GlideMoveSystem()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createGlideMoveSystem\@GlideMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGlideMoveSystem();
    // NOLINTEND
};

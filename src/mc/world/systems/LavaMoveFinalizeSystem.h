#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaMoveFinalizeSystem {

public:
    // prevent constructor by default
    LavaMoveFinalizeSystem& operator=(LavaMoveFinalizeSystem const&) = delete;
    LavaMoveFinalizeSystem(LavaMoveFinalizeSystem const&)            = delete;
    LavaMoveFinalizeSystem()                                         = delete;

public:
    /**
     * @symbol ?createLavaMoveFinalizeSystem\@LavaMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveFinalizeSystem(); // NOLINT
};

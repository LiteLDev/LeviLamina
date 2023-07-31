#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaMoveSystem {

public:
    // prevent constructor by default
    LavaMoveSystem& operator=(LavaMoveSystem const&) = delete;
    LavaMoveSystem(LavaMoveSystem const&)            = delete;
    LavaMoveSystem()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createLavaMoveSystem\@LavaMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaMoveSystem();
    // NOLINTEND
};

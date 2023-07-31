#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LavaTravelSystem {

public:
    // prevent constructor by default
    LavaTravelSystem& operator=(LavaTravelSystem const&) = delete;
    LavaTravelSystem(LavaTravelSystem const&)            = delete;
    LavaTravelSystem()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createLavaTravelSystem\@LavaTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaTravelSystem();
    // NOLINTEND
};

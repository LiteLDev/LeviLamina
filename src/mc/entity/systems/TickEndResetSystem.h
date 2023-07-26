#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickEndResetSystem {

public:
    // prevent constructor by default
    TickEndResetSystem& operator=(TickEndResetSystem const&) = delete;
    TickEndResetSystem(TickEndResetSystem const&)            = delete;
    TickEndResetSystem()                                     = delete;

public:
    /**
     * @symbol ?createSystem\@TickEndResetSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};

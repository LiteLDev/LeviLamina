#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideHoneyBlockSystem {

public:
    // prevent constructor by default
    InsideHoneyBlockSystem& operator=(InsideHoneyBlockSystem const&) = delete;
    InsideHoneyBlockSystem(InsideHoneyBlockSystem const&)            = delete;
    InsideHoneyBlockSystem()                                         = delete;

public:
    /**
     * @symbol ?createEventsSystem\@InsideHoneyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createEventsSystem(); // NOLINT
};

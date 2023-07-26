#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideWaterlilyBlockSystem {

public:
    // prevent constructor by default
    InsideWaterlilyBlockSystem& operator=(InsideWaterlilyBlockSystem const&) = delete;
    InsideWaterlilyBlockSystem(InsideWaterlilyBlockSystem const&)            = delete;
    InsideWaterlilyBlockSystem()                                             = delete;

public:
    /**
     * @symbol ?createDestroyWaterlilySystem\@InsideWaterlilyBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDestroyWaterlilySystem(); // NOLINT
};

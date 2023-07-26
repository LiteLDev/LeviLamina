#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetActionStopSystem {

public:
    // prevent constructor by default
    ResetActionStopSystem& operator=(ResetActionStopSystem const&) = delete;
    ResetActionStopSystem(ResetActionStopSystem const&)            = delete;
    ResetActionStopSystem()                                        = delete;

public:
    /**
     * @symbol ?createResetActionStopSystem\@ResetActionStopSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetActionStopSystem(); // NOLINT
};

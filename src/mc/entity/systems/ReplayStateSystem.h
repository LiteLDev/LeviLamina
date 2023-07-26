#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReplayStateSystem {

public:
    // prevent constructor by default
    ReplayStateSystem& operator=(ReplayStateSystem const&) = delete;
    ReplayStateSystem(ReplayStateSystem const&)            = delete;
    ReplayStateSystem()                                    = delete;

public:
    /**
     * @symbol ?createAddReplayStateComponentSystem\@ReplayStateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAddReplayStateComponentSystem(); // NOLINT
    /**
     * @symbol ?createReplayStateSystem\@ReplayStateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createReplayStateSystem(); // NOLINT
};

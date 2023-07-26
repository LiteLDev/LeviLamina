#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateAISystem {

public:
    // prevent constructor by default
    UpdateAISystem& operator=(UpdateAISystem const&) = delete;
    UpdateAISystem(UpdateAISystem const&)            = delete;
    UpdateAISystem()                                 = delete;

public:
    /**
     * @symbol ?createSystem\@UpdateAISystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};

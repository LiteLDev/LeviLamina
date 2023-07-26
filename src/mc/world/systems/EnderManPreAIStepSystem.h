#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnderManPreAIStepSystem {

public:
    // prevent constructor by default
    EnderManPreAIStepSystem& operator=(EnderManPreAIStepSystem const&) = delete;
    EnderManPreAIStepSystem(EnderManPreAIStepSystem const&)            = delete;
    EnderManPreAIStepSystem()                                          = delete;

public:
    /**
     * @symbol ?createSystem\@EnderManPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};

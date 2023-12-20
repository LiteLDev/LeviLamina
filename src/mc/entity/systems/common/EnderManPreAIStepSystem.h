#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnderManPreAIStepSystem {
public:
    // prevent constructor by default
    EnderManPreAIStepSystem& operator=(EnderManPreAIStepSystem const&);
    EnderManPreAIStepSystem(EnderManPreAIStepSystem const&);
    EnderManPreAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@EnderManPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

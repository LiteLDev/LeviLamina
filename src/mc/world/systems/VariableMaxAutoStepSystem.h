#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VariableMaxAutoStepSystem {
public:
    // prevent constructor by default
    VariableMaxAutoStepSystem& operator=(VariableMaxAutoStepSystem const&);
    VariableMaxAutoStepSystem(VariableMaxAutoStepSystem const&);
    VariableMaxAutoStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@VariableMaxAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

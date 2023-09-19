#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetPreviousWalkDistSystem {
public:
    // prevent constructor by default
    SetPreviousWalkDistSystem& operator=(SetPreviousWalkDistSystem const&);
    SetPreviousWalkDistSystem(SetPreviousWalkDistSystem const&);
    SetPreviousWalkDistSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SetPreviousWalkDistSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

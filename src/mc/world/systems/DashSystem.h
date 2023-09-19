#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DashSystem {
public:
    // prevent constructor by default
    DashSystem& operator=(DashSystem const&);
    DashSystem(DashSystem const&);
    DashSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@DashSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

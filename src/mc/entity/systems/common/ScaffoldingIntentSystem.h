#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScaffoldingIntentSystem {
public:
    // prevent constructor by default
    ScaffoldingIntentSystem& operator=(ScaffoldingIntentSystem const&);
    ScaffoldingIntentSystem(ScaffoldingIntentSystem const&);
    ScaffoldingIntentSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ScaffoldingIntentSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

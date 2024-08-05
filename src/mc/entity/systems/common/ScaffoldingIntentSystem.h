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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

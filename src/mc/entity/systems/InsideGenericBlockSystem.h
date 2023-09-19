#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideGenericBlockSystem {
public:
    // prevent constructor by default
    InsideGenericBlockSystem& operator=(InsideGenericBlockSystem const&);
    InsideGenericBlockSystem(InsideGenericBlockSystem const&);
    InsideGenericBlockSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@InsideGenericBlockSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

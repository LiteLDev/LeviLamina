#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideEndPortalBlockSystem {
public:
    // prevent constructor by default
    InsideEndPortalBlockSystem& operator=(InsideEndPortalBlockSystem const&);
    InsideEndPortalBlockSystem(InsideEndPortalBlockSystem const&);
    InsideEndPortalBlockSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@InsideEndPortalBlockSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

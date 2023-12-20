#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlideMoveSystem {
public:
    // prevent constructor by default
    GlideMoveSystem& operator=(GlideMoveSystem const&);
    GlideMoveSystem(GlideMoveSystem const&);
    GlideMoveSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createGlideMoveSystem@GlideMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createGlideMoveSystem();

    // NOLINTEND
};

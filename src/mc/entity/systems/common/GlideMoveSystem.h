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
    MCAPI static struct TickingSystemWithInfo createGlideMoveSystem();

    // NOLINTEND
};

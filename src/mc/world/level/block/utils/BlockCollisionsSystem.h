#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockCollisionsSystem {
public:
    // prevent constructor by default
    BlockCollisionsSystem& operator=(BlockCollisionsSystem const&);
    BlockCollisionsSystem(BlockCollisionsSystem const&);
    BlockCollisionsSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createBlockCollisionsSystem@BlockCollisionsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createBlockCollisionsSystem();

    // NOLINTEND
};

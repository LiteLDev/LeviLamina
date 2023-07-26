#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockCollisionsSystem {

public:
    // prevent constructor by default
    BlockCollisionsSystem& operator=(BlockCollisionsSystem const&) = delete;
    BlockCollisionsSystem(BlockCollisionsSystem const&)            = delete;
    BlockCollisionsSystem()                                        = delete;

public:
    /**
     * @symbol ?createBlockCollisionsSystem\@BlockCollisionsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBlockCollisionsSystem(); // NOLINT
};

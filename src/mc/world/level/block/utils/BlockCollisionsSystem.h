#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockCollisionsSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOLLISIONSSYSTEM
public:
    BlockCollisionsSystem& operator=(BlockCollisionsSystem const&) = delete;
    BlockCollisionsSystem(BlockCollisionsSystem const&)            = delete;
    BlockCollisionsSystem()                                        = delete;
#endif

public:
    /**
     * @symbol ?createBlockCollisionsSystem\@BlockCollisionsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBlockCollisionsSystem();
};

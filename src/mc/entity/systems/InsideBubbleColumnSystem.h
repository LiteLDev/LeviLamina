#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBubbleColumnSystem {

public:
    // prevent constructor by default
    InsideBubbleColumnSystem& operator=(InsideBubbleColumnSystem const&) = delete;
    InsideBubbleColumnSystem(InsideBubbleColumnSystem const&)            = delete;
    InsideBubbleColumnSystem()                                           = delete;

public:
    /**
     * @symbol ?createSpawnBubbleColumnParticlesSystem\@InsideBubbleColumnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSpawnBubbleColumnParticlesSystem(); // NOLINT
};

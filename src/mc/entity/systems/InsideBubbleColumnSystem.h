#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBubbleColumnSystem {
public:
    // prevent constructor by default
    InsideBubbleColumnSystem& operator=(InsideBubbleColumnSystem const&);
    InsideBubbleColumnSystem(InsideBubbleColumnSystem const&);
    InsideBubbleColumnSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSpawnBubbleColumnParticlesSystem@InsideBubbleColumnSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSpawnBubbleColumnParticlesSystem();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBubbleColumnSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBUBBLECOLUMNSYSTEM
public:
    InsideBubbleColumnSystem& operator=(InsideBubbleColumnSystem const&) = delete;
    InsideBubbleColumnSystem(InsideBubbleColumnSystem const&)            = delete;
    InsideBubbleColumnSystem()                                           = delete;
#endif

public:
    /**
     * @symbol ?createSpawnBubbleColumnParticlesSystem\@InsideBubbleColumnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSpawnBubbleColumnParticlesSystem();
};

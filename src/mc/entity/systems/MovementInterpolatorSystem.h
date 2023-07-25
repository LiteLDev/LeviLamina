#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MovementInterpolatorSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORSYSTEM
public:
    MovementInterpolatorSystem& operator=(MovementInterpolatorSystem const&) = delete;
    MovementInterpolatorSystem(MovementInterpolatorSystem const&)            = delete;
    MovementInterpolatorSystem()                                             = delete;
#endif

public:
    /**
     * @symbol ?createOnGroundPostTickSystem\@MovementInterpolatorSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createOnGroundPostTickSystem();
    /**
     * @symbol ?createTickSystem\@MovementInterpolatorSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createTickSystem(bool);
};

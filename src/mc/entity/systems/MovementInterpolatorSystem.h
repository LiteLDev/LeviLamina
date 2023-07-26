#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MovementInterpolatorSystem {

public:
    // prevent constructor by default
    MovementInterpolatorSystem& operator=(MovementInterpolatorSystem const&) = delete;
    MovementInterpolatorSystem(MovementInterpolatorSystem const&)            = delete;
    MovementInterpolatorSystem()                                             = delete;

public:
    /**
     * @symbol ?createOnGroundPostTickSystem\@MovementInterpolatorSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createOnGroundPostTickSystem(); // NOLINT
    /**
     * @symbol ?createTickSystem\@MovementInterpolatorSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createTickSystem(bool); // NOLINT
};

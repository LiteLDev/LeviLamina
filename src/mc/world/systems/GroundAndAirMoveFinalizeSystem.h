#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundAndAirMoveFinalizeSystem {

public:
    // prevent constructor by default
    GroundAndAirMoveFinalizeSystem& operator=(GroundAndAirMoveFinalizeSystem const&) = delete;
    GroundAndAirMoveFinalizeSystem(GroundAndAirMoveFinalizeSystem const&)            = delete;
    GroundAndAirMoveFinalizeSystem()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createAirMoveFinalizeSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirMoveFinalizeSystem();
    /**
     * @symbol ?createGroundMoveFinalizeSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGroundMoveFinalizeSystem();
    // NOLINTEND
};

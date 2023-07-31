#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundAndAirMoveSystem {

public:
    // prevent constructor by default
    GroundAndAirMoveSystem& operator=(GroundAndAirMoveSystem const&) = delete;
    GroundAndAirMoveSystem(GroundAndAirMoveSystem const&)            = delete;
    GroundAndAirMoveSystem()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createAirMoveSystem\@GroundAndAirMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirMoveSystem();
    /**
     * @symbol ?createGroundMoveSystem\@GroundAndAirMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGroundMoveSystem();
    // NOLINTEND
};

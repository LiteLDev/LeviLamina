#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundAndAirMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDANDAIRMOVESYSTEM
public:
    GroundAndAirMoveSystem& operator=(GroundAndAirMoveSystem const&) = delete;
    GroundAndAirMoveSystem(GroundAndAirMoveSystem const&)            = delete;
    GroundAndAirMoveSystem()                                         = delete;
#endif

public:
    /**
     * @symbol ?createAirMoveSystem\@GroundAndAirMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirMoveSystem();
    /**
     * @symbol ?createGroundMoveSystem\@GroundAndAirMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGroundMoveSystem();
};

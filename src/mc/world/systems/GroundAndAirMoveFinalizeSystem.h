#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundAndAirMoveFinalizeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDANDAIRMOVEFINALIZESYSTEM
public:
    GroundAndAirMoveFinalizeSystem& operator=(GroundAndAirMoveFinalizeSystem const&) = delete;
    GroundAndAirMoveFinalizeSystem(GroundAndAirMoveFinalizeSystem const&)            = delete;
    GroundAndAirMoveFinalizeSystem()                                                 = delete;
#endif

public:
    /**
     * @symbol ?createAirMoveFinalizeSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirMoveFinalizeSystem();
    /**
     * @symbol ?createGroundMoveFinalizeSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGroundMoveFinalizeSystem();
};

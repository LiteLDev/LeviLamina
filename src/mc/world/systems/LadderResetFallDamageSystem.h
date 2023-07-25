#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LadderResetFallDamageSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LADDERRESETFALLDAMAGESYSTEM
public:
    LadderResetFallDamageSystem& operator=(LadderResetFallDamageSystem const&) = delete;
    LadderResetFallDamageSystem(LadderResetFallDamageSystem const&)            = delete;
    LadderResetFallDamageSystem()                                              = delete;
#endif

public:
    /**
     * @symbol ?createLadderResetFallDamageSystem\@LadderResetFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLadderResetFallDamageSystem();
};

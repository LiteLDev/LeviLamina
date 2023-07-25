#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CheckFallDamageInMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHECKFALLDAMAGEINMOVESYSTEM
public:
    CheckFallDamageInMoveSystem& operator=(CheckFallDamageInMoveSystem const&) = delete;
    CheckFallDamageInMoveSystem(CheckFallDamageInMoveSystem const&)            = delete;
    CheckFallDamageInMoveSystem()                                              = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@CheckFallDamageInMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};

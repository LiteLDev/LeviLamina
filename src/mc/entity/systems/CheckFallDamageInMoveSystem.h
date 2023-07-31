#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CheckFallDamageInMoveSystem {

public:
    // prevent constructor by default
    CheckFallDamageInMoveSystem& operator=(CheckFallDamageInMoveSystem const&) = delete;
    CheckFallDamageInMoveSystem(CheckFallDamageInMoveSystem const&)            = delete;
    CheckFallDamageInMoveSystem()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@CheckFallDamageInMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};

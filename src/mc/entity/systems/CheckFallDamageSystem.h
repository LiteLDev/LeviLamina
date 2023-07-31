#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CheckFallDamageSystem {

public:
    // prevent constructor by default
    CheckFallDamageSystem& operator=(CheckFallDamageSystem const&) = delete;
    CheckFallDamageSystem(CheckFallDamageSystem const&)            = delete;
    CheckFallDamageSystem()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@CheckFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetFrictionModifierSystem {

public:
    // prevent constructor by default
    ResetFrictionModifierSystem& operator=(ResetFrictionModifierSystem const&) = delete;
    ResetFrictionModifierSystem(ResetFrictionModifierSystem const&)            = delete;
    ResetFrictionModifierSystem()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@ResetFrictionModifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};

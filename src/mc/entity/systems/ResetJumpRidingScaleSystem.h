#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetJumpRidingScaleSystem {

public:
    // prevent constructor by default
    ResetJumpRidingScaleSystem& operator=(ResetJumpRidingScaleSystem const&) = delete;
    ResetJumpRidingScaleSystem(ResetJumpRidingScaleSystem const&)            = delete;
    ResetJumpRidingScaleSystem()                                             = delete;

public:
    /**
     * @symbol ?createSystem\@ResetJumpRidingScaleSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doResetJumpRidingScaleSystem\@ResetJumpRidingScaleSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUJumpRidingScaleComponent\@\@AEAUVanillaClientGameplayComponent\@\@\@Z
     */
    MCAPI static void
    _doResetJumpRidingScaleSystem(class StrictEntityContext const&, struct JumpRidingScaleComponent&, struct VanillaClientGameplayComponent&); // NOLINT

private:
};

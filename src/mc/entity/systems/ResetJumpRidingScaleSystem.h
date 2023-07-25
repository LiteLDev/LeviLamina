#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetJumpRidingScaleSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETJUMPRIDINGSCALESYSTEM
public:
    ResetJumpRidingScaleSystem& operator=(ResetJumpRidingScaleSystem const&) = delete;
    ResetJumpRidingScaleSystem(ResetJumpRidingScaleSystem const&)            = delete;
    ResetJumpRidingScaleSystem()                                             = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ResetJumpRidingScaleSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doResetJumpRidingScaleSystem\@ResetJumpRidingScaleSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUJumpRidingScaleComponent\@\@AEAUVanillaClientGameplayComponent\@\@\@Z
     */
    MCAPI static void
    _doResetJumpRidingScaleSystem(class StrictEntityContext const&, struct JumpRidingScaleComponent&, struct VanillaClientGameplayComponent&);

private:
};

/**
 * @file  ResetJumpRidingScaleSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetJumpRidingScaleSystem.
 *
 */
class ResetJumpRidingScaleSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETJUMPRIDINGSCALESYSTEM
public:
    class ResetJumpRidingScaleSystem& operator=(class ResetJumpRidingScaleSystem const &) = delete;
    ResetJumpRidingScaleSystem(class ResetJumpRidingScaleSystem const &) = delete;
    ResetJumpRidingScaleSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ResetJumpRidingScaleSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doResetJumpRidingScaleSystem\@ResetJumpRidingScaleSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUJumpRidingScaleComponent\@\@AEAUVanillaClientGameplayComponent\@\@\@Z
     */
    MCAPI static void _doResetJumpRidingScaleSystem(class StrictEntityContext const &, struct JumpRidingScaleComponent &, struct VanillaClientGameplayComponent &);

private:

};
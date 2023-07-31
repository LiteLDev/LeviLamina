#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SquidPreAiStepSystem {

public:
    // prevent constructor by default
    SquidPreAiStepSystem& operator=(SquidPreAiStepSystem const&) = delete;
    SquidPreAiStepSystem(SquidPreAiStepSystem const&)            = delete;
    SquidPreAiStepSystem()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@SquidPreAiStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doSquidPreAiStepSystem\@SquidPreAiStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAULocalMoveVelocityComponent\@\@\@Z
     */
    MCAPI static void _doSquidPreAiStepSystem(class StrictEntityContext const&, struct LocalMoveVelocityComponent&);
    // NOLINTEND
};

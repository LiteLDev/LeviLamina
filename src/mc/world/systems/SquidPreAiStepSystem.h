#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SquidPreAiStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDPREAISTEPSYSTEM
public:
    SquidPreAiStepSystem& operator=(SquidPreAiStepSystem const&) = delete;
    SquidPreAiStepSystem(SquidPreAiStepSystem const&)            = delete;
    SquidPreAiStepSystem()                                       = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SquidPreAiStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doSquidPreAiStepSystem\@SquidPreAiStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAULocalMoveVelocityComponent\@\@\@Z
     */
    MCAPI static void _doSquidPreAiStepSystem(class StrictEntityContext const&, struct LocalMoveVelocityComponent&);

private:
};

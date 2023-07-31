#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetPreviousPositionSystem {

public:
    // prevent constructor by default
    SetPreviousPositionSystem& operator=(SetPreviousPositionSystem const&) = delete;
    SetPreviousPositionSystem(SetPreviousPositionSystem const&)            = delete;
    SetPreviousPositionSystem()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@SetPreviousPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doSetPreviousPositionSystem\@SetPreviousPositionSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _doSetPreviousPositionSystem(class StrictEntityContext const&, struct StateVectorComponent&);
    // NOLINTEND
};

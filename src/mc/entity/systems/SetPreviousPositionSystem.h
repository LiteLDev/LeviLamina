#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetPreviousPositionSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPREVIOUSPOSITIONSYSTEM
public:
    SetPreviousPositionSystem& operator=(SetPreviousPositionSystem const&) = delete;
    SetPreviousPositionSystem(SetPreviousPositionSystem const&)            = delete;
    SetPreviousPositionSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SetPreviousPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doSetPreviousPositionSystem\@SetPreviousPositionSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _doSetPreviousPositionSystem(class StrictEntityContext const&, struct StateVectorComponent&);

private:
};

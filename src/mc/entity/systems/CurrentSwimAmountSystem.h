#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CurrentSwimAmountSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURRENTSWIMAMOUNTSYSTEM
public:
    CurrentSwimAmountSystem& operator=(CurrentSwimAmountSystem const&) = delete;
    CurrentSwimAmountSystem(CurrentSwimAmountSystem const&)            = delete;
    CurrentSwimAmountSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@CurrentSwimAmountSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doCurrentSwimAmountSystem\@CurrentSwimAmountSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUSwimAmountComponent\@\@AEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI static void
    _doCurrentSwimAmountSystem(class StrictEntityContext const&, struct SwimAmountComponent&, struct SynchedActorDataComponent const&);

private:
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CurrentSwimAmountSystem {

public:
    // prevent constructor by default
    CurrentSwimAmountSystem& operator=(CurrentSwimAmountSystem const&) = delete;
    CurrentSwimAmountSystem(CurrentSwimAmountSystem const&)            = delete;
    CurrentSwimAmountSystem()                                          = delete;

public:
    /**
     * @symbol ?createSystem\@CurrentSwimAmountSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doCurrentSwimAmountSystem\@CurrentSwimAmountSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUSwimAmountComponent\@\@AEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI static void
    _doCurrentSwimAmountSystem(class StrictEntityContext const&, struct SwimAmountComponent&, struct SynchedActorDataComponent const&); // NOLINT

private:
};

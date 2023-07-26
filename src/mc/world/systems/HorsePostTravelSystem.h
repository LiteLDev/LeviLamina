#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

class HorsePostTravelSystem {

public:
    // prevent constructor by default
    HorsePostTravelSystem& operator=(HorsePostTravelSystem const&) = delete;
    HorsePostTravelSystem(HorsePostTravelSystem const&)            = delete;
    HorsePostTravelSystem()                                        = delete;

public:
    /**
     * @symbol ?createSystem\@HorsePostTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doHorsePostTravelSystem\@HorsePostTravelSystem\@\@CAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UWasOnGroundPreTravelFlag\@\@\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void
    _doHorsePostTravelSystem(class StrictEntityContext const&, class Optional<class FlagComponent<struct WasOnGroundPreTravelFlag> const>, class ActorOwnerComponent&); // NOLINT

private:
};

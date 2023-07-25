#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

class HorsePostTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEPOSTTRAVELSYSTEM
public:
    HorsePostTravelSystem& operator=(HorsePostTravelSystem const&) = delete;
    HorsePostTravelSystem(HorsePostTravelSystem const&)            = delete;
    HorsePostTravelSystem()                                        = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@HorsePostTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doHorsePostTravelSystem\@HorsePostTravelSystem\@\@CAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UWasOnGroundPreTravelFlag\@\@\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void
    _doHorsePostTravelSystem(class StrictEntityContext const&, class Optional<class FlagComponent<struct WasOnGroundPreTravelFlag> const>, class ActorOwnerComponent&);

private:
};

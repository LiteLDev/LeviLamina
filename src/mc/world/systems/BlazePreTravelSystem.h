#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlazePreTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLAZEPRETRAVELSYSTEM
public:
    BlazePreTravelSystem& operator=(BlazePreTravelSystem const&) = delete;
    BlazePreTravelSystem(BlazePreTravelSystem const&)            = delete;
    BlazePreTravelSystem()                                       = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@BlazePreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doBlazePreTravelSystem\@BlazePreTravelSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doBlazePreTravelSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};

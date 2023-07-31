#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlazePreTravelSystem {

public:
    // prevent constructor by default
    BlazePreTravelSystem& operator=(BlazePreTravelSystem const&) = delete;
    BlazePreTravelSystem(BlazePreTravelSystem const&)            = delete;
    BlazePreTravelSystem()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@BlazePreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doBlazePreTravelSystem\@BlazePreTravelSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doBlazePreTravelSystem(class StrictEntityContext const&, class ActorOwnerComponent&);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FrostWalkSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FROSTWALKSYSTEM
public:
    FrostWalkSystem& operator=(FrostWalkSystem const&) = delete;
    FrostWalkSystem(FrostWalkSystem const&)            = delete;
    FrostWalkSystem()                                  = delete;
#endif

public:
    /**
     * @symbol ?_tryFrostWalk\@FrostWalkSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tryFrostWalk(class StrictEntityContext&, class ActorOwnerComponent&);
    /**
     * @symbol ?createSystem\@FrostWalkSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FrostWalkSystem {

public:
    // prevent constructor by default
    FrostWalkSystem& operator=(FrostWalkSystem const&) = delete;
    FrostWalkSystem(FrostWalkSystem const&)            = delete;
    FrostWalkSystem()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryFrostWalk\@FrostWalkSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tryFrostWalk(class StrictEntityContext&, class ActorOwnerComponent&);
    /**
     * @symbol ?createSystem\@FrostWalkSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};

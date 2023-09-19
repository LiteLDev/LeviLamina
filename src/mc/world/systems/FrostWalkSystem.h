#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FrostWalkSystem {
public:
    // prevent constructor by default
    FrostWalkSystem& operator=(FrostWalkSystem const&);
    FrostWalkSystem(FrostWalkSystem const&);
    FrostWalkSystem();

public:
    // NOLINTBEGIN
    // symbol: ?_tryFrostWalk@FrostWalkSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _tryFrostWalk(class StrictEntityContext&, class ActorOwnerComponent&);

    // symbol: ?createSystem@FrostWalkSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};

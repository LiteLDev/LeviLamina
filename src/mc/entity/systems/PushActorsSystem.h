#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PushActorsSystem {
public:
    // prevent constructor by default
    PushActorsSystem& operator=(PushActorsSystem const&);
    PushActorsSystem(PushActorsSystem const&);
    PushActorsSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PushActorsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol: ?pushActors@PushActorsSystem@@SAXAEAVActorOwnerComponent@@@Z
    MCAPI static void pushActors(class ActorOwnerComponent&);

    // NOLINTEND
};

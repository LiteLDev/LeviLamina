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
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void pushActors(class ActorOwnerComponent&);

    // NOLINTEND
};

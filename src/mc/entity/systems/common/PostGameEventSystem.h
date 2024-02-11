#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PostGameEventSystem {
public:
    // prevent constructor by default
    PostGameEventSystem& operator=(PostGameEventSystem const&);
    PostGameEventSystem(PostGameEventSystem const&);
    PostGameEventSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PostGameEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handlePostGameEventRequest@PostGameEventSystem@@CAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@AEBUStateVectorComponent@@AEBUPostGameEventRequestComponent@@@Z
    MCAPI static void
    _handlePostGameEventRequest(class StrictEntityContext&, class ActorOwnerComponent&, struct StateVectorComponent const&, struct PostGameEventRequestComponent const&);

    // NOLINTEND
};

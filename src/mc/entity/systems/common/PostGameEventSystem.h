#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

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

    // symbol:
    // ?_tick@PostGameEventSystem@@CAXV?$ViewT@VStrictEntityContext@@VActorOwnerComponent@@$$CBUStateVectorComponent@@$$CBUPostGameEventRequestComponent@@@@@Z
    MCAPI static void _tick(class ViewT<
                            class StrictEntityContext,
                            class ActorOwnerComponent,
                            struct StateVectorComponent const,
                            struct PostGameEventRequestComponent const>);

    // NOLINTEND
};

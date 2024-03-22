#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ActorUpdatePostTickPositionDeltaSystem {
public:
    // prevent constructor by default
    ActorUpdatePostTickPositionDeltaSystem& operator=(ActorUpdatePostTickPositionDeltaSystem const&);
    ActorUpdatePostTickPositionDeltaSystem(ActorUpdatePostTickPositionDeltaSystem const&);
    ActorUpdatePostTickPositionDeltaSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?createActorUpdatePostTickPositionDeltaSystem@ActorUpdatePostTickPositionDeltaSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createActorUpdatePostTickPositionDeltaSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickActorUpdatePostTickPositionDeltaSystem@ActorUpdatePostTickPositionDeltaSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUStateVectorComponent@@UPostTickPositionDeltaComponent@@@@@Z
    MCAPI static void
    _tickActorUpdatePostTickPositionDeltaSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                                struct StateVectorComponent const,
                                                struct PostTickPositionDeltaComponent> view);

    // NOLINTEND
};

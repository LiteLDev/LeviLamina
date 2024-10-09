#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class ActorUpdatePostTickPositionDeltaSystem {
public:
    // prevent constructor by default
    ActorUpdatePostTickPositionDeltaSystem& operator=(ActorUpdatePostTickPositionDeltaSystem const&);
    ActorUpdatePostTickPositionDeltaSystem(ActorUpdatePostTickPositionDeltaSystem const&);
    ActorUpdatePostTickPositionDeltaSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createActorUpdatePostTickPositionDeltaSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _tickActorUpdatePostTickPositionDeltaSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                                struct StateVectorComponent const,
                                                struct PostTickPositionDeltaComponent> view);

    // NOLINTEND
};

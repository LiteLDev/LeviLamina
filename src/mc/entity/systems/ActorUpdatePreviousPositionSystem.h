#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class ActorUpdatePreviousPositionSystem {
public:
    // prevent constructor by default
    ActorUpdatePreviousPositionSystem& operator=(ActorUpdatePreviousPositionSystem const&);
    ActorUpdatePreviousPositionSystem(ActorUpdatePreviousPositionSystem const&);
    ActorUpdatePreviousPositionSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tickSystem(class ViewT<
                                 class StrictEntityContext,
                                 struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                 class ActorOwnerComponent> tickWithMovement);

    // NOLINTEND
};

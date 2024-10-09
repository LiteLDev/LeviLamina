#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class UpdateAISystem {
public:
    // prevent constructor by default
    UpdateAISystem& operator=(UpdateAISystem const&);
    UpdateAISystem(UpdateAISystem const&);
    UpdateAISystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _tick(class ViewT<
          class StrictEntityContext,
          struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct MobFlag>>,
          class ActorOwnerComponent> view);

    // NOLINTEND
};

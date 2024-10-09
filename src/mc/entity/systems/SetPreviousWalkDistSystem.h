#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class SetPreviousWalkDistSystem {
public:
    // prevent constructor by default
    SetPreviousWalkDistSystem& operator=(SetPreviousWalkDistSystem const&);
    SetPreviousWalkDistSystem(SetPreviousWalkDistSystem const&);
    SetPreviousWalkDistSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tickWalkDistPrevSystem(class ViewT<
                                              class StrictEntityContext,
                                              struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                              struct WalkDistComponent> view);

    // NOLINTEND
};

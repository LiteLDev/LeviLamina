#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class SetPreviousPositionSystem {
public:
    // prevent constructor by default
    SetPreviousPositionSystem& operator=(SetPreviousPositionSystem const&);
    SetPreviousPositionSystem(SetPreviousPositionSystem const&);
    SetPreviousPositionSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doSetPreviousPositionSystem(class StrictEntityContext const&, struct StateVectorComponent& stateVectorComponent);

    MCAPI static void _tickSetPreviousPositionSystem(class ViewT<
                                                     class StrictEntityContext,
                                                     struct Include<
                                                         class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                         class FlagComponent<struct NeedSetPreviousPosition>>,
                                                     struct StateVectorComponent> view);

    // NOLINTEND
};

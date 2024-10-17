#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class SheepPreAIStepSystem {
public:
    // prevent constructor by default
    SheepPreAIStepSystem& operator=(SheepPreAIStepSystem const&);
    SheepPreAIStepSystem(SheepPreAIStepSystem const&);
    SheepPreAIStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doSheepPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickSheepPreAIStepSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct SheepFlag>>,
                                                class ActorOwnerComponent> view);

    // NOLINTEND
};

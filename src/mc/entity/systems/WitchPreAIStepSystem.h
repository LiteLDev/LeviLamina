#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class WitchPreAIStepSystem {
public:
    // prevent constructor by default
    WitchPreAIStepSystem& operator=(WitchPreAIStepSystem const&);
    WitchPreAIStepSystem(WitchPreAIStepSystem const&);
    WitchPreAIStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doWitchPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickWitchPreAIStepSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct WitchFlag>>,
                                                class ActorOwnerComponent> view);

    // NOLINTEND
};

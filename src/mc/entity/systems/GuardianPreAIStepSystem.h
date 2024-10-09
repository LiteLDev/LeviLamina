#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class GuardianPreAIStepSystem {
public:
    // prevent constructor by default
    GuardianPreAIStepSystem& operator=(GuardianPreAIStepSystem const&);
    GuardianPreAIStepSystem(GuardianPreAIStepSystem const&);
    GuardianPreAIStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doGuardianPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickGuardianPreAIStepSystem(class ViewT<
                                                   class StrictEntityContext,
                                                   struct Include<
                                                       class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                       class FlagComponent<struct GuardianFlag>>,
                                                   class ActorOwnerComponent> view);

    // NOLINTEND
};

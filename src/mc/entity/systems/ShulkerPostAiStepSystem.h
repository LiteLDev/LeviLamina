#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShulkerPostAiStepSystem {
public:
    // prevent constructor by default
    ShulkerPostAiStepSystem& operator=(ShulkerPostAiStepSystem const&);
    ShulkerPostAiStepSystem(ShulkerPostAiStepSystem const&);
    ShulkerPostAiStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doShulkerPostAiStepSystem(
        class StrictEntityContext const&,
        struct ActorRotationComponent&   actorRotationComponent,
        struct MobBodyRotationComponent& mobBodyRotationComponent,
        struct StateVectorComponent&     stateVectorComponent
    );

    // NOLINTEND
};

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
    // symbol: ?createSystem@ShulkerPostAiStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doShulkerPostAiStepSystem@ShulkerPostAiStepSystem@@CAXAEBVStrictEntityContext@@AEAUActorRotationComponent@@AEAUMobBodyRotationComponent@@AEAUStateVectorComponent@@@Z
    MCAPI static void
    _doShulkerPostAiStepSystem(class StrictEntityContext const&, struct ActorRotationComponent&, struct MobBodyRotationComponent&, struct StateVectorComponent&);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobSetPreviousRotSystem {
public:
    // prevent constructor by default
    MobSetPreviousRotSystem& operator=(MobSetPreviousRotSystem const&);
    MobSetPreviousRotSystem(MobSetPreviousRotSystem const&);
    MobSetPreviousRotSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@MobSetPreviousRotSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_setPreviousRotation@MobSetPreviousRotSystem@@CAXAEAVStrictEntityContext@@AEAUActorHeadRotationComponent@@AEAUActorRotationComponent@@AEAUMobBodyRotationComponent@@@Z
    MCAPI static void
    _setPreviousRotation(class StrictEntityContext&, struct ActorHeadRotationComponent&, struct ActorRotationComponent&, struct MobBodyRotationComponent&);

    // NOLINTEND
};

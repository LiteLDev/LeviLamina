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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _setPreviousRotation(
        class StrictEntityContext&,
        struct ActorHeadRotationComponent& actorHeadRotation,
        struct ActorRotationComponent&     actorRotation,
        struct MobBodyRotationComponent&   mobBodyRotation
    );

    // NOLINTEND
};

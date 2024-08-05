#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class ImmobileSystem {
public:
    // prevent constructor by default
    ImmobileSystem& operator=(ImmobileSystem const&);
    ImmobileSystem(ImmobileSystem const&);
    ImmobileSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void doImmobileSystem(
        class StrictEntityContext const& context,
        struct LocalMoveVelocityComponent&,
        struct MobRotationComponent&,
        struct StateVectorComponent&,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND
};

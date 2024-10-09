#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

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
        class StrictEntityContext const&                                   context,
        struct LocalMoveVelocityComponent&                                 localMoveVelocityComponent,
        struct MobRotationComponent&                                       mobRotationComponent,
        struct StateVectorComponent&                                       stateVectorComponent,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND
};

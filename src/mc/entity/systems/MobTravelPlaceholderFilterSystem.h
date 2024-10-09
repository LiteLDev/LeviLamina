#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

class MobTravelPlaceholderFilterSystem {
public:
    // prevent constructor by default
    MobTravelPlaceholderFilterSystem& operator=(MobTravelPlaceholderFilterSystem const&);
    MobTravelPlaceholderFilterSystem(MobTravelPlaceholderFilterSystem const&);
    MobTravelPlaceholderFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(
        class StrictEntityContext const&                context,
        struct StateVectorComponent&                    stateVectorComponent,
        class EntityModifier<struct MobTravelComponent> mod,
        class IConstBlockSource const&                  region
    );

    // NOLINTEND
};

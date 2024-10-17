#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class MobTravelTeleportedFilterSystem {
public:
    // prevent constructor by default
    MobTravelTeleportedFilterSystem& operator=(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct HasTeleportedFlag>, struct MobTravelComponent>> view,
        class EntityModifier<struct MobTravelComponent>                                               mod
    );

    // NOLINTEND
};

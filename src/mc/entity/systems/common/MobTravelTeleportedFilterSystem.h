#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class MobTravelTeleportedFilterSystem {
public:
    // prevent constructor by default
    MobTravelTeleportedFilterSystem& operator=(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void
        tick(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HasTeleportedFlag>, struct MobTravelComponent>>, class EntityModifier<struct MobTravelComponent>);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

class MobTravelPlaceholderFilterSystem {
public:
    // prevent constructor by default
    MobTravelPlaceholderFilterSystem& operator=(MobTravelPlaceholderFilterSystem const&);
    MobTravelPlaceholderFilterSystem(MobTravelPlaceholderFilterSystem const&);
    MobTravelPlaceholderFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@MobTravelPlaceholderFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tick@MobTravelPlaceholderFilterSystem@@SAXAEBVStrictEntityContext@@AEAUStateVectorComponent@@V?$EntityModifier@UMobTravelComponent@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void tick(
        class StrictEntityContext const& context,
        struct StateVectorComponent&,
        class EntityModifier<struct MobTravelComponent> mod,
        class IConstBlockSource const&                  region
    );

    // NOLINTEND
};

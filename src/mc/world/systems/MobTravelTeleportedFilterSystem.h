#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class MobTravelTeleportedFilterSystem {
public:
    // prevent constructor by default
    MobTravelTeleportedFilterSystem& operator=(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@MobTravelTeleportedFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tick@MobTravelTeleportedFilterSystem@@SAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UHasTeleportedFlag@@@@UMobTravelComponent@@@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UMobTravelComponent@@@@@Z
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HasTeleportedFlag>, struct MobTravelComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobTravelComponent>);

    // NOLINTEND
};

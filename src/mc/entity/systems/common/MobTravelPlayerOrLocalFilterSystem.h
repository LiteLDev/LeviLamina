#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class MobTravelPlayerOrLocalFilterSystem {
public:
    // prevent constructor by default
    MobTravelPlayerOrLocalFilterSystem& operator=(MobTravelPlayerOrLocalFilterSystem const&);
    MobTravelPlayerOrLocalFilterSystem(MobTravelPlayerOrLocalFilterSystem const&);
    MobTravelPlayerOrLocalFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@MobTravelPlayerOrLocalFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tick@MobTravelPlayerOrLocalFilterSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UMobTravelComponent@@@@U?$Exclude@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@@V?$EntityModifier@UMobTravelComponent@@@@@Z
    MCAPI static void tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct MobTravelComponent>,
            struct Exclude<
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct ControlledByLocalInstanceFlag>>> view,
        class EntityModifier<struct MobTravelComponent>                     mod
    );

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class LavaTravelSystem {
public:
    // prevent constructor by default
    LavaTravelSystem& operator=(LavaTravelSystem const&);
    LavaTravelSystem(LavaTravelSystem const&);
    LavaTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createLavaTravelSystem@LavaTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLavaTravelSystem();

    // symbol:
    // ?tickLavaTravelSystem@LavaTravelSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULavaTravelFlag@@@@@@$$CBUMovementAttributesComponent@@UMobTravelComponent@@@@@Z
    MCAPI static void tickLavaTravelSystem(class ViewT<
                                           class StrictEntityContext,
                                           struct Include<
                                               class FlagComponent<struct ActorMovementTickNeededFlag>,
                                               class FlagComponent<struct LavaTravelFlag>>,
                                           struct MovementAttributesComponent const,
                                           struct MobTravelComponent>);

    // NOLINTEND
};

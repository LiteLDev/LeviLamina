#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SoulSpeedAttributeSystem {
public:
    // prevent constructor by default
    SoulSpeedAttributeSystem& operator=(SoulSpeedAttributeSystem const&);
    SoulSpeedAttributeSystem(SoulSpeedAttributeSystem const&);
    SoulSpeedAttributeSystem();

public:
    // NOLINTBEGIN
    // symbol: ?_tryProcessSoulSpeed@SoulSpeedAttributeSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _tryProcessSoulSpeed(class StrictEntityContext&, class ActorOwnerComponent&);

    // symbol: ?createSystem@SoulSpeedAttributeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tickSystem@SoulSpeedAttributeSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UMobFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void tickSystem(class ViewT<
                                 class StrictEntityContext,
                                 struct Include<
                                     class FlagComponent<struct ActorMovementTickNeededFlag>,
                                     class FlagComponent<struct MobFlag>>,
                                 class ActorOwnerComponent> view);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    // NOLINTEND
};

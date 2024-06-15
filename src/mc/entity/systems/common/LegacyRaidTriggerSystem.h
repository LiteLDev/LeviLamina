#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyRaidTriggerSystem {
public:
    // prevent constructor by default
    LegacyRaidTriggerSystem& operator=(LegacyRaidTriggerSystem const&);
    LegacyRaidTriggerSystem(LegacyRaidTriggerSystem const&);
    LegacyRaidTriggerSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@LegacyRaidTriggerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doRaidTriggerSystem@LegacyRaidTriggerSystem@@CAXAEBUDimensionTypeComponent@@AEBUStateVectorComponent@@AEAVActorOwnerComponent@@AEBUVillageManagerComponent@@@Z
    MCAPI static void
    _doRaidTriggerSystem(struct DimensionTypeComponent const&, struct StateVectorComponent const&, class ActorOwnerComponent&, struct VillageManagerComponent const&);

    // NOLINTEND
};

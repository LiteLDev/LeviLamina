#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RaidTriggerSystem {
public:
    // prevent constructor by default
    RaidTriggerSystem& operator=(RaidTriggerSystem const&);
    RaidTriggerSystem(RaidTriggerSystem const&);
    RaidTriggerSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@RaidTriggerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doRaidTriggerSystem@RaidTriggerSystem@@CAXAEBUDimensionTypeComponent@@AEBUGainedRaidOmenAtPositionComponent@@AEAVActorOwnerComponent@@AEBUVillageManagerComponent@@@Z
    MCAPI static void
    _doRaidTriggerSystem(struct DimensionTypeComponent const&, struct GainedRaidOmenAtPositionComponent const&, class ActorOwnerComponent&, struct VillageManagerComponent const&);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/components/ActorFlagComponent.h"
#include "mc/world/components/FlagComponent.h"

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
    // ?_doRaidTriggerSystem@RaidTriggerSystem@@CAXAEBUDimensionTypeComponent@@AEBUStateVectorComponent@@AEAVActorOwnerComponent@@AEBUVillageManagerComponent@@@Z
    MCAPI static void
    _doRaidTriggerSystem(struct DimensionTypeComponent const&, struct StateVectorComponent const&, class ActorOwnerComponent&, struct VillageManagerComponent const&);

    // symbol:
    // ?_tickRaidTriggerSystem@RaidTriggerSystem@@CAXV?$OptionalGlobal@$$CBUVillageManagerComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@$$CBV?$FlagComponent@UActorTickedFlag@@@@$$CBV?$ActorFlagComponent@URaidTriggerFlag@@@@@@$$CBUDimensionTypeComponent@@$$CBUStateVectorComponent@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickRaidTriggerSystem(
        class OptionalGlobal<struct VillageManagerComponent const>,
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorTickedFlag> const,
                class ActorFlagComponent<struct RaidTriggerFlag> const>,
            struct DimensionTypeComponent const,
            struct StateVectorComponent const,
            class ActorOwnerComponent> view
    );

    // NOLINTEND
};

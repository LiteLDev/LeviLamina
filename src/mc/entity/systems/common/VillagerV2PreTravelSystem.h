#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class VillagerV2PreTravelSystem {
public:
    // prevent constructor by default
    VillagerV2PreTravelSystem& operator=(VillagerV2PreTravelSystem const&);
    VillagerV2PreTravelSystem(VillagerV2PreTravelSystem const&);
    VillagerV2PreTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@VillagerV2PreTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doVillagerV2PreTravel@VillagerV2PreTravelSystem@@CAXAEBVStrictEntityContext@@AEBUActorDataFlagComponent@@V?$EntityModifier@V?$FlagComponent@USkipMobTravelFlag@@@@@@@Z
    MCAPI static void
    _doVillagerV2PreTravel(class StrictEntityContext const&, struct ActorDataFlagComponent const&, class EntityModifier<class FlagComponent<struct SkipMobTravelFlag>>);

    // NOLINTEND
};

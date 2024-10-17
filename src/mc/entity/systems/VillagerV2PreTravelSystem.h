#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class VillagerV2PreTravelSystem {
public:
    // prevent constructor by default
    VillagerV2PreTravelSystem& operator=(VillagerV2PreTravelSystem const&);
    VillagerV2PreTravelSystem(VillagerV2PreTravelSystem const&);
    VillagerV2PreTravelSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doVillagerV2PreTravel(
        class StrictEntityContext const&                                    entity,
        struct ActorDataFlagComponent const&                                synchedActorDataComponent,
        class EntityModifier<class FlagComponent<struct SkipMobTravelFlag>> modifier
    );

    MCAPI static void _tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct VillagerV2Flag>>,
            struct ActorDataFlagComponent const>                            view,
        class EntityModifier<class FlagComponent<struct SkipMobTravelFlag>> modifier
    );

    // NOLINTEND
};

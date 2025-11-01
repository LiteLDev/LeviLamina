#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct SkipMobTravelComponent;
// clang-format on

struct VillagerV2PreTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doVillagerV2PreTravel(
        ::StrictEntityContext const&               entity,
        ::ActorDataFlagComponent const&            synchedActorDataComponent,
        ::EntityModifier<::SkipMobTravelComponent> modifier
    );
    // NOLINTEND
};

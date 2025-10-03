#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct SkipMobTravelComponent;
struct VillagerV2FlagComponent;
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

    MCNAPI static void _tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::VillagerV2FlagComponent>,
            ::ActorDataFlagComponent const>        view,
        ::EntityModifier<::SkipMobTravelComponent> modifier
    );
    // NOLINTEND
};

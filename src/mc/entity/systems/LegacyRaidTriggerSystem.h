#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorTickedComponent;
struct DimensionTypeComponent;
struct RaidTriggerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VillageManagerComponent;
// clang-format on

class LegacyRaidTriggerSystem {
public:
    // prevent constructor by default
    LegacyRaidTriggerSystem& operator=(LegacyRaidTriggerSystem const&);
    LegacyRaidTriggerSystem(LegacyRaidTriggerSystem const&);
    LegacyRaidTriggerSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doRaidTriggerSystem(
        ::DimensionTypeComponent const&  dimensionTypeComponent,
        ::StateVectorComponent const&    stateVectorComponent,
        ::ActorOwnerComponent&           actorOwnerComponent,
        ::VillageManagerComponent const& villageManagerComponent
    );

    MCAPI static void _tickRaidTriggerSystem(
        ::OptionalGlobal<::VillageManagerComponent const> villageManagerComponent,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorTickedComponent const, ::RaidTriggerComponent const>,
            ::DimensionTypeComponent const,
            ::StateVectorComponent const,
            ::ActorOwnerComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};

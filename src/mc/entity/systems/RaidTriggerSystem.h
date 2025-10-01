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
struct GainedRaidOmenAtPositionComponent;
struct RaidTriggerComponent;
struct TickingSystemWithInfo;
struct VillageManagerComponent;
// clang-format on

class RaidTriggerSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doRaidTriggerSystem(
        ::DimensionTypeComponent const&            dimensionTypeComponent,
        ::GainedRaidOmenAtPositionComponent const& gainedRaidOmen,
        ::ActorOwnerComponent&                     actorOwnerComponent,
        ::VillageManagerComponent const&           villageManagerComponent
    );

    MCNAPI static void _tickRaidTriggerSystem(
        ::OptionalGlobal<::VillageManagerComponent const> villageManagerComponent,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorTickedComponent const, ::RaidTriggerComponent const>,
            ::DimensionTypeComponent const,
            ::GainedRaidOmenAtPositionComponent const,
            ::ActorOwnerComponent> view
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};

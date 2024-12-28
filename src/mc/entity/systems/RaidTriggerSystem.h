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
    // prevent constructor by default
    RaidTriggerSystem& operator=(RaidTriggerSystem const&);
    RaidTriggerSystem(RaidTriggerSystem const&);
    RaidTriggerSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doRaidTriggerSystem(
        ::DimensionTypeComponent const&            dimensionTypeComponent,
        ::GainedRaidOmenAtPositionComponent const& gainedRaidOmen,
        ::ActorOwnerComponent&                     actorOwnerComponent,
        ::VillageManagerComponent const&           villageManagerComponent
    );

    MCAPI static void _tickRaidTriggerSystem(
        ::OptionalGlobal<::VillageManagerComponent const> villageManagerComponent,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorTickedComponent const, ::RaidTriggerComponent const>,
            ::DimensionTypeComponent const,
            ::GainedRaidOmenAtPositionComponent const,
            ::ActorOwnerComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};

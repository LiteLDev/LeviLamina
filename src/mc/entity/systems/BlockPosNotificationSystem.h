#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
struct ActorMovementTickNeededComponent;
struct BlockPosTrackerComponent;
struct OnGroundFlagComponent;
struct StandOnHoneyOrSlimeBlockFlagComponent;
struct StandOnOtherBlockFlagComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace BlockPosNotificationSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createCleanupSystem();

MCAPI ::TickingSystemWithInfo createFilterSystem();

MCAPI ::TickingSystemWithInfo createGenericStandOnSystem();

MCAPI ::TickingSystemWithInfo createHoneyOrSlimeStandOnSystem();

MCAPI void onStandOnSlowingBlock(::Vec3& entityPosDelta, bool isSneaking);

MCAPI void tickNotifierFilter(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::OnGroundFlagComponent>>,
    ::StrictEntityContext const&                                                                strictEntityContext,
    ::BlockPosTrackerComponent const&                                                           tracker,
    ::Optional<::VehicleInputIntentComponent const> const&                                      vehicleInputIntent,
    ::EntityModifier<::StandOnHoneyOrSlimeBlockFlagComponent, ::StandOnOtherBlockFlagComponent> mod
);
// NOLINTEND

} // namespace BlockPosNotificationSystem

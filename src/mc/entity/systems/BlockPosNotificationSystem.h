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
struct BlockPosTrackerComponent;
struct InterpolateMovementNeededComponent;
struct OnGroundFlagComponent;
struct StandOnOtherBlockFlagComponent;
struct StandOnSpeedAlteringBlockFlagComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace BlockPosNotificationSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createCleanupSystem();

MCAPI ::TickingSystemWithInfo createFilterSystem();

MCAPI ::TickingSystemWithInfo createGenericStandOnSystem();

MCAPI ::TickingSystemWithInfo createSpeedAlteringBlockStandOnSystem();

MCAPI void onStandOnSpeedAlteringBlock(::Vec3& entityPosDelta, bool isSneaking);

MCAPI void tickNotifierFilter(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent, ::OnGroundFlagComponent>> strictEntityContext,
    ::StrictEntityContext const&                                                                tracker,
    ::BlockPosTrackerComponent const&                                                           vehicleInputIntent,
    ::Optional<::VehicleInputIntentComponent const> const&                                      mod,
    ::EntityModifier<::StandOnSpeedAlteringBlockFlagComponent, ::StandOnOtherBlockFlagComponent>
);
// NOLINTEND

} // namespace BlockPosNotificationSystem

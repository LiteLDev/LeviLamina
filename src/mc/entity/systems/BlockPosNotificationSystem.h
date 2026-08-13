#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
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
MCAPI ::TickingSystemWithInfo createFilterSystem();

MCAPI ::TickingSystemWithInfo createGenericStandOnSystem();

MCAPI ::TickingSystemWithInfo createSpeedAlteringBlockStandOnSystem();

MCAPI void tickNotifierFilter(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent, ::OnGroundFlagComponent>>,
    ::StrictEntityContext const&                                                                 strictEntityContext,
    ::BlockPosTrackerComponent const&                                                            tracker,
    ::Optional<::VehicleInputIntentComponent const> const&                                       vehicleInputIntent,
    ::EntityModifier<::StandOnSpeedAlteringBlockFlagComponent, ::StandOnOtherBlockFlagComponent> mod
);
// NOLINTEND

} // namespace BlockPosNotificationSystem

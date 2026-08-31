#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct HorseFlagComponent;
struct HorseLandedOnGroundFlagComponent;
struct HorseWasOnGroundPreTravelComponent;
struct InterpolateMovementNeededComponent;
struct JumpPendingScaleComponent;
struct MobIsJumpingFlagComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace HorsePostTravelSystem {
// functions
// NOLINTBEGIN
MCAPI void _doJumpResetSystem(
    ::entt::type_list<
        ::Include<
            ::InterpolateMovementNeededComponent,
            ::HorseFlagComponent,
            ::OnGroundFlagComponent,
            ::VehicleComponent>,
        ::Exclude<::HorseWasOnGroundPreTravelComponent>>,
    ::StrictEntityContext const&                                                      context,
    ::JumpPendingScaleComponent&                                                      jumpPendingScale,
    ::EntityModifier<::HorseLandedOnGroundFlagComponent, ::MobIsJumpingFlagComponent> modifier
);

MCAPI ::TickingSystemWithInfo createJumpResetSystem();

MCAPI ::TickingSystemWithInfo createPostTravelSystem();
// NOLINTEND

} // namespace HorsePostTravelSystem

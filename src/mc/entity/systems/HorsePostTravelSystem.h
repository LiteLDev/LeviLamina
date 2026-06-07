#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct HorseFlagComponent;
struct HorseLandedOnGroundFlagComponent;
struct HorseStandCounterComponent;
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
        ::Exclude<::HorseWasOnGroundPreTravelComponent>> context,
    ::StrictEntityContext const&                         jumpPendingScale,
    ::JumpPendingScaleComponent&                         modifier,
    ::EntityModifier<::HorseLandedOnGroundFlagComponent, ::MobIsJumpingFlagComponent>
);

MCAPI void _doPostTravelSystem(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent, ::HorseFlagComponent>> context,
    ::StrictEntityContext const&                                                             horseStandCounter,
    ::HorseStandCounterComponent&                                                            actorDataFlag,
    ::ActorDataFlagComponent&                                                                dirtyFlags,
    ::ActorDataDirtyFlagsComponent&                                                          horseLandedOnGround,
    ::Optional<::HorseLandedOnGroundFlagComponent>                                           modifier,
    ::EntityModifier<::HorseLandedOnGroundFlagComponent>
);

MCAPI ::TickingSystemWithInfo createJumpResetSystem();

MCAPI ::TickingSystemWithInfo createPostTravelSystem();
// NOLINTEND

} // namespace HorsePostTravelSystem

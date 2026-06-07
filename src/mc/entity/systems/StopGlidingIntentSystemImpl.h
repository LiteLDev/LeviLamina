#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ArmorFlyEnabledFlagComponent;
struct CanStandOnSnowFlagComponent;
struct FallFlyTicksComponent;
struct HasLightweightFamilyFlagComponent;
struct MoveInputComponent;
struct OnGroundFlagComponent;
struct PassengerComponent;
struct PlayerActionComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct VanillaClientGameplayComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace StopGlidingIntentSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doStopGlidingIntent(
    ::StrictEntityContext const&                          hasArmorFlyEnabled,
    ::Optional<::ArmorFlyEnabledFlagComponent const>      isOnGround,
    ::Optional<::OnGroundFlagComponent const>             isPassenger,
    ::Optional<::PassengerComponent const>                wasInWater,
    ::Optional<::WasInWaterFlagComponent const>           canStandOnSnow,
    ::Optional<::CanStandOnSnowFlagComponent const>       hasLightweightFamily,
    ::Optional<::HasLightweightFamilyFlagComponent const> aabbShapeComponent,
    ::AABBShapeComponent const&                           fallFlyTicksComponent,
    ::FallFlyTicksComponent const&                        moveInputComponent,
    ::MoveInputComponent const&                           stateVectorComponent,
    ::StateVectorComponent const&                         synchedActorDataComponent,
    ::ActorDataFlagComponent const&                       vanillaClientGameplayComponent,
    ::VanillaClientGameplayComponent const&               playerActionComponent,
    ::PlayerActionComponent&                              playerInputRequestComponent,
    ::PlayerInputRequestComponent&                        constBlockSource,
    ::IConstBlockSource const&
);
// NOLINTEND

} // namespace StopGlidingIntentSystemImpl

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
    ::StrictEntityContext const&,
    ::Optional<::ArmorFlyEnabledFlagComponent const>      hasArmorFlyEnabled,
    ::Optional<::OnGroundFlagComponent const>             isOnGround,
    ::Optional<::PassengerComponent const>                isPassenger,
    ::Optional<::WasInWaterFlagComponent const>           wasInWater,
    ::Optional<::CanStandOnSnowFlagComponent const>       canStandOnSnow,
    ::Optional<::HasLightweightFamilyFlagComponent const> hasLightweightFamily,
    ::AABBShapeComponent const&                           aabbShapeComponent,
    ::FallFlyTicksComponent const&                        fallFlyTicksComponent,
    ::MoveInputComponent const&                           moveInputComponent,
    ::StateVectorComponent const&                         stateVectorComponent,
    ::ActorDataFlagComponent const&                       synchedActorDataComponent,
    ::VanillaClientGameplayComponent const&               vanillaClientGameplayComponent,
    ::PlayerActionComponent&                              playerActionComponent,
    ::PlayerInputRequestComponent&                        playerInputRequestComponent,
    ::IConstBlockSource const&                            constBlockSource
);
// NOLINTEND

} // namespace StopGlidingIntentSystemImpl

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/components/FlagComponent.h"

namespace StopGlidingIntentSystemImpl {
// NOLINTBEGIN
MCAPI void doStopGlidingIntent(
    class StrictEntityContext const&,
    class Optional<class FlagComponent<struct ArmorFlyEnabledFlag> const>      hasArmorFlyEnabled,
    class Optional<struct OnGroundFlagComponent const>                         isOnGround,
    class Optional<struct PassengerComponent const>                            isPassenger,
    class Optional<class FlagComponent<struct InWaterFlag> const>              wasInWater,
    class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>       canStandOnSnow,
    class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const> hasLightweightFamily,
    struct AABBShapeComponent const&                                           aabbShapeComponent,
    struct FallFlyTicksComponent const&                                        fallFlyTicksComponent,
    struct MoveInputComponent const&                                           moveInputComponent,
    struct StateVectorComponent const&                                         stateVectorComponent,
    struct ActorDataFlagComponent const&                                       synchedActorDataComponent,
    struct VanillaClientGameplayComponent const&                               vanillaClientGameplayComponent,
    struct PlayerActionComponent&                                              playerActionComponent,
    struct PlayerInputRequestComponent&                                        playerInputRequestComponent,
    class IConstBlockSource const&                                             constBlockSource
);
// NOLINTEND

}; // namespace StopGlidingIntentSystemImpl

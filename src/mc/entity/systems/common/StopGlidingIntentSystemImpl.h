#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace StopGlidingIntentSystemImpl {
// NOLINTBEGIN
MCAPI void
doStopGlidingIntent(class StrictEntityContext const&, class Optional<class FlagComponent<struct ArmorFlyEnabledFlag> const>, class Optional<struct OnGroundFlagComponent const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, struct AABBShapeComponent const&, struct FallFlyTicksComponent const&, struct MoveInputComponent const&, struct StateVectorComponent const&, struct ActorDataFlagComponent const&, struct VanillaClientGameplayComponent const&, struct PlayerActionComponent&, struct PlayerInputRequestComponent&, class IConstBlockSource const&);
// NOLINTEND

}; // namespace StopGlidingIntentSystemImpl

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace DefaultMoveSystems {
// NOLINTBEGIN
MCAPI void
doDefaultMoveSystems(class StrictEntityContext const&, class Optional<struct OnGroundFlagComponent const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class Optional<struct MoveInputComponent const>, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct ActorDataFlagComponent const&, struct FallDistanceComponent&, struct MobTravelComponent&, struct StateVectorComponent&, class IConstBlockSource const&);

MCAPI void
doFlyingPlayerMoveSystems(class StrictEntityContext const&, class Optional<struct OnGroundFlagComponent const>, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct MobTravelComponent&, struct StateVectorComponent&, class IConstBlockSource const&);

MCAPI void forSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI void
horizontalMovement(class Optional<struct OnGroundFlagComponent const>, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct MobTravelComponent&, struct StateVectorComponent&, class IConstBlockSource const&);

MCAPI void verticalMovement(class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class Optional<struct MoveInputComponent const>, struct AABBShapeComponent const&, struct ActorDataFlagComponent const&, struct FallDistanceComponent&, struct StateVectorComponent&, class IConstBlockSource const&);
// NOLINTEND

}; // namespace DefaultMoveSystems

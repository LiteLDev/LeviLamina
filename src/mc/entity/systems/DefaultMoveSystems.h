#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/components/FlagComponent.h"

namespace DefaultMoveSystems {
// NOLINTBEGIN
MCAPI void doDefaultMoveSystems(
    class StrictEntityContext const&,
    class Optional<struct OnGroundFlagComponent const>                         onGroundFlagComponent,
    class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>       canStandOnSnowFlagComponent,
    class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const> hasLightweightFamilyFlagComponent,
    class Optional<struct MoveInputComponent const>                            moveInputComponent,
    struct AABBShapeComponent const&                                           aabbShapeComponent,
    struct ActorRotationComponent const&                                       actorRotationComponent,
    struct ActorDataFlagComponent const&                                       synchedActorDataComponent,
    struct FallDistanceComponent&                                              fallDistanceComponent,
    struct MobTravelComponent&                                                 mobTravelComponent,
    struct StateVectorComponent&                                               stateVectorComponent,
    class IConstBlockSource const&                                             region
);

MCAPI void doFlyingPlayerMoveSystems(
    class StrictEntityContext const&,
    class Optional<struct OnGroundFlagComponent const> onGroundFlagComponent,
    struct AABBShapeComponent const&                   aabbShapeComponent,
    struct ActorRotationComponent const&               actorRotationComponent,
    struct MobTravelComponent&                         mobTravelComponent,
    struct StateVectorComponent&                       stateVectorComponent,
    class IConstBlockSource const&                     region
);

MCAPI void forSystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI void horizontalMovement(
    class Optional<struct OnGroundFlagComponent const> onGroundFlagComponent,
    struct AABBShapeComponent const&                   aabbShapeComponent,
    struct ActorRotationComponent const&               actorRotationComponent,
    struct MobTravelComponent&                         mobTravelComponent,
    struct StateVectorComponent&                       stateVectorComponent,
    class IConstBlockSource const&                     region
);

MCAPI void verticalMovement(
    class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>       canStandOnSnowFlagComponent,
    class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const> hasLightweightFamilyFlagComponent,
    class Optional<struct MoveInputComponent const>                            moveInputComponent,
    struct AABBShapeComponent const&                                           aabbShapeComponent,
    struct ActorDataFlagComponent const&                                       synchedActorDataComponent,
    struct FallDistanceComponent&                                              fallDistanceComponent,
    struct StateVectorComponent&                                               stateVectorComponent,
    class IConstBlockSource const&                                             region
);
// NOLINTEND

}; // namespace DefaultMoveSystems

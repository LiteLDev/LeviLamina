#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace MobMovementClimb {
// NOLINTBEGIN
MCAPI void applyAutoClimbing(
    class StrictEntityContext const&                                      entity,
    struct StateVectorComponent&                                          stateVector,
    class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>> climbModifier
);

MCAPI bool canAutoClimbNow(
    struct ActorDataFlagComponent const& synchedActorData,
    struct AABBShapeComponent const&     aabbShape,
    struct StateVectorComponent const&   stateVector,
    bool                                 canClimbInPowderSnow,
    class IConstBlockSource const&       region
);

MCAPI void forAutoClimbSystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI class Vec3
getAutoClimbBlockTestPos(struct AABBShapeComponent const& aabbShape, struct StateVectorComponent const& stateVector);

MCAPI class BlockLegacy const& getBlockAtFeet(
    struct AABBShapeComponent const&   aabbShape,
    struct StateVectorComponent const& stateVector,
    class IConstBlockSource const&     constBlockSource
);

MCAPI bool isAutoClimbableBlock(bool canClimbInPowderSnow, class BlockLegacy const& block);

MCAPI void tickAutoClimbingMob(
    class StrictEntityContext const&                                           entity,
    class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>       canStandOnSnow,
    class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const> hasLightweightFamily,
    struct ActorDataFlagComponent const&                                       synchedActorData,
    struct AABBShapeComponent const&                                           aabbShape,
    struct StateVectorComponent&                                               stateVector,
    class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>      climbModifier,
    class IConstBlockSource const&                                             region
);

MCAPI void tickAutoClimbingMobInLava(
    class StrictEntityContext const&                                           entity,
    class NavigationComponent const&                                           navigation,
    class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>       canStandOnSnow,
    class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const> hasLightweightFamily,
    struct ActorDataFlagComponent const&                                       synchedActorData,
    struct AABBShapeComponent const&                                           aabbShape,
    struct StateVectorComponent&                                               stateVector,
    class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>      climbModifier,
    class IConstBlockSource const&                                             region
);
// NOLINTEND

}; // namespace MobMovementClimb

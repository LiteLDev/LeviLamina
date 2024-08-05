#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace MobMovementClimb {
// NOLINTBEGIN
MCAPI void
applyAutoClimbing(class StrictEntityContext const&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>);

MCAPI bool
canAutoClimbNow(struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent const&, bool, class IConstBlockSource const&);

MCAPI void forAutoClimbSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI class Vec3 getAutoClimbBlockTestPos(struct AABBShapeComponent const&, struct StateVectorComponent const&);

MCAPI class BlockLegacy const&
getBlockAtFeet(struct AABBShapeComponent const&, struct StateVectorComponent const&, class IConstBlockSource const&);

MCAPI bool isAutoClimbableBlock(bool, class BlockLegacy const&);

MCAPI void tickAutoClimbingMob(class StrictEntityContext const&, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>, class IConstBlockSource const&);

MCAPI void tickAutoClimbingMobInLava(class StrictEntityContext const&, class NavigationComponent const&, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>, class IConstBlockSource const&);
// NOLINTEND

}; // namespace MobMovementClimb

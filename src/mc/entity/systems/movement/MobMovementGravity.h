#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"

namespace MobMovementGravity {
// NOLINTBEGIN
MCAPI void forLiquidGravitySystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI void forNormalGravitySystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI bool isCenterTopAndBottomNotInAir(class Vec3 const&, class IConstBlockSource const&, class Vec2 const&);

MCAPI bool
shouldApplyLiquidGravity(class NavigationComponent const*, class PhysicsComponent const*, struct ActorDataFlagComponent const&, class Vec3 const&, class IConstBlockSource const&, class Vec2 const&);

MCAPI void
tickAirGravity(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct MobEffectsComponent const&, struct StateVectorComponent&, struct FallDistanceComponent&);

MCAPI void
tickLavaGravity(class StrictEntityContext const&, class Optional<class NavigationComponent const>, class Optional<class PhysicsComponent const>, struct AABBShapeComponent const&, struct ActorDataFlagComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);

MCAPI void
tickMobWaterGravity(class StrictEntityContext const&, class Optional<class NavigationComponent const>, class Optional<class PhysicsComponent const>, struct AABBShapeComponent const&, struct ActorDataFlagComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);
// NOLINTEND

}; // namespace MobMovementGravity

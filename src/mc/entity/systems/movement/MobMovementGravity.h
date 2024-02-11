#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"

namespace MobMovementGravity {
// NOLINTBEGIN
// symbol: ?forLiquidGravitySystems@MobMovementGravity@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forLiquidGravitySystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol: ?forNormalGravitySystems@MobMovementGravity@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forNormalGravitySystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol: ?isCenterTopAndBottomNotInAir@MobMovementGravity@@YA_NAEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
MCAPI bool isCenterTopAndBottomNotInAir(class Vec3 const&, class IConstBlockSource const&, class Vec2 const&);

// symbol:
// ?shouldApplyLiquidGravity@MobMovementGravity@@YA_NPEBVNavigationComponent@@PEBVPhysicsComponent@@AEBUActorDataFlagComponent@@AEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
MCAPI bool
shouldApplyLiquidGravity(class NavigationComponent const*, class PhysicsComponent const*, struct ActorDataFlagComponent const&, class Vec3 const&, class IConstBlockSource const&, class Vec2 const&);

// symbol:
// ?tickAirGravity@MobMovementGravity@@YAXAEBVStrictEntityContext@@AEBUActorDataFlagComponent@@AEBUMobEffectsComponent@@AEAUStateVectorComponent@@AEAUFallDistanceComponent@@@Z
MCAPI void
tickAirGravity(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct MobEffectsComponent const&, struct StateVectorComponent&, struct FallDistanceComponent&);

// symbol:
// ?tickLavaGravity@MobMovementGravity@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBVNavigationComponent@@@@V?$Optional@$$CBVPhysicsComponent@@@@AEBUAABBShapeComponent@@AEBUActorDataFlagComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void
tickLavaGravity(class StrictEntityContext const&, class Optional<class NavigationComponent const>, class Optional<class PhysicsComponent const>, struct AABBShapeComponent const&, struct ActorDataFlagComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);

// symbol:
// ?tickMobWaterGravity@MobMovementGravity@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBVNavigationComponent@@@@V?$Optional@$$CBVPhysicsComponent@@@@AEBUAABBShapeComponent@@AEBUActorDataFlagComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void
tickMobWaterGravity(class StrictEntityContext const&, class Optional<class NavigationComponent const>, class Optional<class PhysicsComponent const>, struct AABBShapeComponent const&, struct ActorDataFlagComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);
// NOLINTEND

}; // namespace MobMovementGravity

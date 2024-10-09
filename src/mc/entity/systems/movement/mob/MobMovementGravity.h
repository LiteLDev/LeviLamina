#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

namespace MobMovementGravity {
// NOLINTBEGIN
MCAPI void forLiquidGravitySystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI void forNormalGravitySystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI bool
isCenterTopAndBottomNotInAir(class Vec3 const& pos, class IConstBlockSource const& region, class Vec2 const& aabbDim);

MCAPI bool shouldApplyLiquidGravity(
    class NavigationComponent const*     navigationComponent,
    class PhysicsComponent const*        physicsComponent,
    struct ActorDataFlagComponent const& actorData,
    class Vec3 const&                    pos,
    class IConstBlockSource const&       region,
    class Vec2 const&                    aabbDim
);

MCAPI void tickAirGravity(
    class StrictEntityContext const&,
    struct ActorDataFlagComponent const& synchedActorData,
    struct MobEffectsComponent const&    mobEffects,
    struct StateVectorComponent&         stateVector,
    struct FallDistanceComponent&        fallDistance
);

MCAPI void tickLavaGravity(
    class StrictEntityContext const&,
    class Optional<class NavigationComponent const> navigation,
    class Optional<class PhysicsComponent const>    physics,
    struct AABBShapeComponent const&                aabbShape,
    struct ActorDataFlagComponent const&            synchedActorData,
    struct StateVectorComponent&                    stateVector,
    class IConstBlockSource const&                  region
);

MCAPI void tickMobWaterGravity(
    class StrictEntityContext const&,
    class Optional<class NavigationComponent const> navigation,
    class Optional<class PhysicsComponent const>    physics,
    struct AABBShapeComponent const&                aabbShape,
    struct ActorDataFlagComponent const&            synchedActorData,
    struct StateVectorComponent&                    stateVector,
    class IConstBlockSource const&                  region
);
// NOLINTEND

}; // namespace MobMovementGravity

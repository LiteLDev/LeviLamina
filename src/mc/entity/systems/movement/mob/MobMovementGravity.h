#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class NavigationComponent;
class StrictEntityContext;
class Vec2;
class Vec3;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct FallDistanceComponent;
struct MobEffectsComponent;
struct PhysicsComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementGravity {
// functions
// NOLINTBEGIN
MCAPI void forLiquidGravitySystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void forNormalGravitySystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI bool isCenterTopAndBottomNotInAir(::Vec3 const& pos, ::IConstBlockSource const& region, ::Vec2 const& aabbDim);

MCAPI void tickAirGravity(
    ::StrictEntityContext const&,
    ::ActorDataFlagComponent const& synchedActorData,
    ::MobEffectsComponent const&    mobEffects,
    ::StateVectorComponent&         stateVector,
    ::FallDistanceComponent&        fallDistance
);

MCAPI void tickLavaGravity(
    ::StrictEntityContext const&,
    ::Optional<::NavigationComponent const> navigation,
    ::Optional<::PhysicsComponent const>    physics,
    ::AABBShapeComponent const&             aabbShape,
    ::ActorDataFlagComponent const&         synchedActorData,
    ::StateVectorComponent&                 stateVector,
    ::IConstBlockSource const&              region
);

MCAPI void tickMobWaterGravity(
    ::StrictEntityContext const&,
    ::Optional<::NavigationComponent const> navigation,
    ::Optional<::PhysicsComponent const>    physics,
    ::AABBShapeComponent const&             aabbShape,
    ::ActorDataFlagComponent const&         synchedActorData,
    ::StateVectorComponent&                 stateVector,
    ::IConstBlockSource const&              region
);
// NOLINTEND

} // namespace MobMovementGravity

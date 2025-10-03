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
MCNAPI void forLiquidGravitySystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI void forNormalGravitySystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI bool isCenterTopAndBottomNotInAir(::Vec3 const& pos, ::IConstBlockSource const& region, ::Vec2 const& aabbDim);

MCNAPI void tickAirGravity(
    ::StrictEntityContext const&,
    ::ActorDataFlagComponent const& synchedActorData,
    ::MobEffectsComponent const&    mobEffects,
    ::StateVectorComponent&         stateVector,
    ::FallDistanceComponent&        fallDistance
);

MCNAPI void tickLavaGravity(
    ::StrictEntityContext const&,
    ::Optional<::NavigationComponent const> navigation,
    ::Optional<::PhysicsComponent const>    physics,
    ::AABBShapeComponent const&             aabbShape,
    ::ActorDataFlagComponent const&         synchedActorData,
    ::StateVectorComponent&                 stateVector,
    ::IConstBlockSource const&              region
);

MCNAPI void tickMobWaterGravity(
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

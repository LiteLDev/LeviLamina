#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class NavigationComponent;
class StrictEntityContext;
class Vec2;
class Vec3;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ApplyGravityComponent;
struct BounceGravityCorrectionComponent;
struct FallDistanceComponent;
struct LevitateTravelFlagComponent;
struct MobEffectsComponent;
struct PhysicsComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WaterTravelFlagComponent;
// clang-format on

namespace MobMovementGravity {
// functions
// NOLINTBEGIN
MCAPI void forSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI bool isCenterTopAndBottomNotInAir(::Vec3 const& pos, ::IConstBlockSource const& region, ::Vec2 const& aabbDim);

MCAPI bool shouldApplyLiquidGravity(
    ::NavigationComponent const*    navigationComponent,
    ::PhysicsComponent const*       physicsComponent,
    ::ActorDataFlagComponent const& actorData,
    ::Vec3 const&                   pos,
    ::IConstBlockSource const&      region,
    ::Vec2 const&                   aabbDim
);

MCAPI void tickApplyGravityWithBounceCorrection(
    ::StrictEntityContext const&              context,
    ::ApplyGravityComponent const&            applyGravity,
    ::BounceGravityCorrectionComponent const& bounceGravityCorrection,
    ::StateVectorComponent&                   stateVector,
    ::FallDistanceComponent&                  fallDistance,
    ::EntityModifier<::ApplyGravityComponent> modifier
);

MCAPI void tickDefaultGravity(
    ::StrictEntityContext const&               context,
    ::ActorDataFlagComponent const&            synchedActorData,
    ::MobEffectsComponent const&               mobEffects,
    ::StateVectorComponent const&              stateVector,
    ::EntityModifier<::ApplyGravityComponent>& modifier
);

MCAPI void tickLavaGravity(
    ::StrictEntityContext const&              context,
    ::Optional<::NavigationComponent const>   navigation,
    ::Optional<::PhysicsComponent const>      physics,
    ::AABBShapeComponent const&               aabbShape,
    ::ActorDataFlagComponent const&           synchedActorData,
    ::StateVectorComponent const&             stateVector,
    ::EntityModifier<::ApplyGravityComponent> modifier,
    ::IConstBlockSource const&                region
);

MCAPI void tickMobWaterGravity(
    ::StrictEntityContext const&              context,
    ::Optional<::NavigationComponent const>   navigation,
    ::Optional<::PhysicsComponent const>      physics,
    ::AABBShapeComponent const&               aabbShape,
    ::ActorDataFlagComponent const&           synchedActorData,
    ::StateVectorComponent const&             stateVector,
    ::EntityModifier<::ApplyGravityComponent> modifier,
    ::IConstBlockSource const&                region
);

MCAPI void tickPlayerWaterGravity(
    ::entt::type_list<
        ::Include<::WaterTravelFlagComponent, ::PlayerComponent>,
        ::Exclude<::LevitateTravelFlagComponent>> context,
    ::StrictEntityContext const&                  synchedActorData,
    ::ActorDataFlagComponent const&               modifier,
    ::EntityModifier<::ApplyGravityComponent>
);
// NOLINTEND

} // namespace MobMovementGravity

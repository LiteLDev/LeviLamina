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
struct AirTravelFlagComponent;
struct ApplyGravityComponent;
struct AutoClimbTravelFlagComponent;
struct GroundTravelFlagComponent;
struct LavaTravelFlagComponent;
struct LevitateTravelFlagComponent;
struct MobEffectsComponent;
struct PhysicsComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementGravity {
// functions
// NOLINTBEGIN
MCNAPI void forSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI bool isCenterTopAndBottomNotInAir(::Vec3 const& pos, ::IConstBlockSource const& region, ::Vec2 const& aabbDim);

MCNAPI void tickAirGravity(
    ::entt::type_list<
        ::Include<::AirTravelFlagComponent>,
        ::Exclude<::AutoClimbTravelFlagComponent, ::LevitateTravelFlagComponent>>,
    ::StrictEntityContext const&              context,
    ::ActorDataFlagComponent const&           synchedActorData,
    ::MobEffectsComponent const&              mobEffects,
    ::StateVectorComponent const&             stateVector,
    ::EntityModifier<::ApplyGravityComponent> modifier
);

MCNAPI_S void tickDefaultGravity(
    ::StrictEntityContext const&               context,
    ::ActorDataFlagComponent const&            synchedActorData,
    ::MobEffectsComponent const&               mobEffects,
    ::StateVectorComponent const&              stateVector,
    ::EntityModifier<::ApplyGravityComponent>& modifier
);

MCNAPI void tickGroundGravity(
    ::entt::type_list<
        ::Include<::GroundTravelFlagComponent>,
        ::Exclude<::AutoClimbTravelFlagComponent, ::LevitateTravelFlagComponent>>,
    ::StrictEntityContext const&              context,
    ::ActorDataFlagComponent const&           synchedActorData,
    ::MobEffectsComponent const&              mobEffects,
    ::StateVectorComponent const&             stateVector,
    ::EntityModifier<::ApplyGravityComponent> modifier
);

MCNAPI void tickLavaGravity(
    ::StrictEntityContext const&              context,
    ::Optional<::NavigationComponent const>   navigation,
    ::Optional<::PhysicsComponent const>      physics,
    ::AABBShapeComponent const&               aabbShape,
    ::ActorDataFlagComponent const&           synchedActorData,
    ::StateVectorComponent const&             stateVector,
    ::EntityModifier<::ApplyGravityComponent> modifier,
    ::IConstBlockSource const&                region
);

MCNAPI_C void tickLavaWalkGravity(
    ::entt::type_list<
        ::Include<::LavaTravelFlagComponent>,
        ::Exclude<::AutoClimbTravelFlagComponent, ::LevitateTravelFlagComponent>>,
    ::StrictEntityContext const&              context,
    ::NavigationComponent const&              navigation,
    ::ActorDataFlagComponent const&           synchedActorData,
    ::MobEffectsComponent const&              mobEffects,
    ::StateVectorComponent const&             stateVector,
    ::EntityModifier<::ApplyGravityComponent> modifier
);

MCNAPI void tickMobWaterGravity(
    ::StrictEntityContext const&              context,
    ::Optional<::NavigationComponent const>   navigation,
    ::Optional<::PhysicsComponent const>      physics,
    ::AABBShapeComponent const&               aabbShape,
    ::ActorDataFlagComponent const&           synchedActorData,
    ::StateVectorComponent const&             stateVector,
    ::EntityModifier<::ApplyGravityComponent> modifier,
    ::IConstBlockSource const&                region
);
// NOLINTEND

} // namespace MobMovementGravity

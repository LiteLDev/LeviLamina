#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class NavigationComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ApplyGravityComponent;
struct MobEffectsComponent;
struct PhysicsComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementGravity {
// functions
// NOLINTBEGIN
MCNAPI void forSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI void tickDefaultGravity(
    ::StrictEntityContext const&                     context,
    ::ActorDataFlagComponent const&                  synchedActorData,
    ::MobEffectsComponent const&                     mobEffects,
    ::StateVectorComponent const&                    stateVector,
    ::EntityModifier<::ApplyGravityComponent> const& modifier
);

MCNAPI void tickLavaGravity(
    ::StrictEntityContext const&                     context,
    ::Optional<::NavigationComponent const>          navigation,
    ::Optional<::PhysicsComponent const>             physics,
    ::AABBShapeComponent const&                      aabbShape,
    ::ActorDataFlagComponent const&                  synchedActorData,
    ::StateVectorComponent const&                    stateVector,
    ::EntityModifier<::ApplyGravityComponent> const& modifier,
    ::IConstBlockSource const&                       region
);

MCNAPI void tickMobWaterGravity(
    ::StrictEntityContext const&                     context,
    ::Optional<::NavigationComponent const>          navigation,
    ::Optional<::PhysicsComponent const>             physics,
    ::AABBShapeComponent const&                      aabbShape,
    ::ActorDataFlagComponent const&                  synchedActorData,
    ::StateVectorComponent const&                    stateVector,
    ::EntityModifier<::ApplyGravityComponent> const& modifier,
    ::IConstBlockSource const&                       region
);
// NOLINTEND

} // namespace MobMovementGravity

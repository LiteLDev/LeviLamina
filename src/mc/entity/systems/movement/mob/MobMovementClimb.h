#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class Block;
class IConstBlockSource;
class NavigationComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct AutoClimbTravelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct HasLightweightFamilyFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementClimb {
// functions
// NOLINTBEGIN
MCAPI void applyAutoClimbing(
    ::StrictEntityContext const&                     entity,
    ::StateVectorComponent&                          stateVector,
    ::EntityModifier<::AutoClimbTravelFlagComponent> climbModifier
);

MCAPI bool canAutoClimbNow(
    ::ActorDataFlagComponent const& synchedActorData,
    ::AABBShapeComponent const&     aabbShape,
    ::StateVectorComponent const&   stateVector,
    bool                            canClimbInPowderSnow,
    ::IConstBlockSource const&      region
);

MCAPI void forAutoClimbSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI ::Block const& getBlockAtFeet(
    ::AABBShapeComponent const&   aabbShape,
    ::StateVectorComponent const& stateVector,
    ::IConstBlockSource const&    constBlockSource
);

MCAPI void tickAutoClimbingMob(
    ::StrictEntityContext const&                          entity,
    ::Optional<::CanStandOnSnowFlagComponent const>       canStandOnSnow,
    ::Optional<::HasLightweightFamilyFlagComponent const> hasLightweightFamily,
    ::ActorDataFlagComponent const&                       synchedActorData,
    ::AABBShapeComponent const&                           aabbShape,
    ::StateVectorComponent&                               stateVector,
    ::EntityModifier<::AutoClimbTravelFlagComponent>      climbModifier,
    ::IConstBlockSource const&                            region
);

MCAPI void tickAutoClimbingMobInLava(
    ::StrictEntityContext const&                          entity,
    ::NavigationComponent const&                          navigation,
    ::Optional<::CanStandOnSnowFlagComponent const>       canStandOnSnow,
    ::Optional<::HasLightweightFamilyFlagComponent const> hasLightweightFamily,
    ::ActorDataFlagComponent const&                       synchedActorData,
    ::AABBShapeComponent const&                           aabbShape,
    ::StateVectorComponent&                               stateVector,
    ::EntityModifier<::AutoClimbTravelFlagComponent>      climbModifier,
    ::IConstBlockSource const&                            region
);
// NOLINTEND

} // namespace MobMovementClimb

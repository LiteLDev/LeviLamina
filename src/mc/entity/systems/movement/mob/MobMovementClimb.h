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
struct AutoClimbTravelFlagComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementClimb {
// functions
// NOLINTBEGIN
MCAPI void forAutoClimbSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void tickAutoClimbingMob(
    ::StrictEntityContext const&                                   entity,
    ::Optional<::CanStandOnPowderSnowComponent const>              canStandOnPowderSnow,
    ::Optional<::CanStandOnPowderSnowFromEquipmentComponent const> canStandOnPowderSnowFromEquipment,
    ::ActorDataFlagComponent const&                                synchedActorData,
    ::AABBShapeComponent const&                                    aabbShape,
    ::StateVectorComponent&                                        stateVector,
    ::EntityModifier<::AutoClimbTravelFlagComponent>               climbModifier,
    ::IConstBlockSource const&                                     region
);

MCAPI void tickAutoClimbingMobInLava(
    ::StrictEntityContext const&                                   entity,
    ::NavigationComponent const&                                   navigation,
    ::Optional<::CanStandOnPowderSnowComponent const>              canStandOnPowderSnow,
    ::Optional<::CanStandOnPowderSnowFromEquipmentComponent const> canStandOnPowderSnowFromEquipment,
    ::ActorDataFlagComponent const&                                synchedActorData,
    ::AABBShapeComponent const&                                    aabbShape,
    ::StateVectorComponent&                                        stateVector,
    ::EntityModifier<::AutoClimbTravelFlagComponent>               climbModifier,
    ::IConstBlockSource const&                                     region
);
// NOLINTEND

} // namespace MobMovementClimb

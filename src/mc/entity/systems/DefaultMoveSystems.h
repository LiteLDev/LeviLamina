#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct FallDistanceComponent;
struct MobTravelComponent;
struct MoveInputComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace DefaultMoveSystems {
// functions
// NOLINTBEGIN
MCAPI void doDefaultMoveSystems(
    ::StrictEntityContext const&,
    ::Optional<::OnGroundFlagComponent const>                      onGroundFlagComponent,
    ::Optional<::CanStandOnPowderSnowComponent const>              canStandOnPowderSnowComponent,
    ::Optional<::CanStandOnPowderSnowFromEquipmentComponent const> canStandOnPowderSnowFromEquipmentComponent,
    ::Optional<::MoveInputComponent const>                         moveInputComponent,
    ::AABBShapeComponent const&                                    aabbShapeComponent,
    ::ActorRotationComponent const&                                actorRotationComponent,
    ::ActorDataFlagComponent const&                                synchedActorDataComponent,
    ::FallDistanceComponent&                                       fallDistanceComponent,
    ::MobTravelComponent&                                          mobTravelComponent,
    ::StateVectorComponent&                                        stateVectorComponent,
    ::IConstBlockSource const&                                     region
);

MCAPI void doFlyingPlayerMoveSystems(
    ::StrictEntityContext const&,
    ::Optional<::OnGroundFlagComponent const> onGroundFlagComponent,
    ::AABBShapeComponent const&               aabbShapeComponent,
    ::ActorRotationComponent const&           actorRotationComponent,
    ::MobTravelComponent&                     mobTravelComponent,
    ::StateVectorComponent&                   stateVectorComponent,
    ::IConstBlockSource const&                region
);

MCAPI void forSystems(::brstd::function_ref<void(::TickingSystemWithInfo&&)> func);

MCAPI void horizontalMovement(
    ::Optional<::OnGroundFlagComponent const> onGroundFlagComponent,
    ::AABBShapeComponent const&               aabbShapeComponent,
    ::ActorRotationComponent const&           actorRotationComponent,
    ::MobTravelComponent&                     mobTravelComponent,
    ::StateVectorComponent&                   stateVectorComponent,
    ::IConstBlockSource const&                region
);
// NOLINTEND

} // namespace DefaultMoveSystems

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
struct CanStandOnSnowFlagComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
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
    ::StrictEntityContext const&                          onGroundFlagComponent,
    ::Optional<::OnGroundFlagComponent const>             canStandOnSnowFlagComponent,
    ::Optional<::CanStandOnSnowFlagComponent const>       hasLightweightFamilyFlagComponent,
    ::Optional<::HasLightweightFamilyFlagComponent const> moveInputComponent,
    ::Optional<::MoveInputComponent const>                aabbShapeComponent,
    ::AABBShapeComponent const&                           actorRotationComponent,
    ::ActorRotationComponent const&                       synchedActorDataComponent,
    ::ActorDataFlagComponent const&                       fallDistanceComponent,
    ::FallDistanceComponent&                              mobTravelComponent,
    ::MobTravelComponent&                                 stateVectorComponent,
    ::StateVectorComponent&                               region,
    ::IConstBlockSource const&
);

MCAPI void doFlyingPlayerMoveSystems(
    ::StrictEntityContext const&              onGroundFlagComponent,
    ::Optional<::OnGroundFlagComponent const> aabbShapeComponent,
    ::AABBShapeComponent const&               actorRotationComponent,
    ::ActorRotationComponent const&           mobTravelComponent,
    ::MobTravelComponent&                     stateVectorComponent,
    ::StateVectorComponent&                   region,
    ::IConstBlockSource const&
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

MCAPI void verticalMovement(
    ::Optional<::CanStandOnSnowFlagComponent const>       canStandOnSnowFlagComponent,
    ::Optional<::HasLightweightFamilyFlagComponent const> hasLightweightFamilyFlagComponent,
    ::Optional<::MoveInputComponent const>                moveInputComponent,
    ::AABBShapeComponent const&                           aabbShapeComponent,
    ::ActorDataFlagComponent const&                       synchedActorDataComponent,
    ::FallDistanceComponent&                              fallDistanceComponent,
    ::StateVectorComponent&                               stateVectorComponent,
    ::IConstBlockSource const&                            region
);
// NOLINTEND

} // namespace DefaultMoveSystems

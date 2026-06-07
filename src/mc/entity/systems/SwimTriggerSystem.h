#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorHeadInWaterFlagComponent;
struct ActorRotationComponent;
struct MovementAbilitiesComponent;
struct PlayerActionComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
// clang-format on

namespace SwimTriggerSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doTick(
    ::StrictEntityContext const&                      aabb,
    ::AABBShapeComponent const&                       abilities,
    ::MovementAbilitiesComponent const&               rotation,
    ::ActorRotationComponent const&                   actorData,
    ::ActorDataFlagComponent const&                   request,
    ::PlayerInputRequestComponent const&              playerAction,
    ::PlayerActionComponent&                          headInWater,
    ::Optional<::ActorHeadInWaterFlagComponent const> wasInWater,
    ::Optional<::WasInWaterFlagComponent const>       region,
    ::IConstBlockSource const&
);
// NOLINTEND

} // namespace SwimTriggerSystem

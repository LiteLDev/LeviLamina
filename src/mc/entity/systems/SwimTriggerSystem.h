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
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void doTick(
    ::StrictEntityContext const&,
    ::AABBShapeComponent const&                       aabb,
    ::MovementAbilitiesComponent const&               abilities,
    ::ActorRotationComponent const&                   rotation,
    ::ActorDataFlagComponent const&                   actorData,
    ::PlayerInputRequestComponent const&              request,
    ::PlayerActionComponent&                          playerAction,
    ::Optional<::ActorHeadInWaterFlagComponent const> headInWater,
    ::Optional<::WasInWaterFlagComponent const>       wasInWater,
    ::IConstBlockSource const&                        region
);
// NOLINTEND

} // namespace SwimTriggerSystem

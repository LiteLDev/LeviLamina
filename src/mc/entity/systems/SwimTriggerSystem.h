#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/components/FlagComponent.h"

namespace SwimTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void doTick(
    class StrictEntityContext const&,
    struct AABBShapeComponent const&                                       aabb,
    struct MovementAbilitiesComponent const&                               abilities,
    struct ActorRotationComponent const&                                   rotation,
    struct ActorDataFlagComponent const&                                   actorData,
    struct PlayerInputRequestComponent const&                              request,
    struct PlayerActionComponent&                                          playerAction,
    class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const> headInWater,
    class Optional<class FlagComponent<struct InWaterFlag> const>          wasInWater,
    class IConstBlockSource const&                                         region
);
// NOLINTEND

}; // namespace SwimTriggerSystem

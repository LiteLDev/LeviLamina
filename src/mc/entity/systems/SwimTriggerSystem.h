#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace SwimTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void doTick(class StrictEntityContext const&, struct AABBShapeComponent const&, struct MovementAbilitiesComponent const&, struct ActorRotationComponent const&, struct ActorDataFlagComponent const&, struct PlayerInputRequestComponent const&, struct PlayerActionComponent&, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class IConstBlockSource const&);
// NOLINTEND

}; // namespace SwimTriggerSystem

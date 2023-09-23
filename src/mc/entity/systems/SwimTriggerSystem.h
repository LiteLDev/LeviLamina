#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace SwimTriggerSystem {
// NOLINTBEGIN
// symbol: ?createSystem@SwimTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?doTick@SwimTriggerSystem@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUAbilitiesComponent@@AEBUActorRotationComponent@@AEBUMoveInputComponent@@AEBUSynchedActorDataComponent@@AEBUPlayerInputRequestComponent@@AEAUPlayerActionComponent@@V?$Optional@$$CBV?$FlagComponent@UActorHeadInWaterFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@AEBVIConstBlockSource@@@Z
MCAPI void doTick(class StrictEntityContext const&, struct AABBShapeComponent const&, struct AbilitiesComponent const&, struct ActorRotationComponent const&, struct MoveInputComponent const&, struct SynchedActorDataComponent const&, struct PlayerInputRequestComponent const&, struct PlayerActionComponent&, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class IConstBlockSource const&);
// NOLINTEND

}; // namespace SwimTriggerSystem

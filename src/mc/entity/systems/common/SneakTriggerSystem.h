#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace SneakTriggerSystem { struct DetermineStatusArgs; }
namespace SneakTriggerSystem { struct PlayerStatusTransitions; }
// clang-format on

namespace SneakTriggerSystem {
// NOLINTBEGIN
// symbol: ?createActionSystem@SneakTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createActionSystem();

// symbol: ?createIntentSystem@SneakTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createIntentSystem();

// symbol: ?determineStatus@SneakTriggerSystem@@YA?AUPlayerStatusTransitions@1@AEBUDetermineStatusArgs@1@@Z
MCAPI struct SneakTriggerSystem::PlayerStatusTransitions
determineStatus(struct SneakTriggerSystem::DetermineStatusArgs const&);

// symbol:
// ?doActionTick@SneakTriggerSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUPlayerActionComponent@@AEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@AEAV?$EntityModifier@UShouldUpdateBoundingBoxRequestComponent@@@@@Z
MCAPI void
doActionTick(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct PlayerActionComponent const&, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent>&);

// symbol:
// ?doIntentTick@SneakTriggerSystem@@YAXAEBVStrictEntityContext@@AEBUMoveInputComponent@@AEBUActorGameTypeComponent@@AEBUPlayerInputRequestComponent@@AEBUActorDataFlagComponent@@AEAUPlayerActionComponent@@V?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@V?$Optional@$$CBUPassengerComponent@@@@V?$OptionalGlobal@$$CBUBaseGameVersionComponent@@@@AEBUExternalDataInterface@@@Z
MCAPI void
doIntentTick(class StrictEntityContext const&, struct MoveInputComponent const&, struct ActorGameTypeComponent const&, struct PlayerInputRequestComponent const&, struct ActorDataFlagComponent const&, struct PlayerActionComponent&, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct PassengerComponent const>, class OptionalGlobal<struct BaseGameVersionComponent const>, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace SneakTriggerSystem

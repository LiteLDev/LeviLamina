#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/entity/EntityModifierT.h"
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
// ?doActionTick@SneakTriggerSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUPlayerActionComponent@@AEAUSynchedActorDataComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UShouldUpdateBoundingBoxRequestComponent@@@@@Z
MCAPI void
doActionTick(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct PlayerActionComponent const&, struct SynchedActorDataComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldUpdateBoundingBoxRequestComponent>&);

// symbol:
// ?doIntentTick@SneakTriggerSystem@@YAXAEBVStrictEntityContext@@AEBUMoveInputComponent@@AEBUAbilitiesComponent@@AEBUActorGameTypeComponent@@AEBUPlayerInputRequestComponent@@AEBUSynchedActorDataComponent@@AEAUPlayerActionComponent@@V?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@V?$Optional@$$CBUPassengerComponent@@@@V?$OptionalGlobalT@$$CBUBaseGameVersionComponent@@VEntityRegistryBase@@@@AEBUExternalDataInterface@@@Z
MCAPI void doIntentTick(class StrictEntityContext const&, struct MoveInputComponent const&, struct AbilitiesComponent const&, struct ActorGameTypeComponent const&, struct PlayerInputRequestComponent const&, struct SynchedActorDataComponent const&, struct PlayerActionComponent&, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct PassengerComponent const>, class OptionalGlobalT<struct BaseGameVersionComponent const, class EntityRegistryBase>, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace SneakTriggerSystem

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace BoatPaddleInputSystem {
// NOLINTBEGIN
// symbol: ?createSystem@BoatPaddleInputSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?doBoatPaddleInputSystem@BoatPaddleInputSystem@@YAXAEBVStrictEntityContext@@AEBUMoveInputComponent@@AEBUPlayerInputModeComponent@@AEBUPassengerComponent@@AEAUPlayerPaddleComponent@@AEBV?$optional_ref@$$CBUPlayerInteractionModelComponent@@@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUVehicleComponent@@$$CBUActorRotationComponent@@UBoatPaddleComponent@@USynchedActorDataComponent@@V?$Optional@$$CBV?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@@AEBUCurrentTickComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UPlayerHandsBusyFlag@@@@@@@Z
MCAPI void doBoatPaddleInputSystem(class StrictEntityContext const&, struct MoveInputComponent const&, struct PlayerInputModeComponent const&, struct PassengerComponent const&, struct PlayerPaddleComponent&, class optional_ref<struct PlayerInteractionModelComponent const> const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct ActorRotationComponent const, struct BoatPaddleComponent, struct SynchedActorDataComponent, class Optional<class FlagComponent<struct ControlledByLocalInstanceFlag> const>> const&, struct CurrentTickComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PlayerHandsBusyFlag>>);
// NOLINTEND

}; // namespace BoatPaddleInputSystem

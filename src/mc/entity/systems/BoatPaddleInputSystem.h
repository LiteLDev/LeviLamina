#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
template<typename T0> class optional_ref;
// clang-format on

namespace BoatPaddleInputSystem {
/**
 * @symbol ?createSystem\@BoatPaddleInputSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createSystem();
/**
 * @symbol
 * ?doBoatPaddleInputSystem\@BoatPaddleInputSystem\@\@YAXAEBVStrictEntityContext\@\@AEBUMoveInputComponent\@\@AEBUPlayerInputModeComponent\@\@AEBUPassengerComponent\@\@AEAUPlayerPaddleComponent\@\@AEBV?$optional_ref\@$$CBUPlayerInteractionModelComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUActorRotationComponent\@\@UBoatPaddleComponent\@\@USynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@\@AEBUCurrentTickComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UPlayerHandsBusyFlag\@\@\@\@\@\@\@Z
 */
MCAPI void doBoatPaddleInputSystem(class StrictEntityContext const&, struct MoveInputComponent const&, struct PlayerInputModeComponent const&, struct PassengerComponent const&, struct PlayerPaddleComponent&, class optional_ref<struct PlayerInteractionModelComponent const> const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct ActorRotationComponent const, struct BoatPaddleComponent, struct SynchedActorDataComponent, class Optional<class FlagComponent<struct ControlledByLocalInstanceFlag> const>> const&, struct CurrentTickComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PlayerHandsBusyFlag>>);

}; // namespace BoatPaddleInputSystem

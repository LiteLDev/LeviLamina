/**
 * @file  SprintTriggerSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace SprintTriggerSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doTick\@SprintTriggerSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBV?$Optional\@$$CBUItemInUseComponent\@\@\@\@AEBV?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEBV?$Optional\@$$CBUPassengerComponent\@\@\@\@AEBV?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@AEBUAbilitiesComponent\@\@AEBUMobEffectsComponent\@\@AEBUMoveInputComponent\@\@AEBUPlayerInputModeComponent\@\@AEBV?$Optional\@UPlayerActionComponent\@\@\@\@AEAUAttributesComponent\@\@AEAUPlayerInputRequestComponent\@\@AEAUVanillaClientGameplayComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UVehicleComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCanVehicleSprintFlag\@\@\@\@\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USynchedActorDataComponent\@\@\@\@AEBUExternalDataInterface\@\@\@Z
     */
    MCAPI void doTick(class StrictEntityContext const &, class Optional<struct ItemInUseComponent const> const &, class Optional<class FlagComponent<struct OnGroundFlag> const> const &, class Optional<struct PassengerComponent const> const &, class Optional<class FlagComponent<struct InWaterFlag> const> const &, struct AbilitiesComponent const &, struct MobEffectsComponent const &, struct MoveInputComponent const &, struct PlayerInputModeComponent const &, class Optional<struct PlayerActionComponent> const &, struct AttributesComponent &, struct PlayerInputRequestComponent &, struct VanillaClientGameplayComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CanVehicleSprintFlag>>> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent> const &, struct ExternalDataInterface const &);

};
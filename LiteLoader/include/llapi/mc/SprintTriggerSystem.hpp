/**
 * @file  SprintTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace SprintTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createActionSystem\@SprintTriggerSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createActionSystem();
    /**
     * @symbol ?createIntentSystem\@SprintTriggerSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createIntentSystem();
    /**
     * @symbol ?createSetRequestSystem\@SprintTriggerSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createSetRequestSystem();
    /**
     * @symbol ?doIntentTick\@SprintTriggerSystem\@\@YAXAEBV?$Optional\@$$CBUItemInUseComponent\@\@\@\@AEBV?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEBV?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@AEBUAbilitiesComponent\@\@AEBUMobEffectsComponent\@\@AEBUMoveInputComponent\@\@AEBUPlayerInputModeComponent\@\@AEBUStateVectorComponent\@\@AEBUPlayerLastPosComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUPlayerInputRequestComponent\@\@AEAUVanillaClientGameplayComponent\@\@AEAUPlayerActionComponent\@\@\@Z
     */
    MCAPI void doIntentTick(class Optional<struct ItemInUseComponent const> const &, class Optional<class FlagComponent<struct OnGroundFlag> const> const &, class Optional<class FlagComponent<struct InWaterFlag> const> const &, struct AbilitiesComponent const &, struct MobEffectsComponent const &, struct MoveInputComponent const &, struct PlayerInputModeComponent const &, struct StateVectorComponent const &, struct PlayerLastPosComponent const &, struct SynchedActorDataComponent const &, struct PlayerInputRequestComponent &, struct VanillaClientGameplayComponent &, struct PlayerActionComponent &);
    /**
     * @symbol ?doSetRequestTick\@SprintTriggerSystem\@\@YAXAEBVStrictEntityContext\@\@AEBV?$Optional\@$$CBUPassengerComponent\@\@\@\@AEBUAbilitiesComponent\@\@AEBUAttributesComponent\@\@AEAUPlayerInputRequestComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UVehicleComponent\@\@USynchedActorDataComponent\@\@V?$Optional\@V?$FlagComponent\@UCanVehicleSprintFlag\@\@\@\@\@\@\@\@\@Z
     */
    MCAPI void doSetRequestTick(class StrictEntityContext const &, class Optional<struct PassengerComponent const> const &, struct AbilitiesComponent const &, struct AttributesComponent const &, struct PlayerInputRequestComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent, struct SynchedActorDataComponent, class Optional<class FlagComponent<struct CanVehicleSprintFlag>>> const &);

};
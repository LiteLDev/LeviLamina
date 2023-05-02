/**
 * @file  RideJumpTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RideJumpTriggerSystem.
 *
 */
class RideJumpTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEJUMPTRIGGERSYSTEM
public:
    class RideJumpTriggerSystem& operator=(class RideJumpTriggerSystem const &) = delete;
    RideJumpTriggerSystem(class RideJumpTriggerSystem const &) = delete;
    RideJumpTriggerSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@RideJumpTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_tickRideJumpTriggerSystem\@RideJumpTriggerSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUMoveInputComponent\@\@AEBUPassengerComponent\@\@AEAUJumpRidingScaleComponent\@\@AEAUVanillaClientGameplayComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UMobFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMobOnPlayerJumpRequestComponent\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickRideJumpTriggerSystem(class StrictEntityContext &, struct MoveInputComponent const &, struct PassengerComponent const &, struct JumpRidingScaleComponent &, struct VanillaClientGameplayComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct PassengerComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobOnPlayerJumpRequestComponent, struct SendPacketsComponent> &);
    /**
     * @symbol ?tickRideJumpTriggerSystem\@RideJumpTriggerSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPlayerInputRequestComponent\@\@\@\@$$CBUMoveInputComponent\@\@$$CBUPassengerComponent\@\@UJumpRidingScaleComponent\@\@UVanillaClientGameplayComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UMobFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMobOnPlayerJumpRequestComponent\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI static void tickRideJumpTriggerSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent>, struct MoveInputComponent const, struct PassengerComponent const, struct JumpRidingScaleComponent, struct VanillaClientGameplayComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct PassengerComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobOnPlayerJumpRequestComponent, struct SendPacketsComponent>);

private:

};

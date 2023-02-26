/**
 * @file  TryExitVehicleSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TryExitVehicleSystem.
 *
 */
class TryExitVehicleSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRYEXITVEHICLESYSTEM
public:
    class TryExitVehicleSystem& operator=(class TryExitVehicleSystem const &) = delete;
    TryExitVehicleSystem(class TryExitVehicleSystem const &) = delete;
    TryExitVehicleSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@TryExitVehicleSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_tickTryExitVehicle\@TryExitVehicleSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UBoatFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UMobFlag\@\@\@\@\@\@V?$Optional\@$$CBUAttributesComponent\@\@\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickTryExitVehicle(class StrictEntityContext const &, struct PassengerComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<class FlagComponent<struct BoatFlag>>, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct AttributesComponent const>, struct VehicleComponent const, struct SynchedActorDataComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ExitFromPassengerFlag>> &);

private:

};
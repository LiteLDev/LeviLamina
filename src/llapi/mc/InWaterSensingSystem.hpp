/**
 * @file  InWaterSensingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InWaterSensingSystem.
 *
 */
class InWaterSensingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INWATERSENSINGSYSTEM
public:
    class InWaterSensingSystem& operator=(class InWaterSensingSystem const &) = delete;
    InWaterSensingSystem(class InWaterSensingSystem const &) = delete;
    InWaterSensingSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@InWaterSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?doInWaterSensing\@InWaterSensingSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUUpdateWaterStateRequestComponent\@\@AEAUFallDistanceComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UHasEnteredWaterFlag\@\@\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBoatFlag\@\@\@\@UVehicleComponent\@\@\@\@\@\@\@Z
     */
    MCAPI static void doInWaterSensing(class StrictEntityContext &, struct UpdateWaterStateRequestComponent const &, struct FallDistanceComponent &, class Optional<class FlagComponent<struct FallingBlockFlag> const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct HasEnteredWaterFlag>, class FlagComponent<struct InWaterFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>>);

private:

};
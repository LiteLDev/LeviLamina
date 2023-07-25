#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class InWaterSensingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INWATERSENSINGSYSTEM
public:
    InWaterSensingSystem& operator=(InWaterSensingSystem const&) = delete;
    InWaterSensingSystem(InWaterSensingSystem const&)            = delete;
    InWaterSensingSystem()                                       = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@InWaterSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?doInWaterSensing\@InWaterSensingSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUUpdateWaterStateRequestComponent\@\@AEAUFallDistanceComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBoatFlag\@\@\@\@UVehicleComponent\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    doInWaterSensing(class StrictEntityContext&, struct UpdateWaterStateRequestComponent const&, struct FallDistanceComponent&, class Optional<class FlagComponent<struct FallingBlockFlag> const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct InWaterFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>>);
    /**
     * @symbol
     * ?tickInWaterSensing\@InWaterSensingSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUUpdateWaterStateRequestComponent\@\@UFallDistanceComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBoatFlag\@\@\@\@UVehicleComponent\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickInWaterSensing(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct UpdateWaterStateRequestComponent const, struct FallDistanceComponent, class Optional<class FlagComponent<struct FallingBlockFlag> const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct InWaterFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BoatFlag>, struct VehicleComponent>>);

private:
};

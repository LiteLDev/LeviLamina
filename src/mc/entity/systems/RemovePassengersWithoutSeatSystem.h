#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class RemovePassengersWithoutSeatSystem {

public:
    // prevent constructor by default
    RemovePassengersWithoutSeatSystem& operator=(RemovePassengersWithoutSeatSystem const&) = delete;
    RemovePassengersWithoutSeatSystem(RemovePassengersWithoutSeatSystem const&)            = delete;
    RemovePassengersWithoutSeatSystem()                                                    = delete;

public:
    /**
     * @symbol ?createSystem\@RemovePassengersWithoutSeatSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
    /**
     * @symbol
     * ?removePassengersWithoutSeat\@RemovePassengersWithoutSeatSystem\@\@SAXAEAVStrictEntityContext\@\@AEBVRideableComponent\@\@AEAUVehicleComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    removePassengersWithoutSeat(class StrictEntityContext&, class RideableComponent const&, struct VehicleComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopRidingRequestFlag>>&); // NOLINT
};

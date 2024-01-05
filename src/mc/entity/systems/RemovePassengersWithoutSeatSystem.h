#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class RemovePassengersWithoutSeatSystem {
public:
    // prevent constructor by default
    RemovePassengersWithoutSeatSystem& operator=(RemovePassengersWithoutSeatSystem const&);
    RemovePassengersWithoutSeatSystem(RemovePassengersWithoutSeatSystem const&);
    RemovePassengersWithoutSeatSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@RemovePassengersWithoutSeatSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?removePassengersWithoutSeat@RemovePassengersWithoutSeatSystem@@SAXAEAVStrictEntityContext@@AEBVRideableComponent@@AEAUVehicleComponent@@AEAV?$EntityModifier@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
    MCAPI static void removePassengersWithoutSeat(
        class StrictEntityContext&,
        class RideableComponent const&,
        struct VehicleComponent&,
        class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>>& modifier
    );

    // NOLINTEND
};

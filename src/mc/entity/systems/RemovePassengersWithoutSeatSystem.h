#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
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

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickRemovePassengersWithoutSeat@RemovePassengersWithoutSeatSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBVRideableComponent@@UVehicleComponent@@@@V?$EntityModifier@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
    MCAPI static void _tickRemovePassengersWithoutSeat(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            class RideableComponent const,
            struct VehicleComponent>                                            view,
        class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>> modifier
    );

    // NOLINTEND
};

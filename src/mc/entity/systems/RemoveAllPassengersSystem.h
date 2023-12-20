#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class RemoveAllPassengersSystem {
public:
    // prevent constructor by default
    RemoveAllPassengersSystem& operator=(RemoveAllPassengersSystem const&);
    RemoveAllPassengersSystem(RemoveAllPassengersSystem const&);
    RemoveAllPassengersSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@RemoveAllPassengersSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?removeAllPassengers@RemoveAllPassengersSystem@@SAXAEBUVehicleComponent@@_NAEAV?$EntityModifier@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
    MCAPI static void
    removeAllPassengers(struct VehicleComponent const&, bool, class EntityModifier<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tick@RemoveAllPassengersSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@U?$Exclude@VRideableComponent@@@@$$CBUVehicleComponent@@V?$Optional@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@@@V?$EntityModifier@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
    MCAPI static void
        _tick(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<class RideableComponent>, struct VehicleComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class EntityModifier<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>);

    // NOLINTEND
};

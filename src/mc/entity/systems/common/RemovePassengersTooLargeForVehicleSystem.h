#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class RemovePassengersTooLargeForVehicleSystem {
public:
    // prevent constructor by default
    RemovePassengersTooLargeForVehicleSystem& operator=(RemovePassengersTooLargeForVehicleSystem const&);
    RemovePassengersTooLargeForVehicleSystem(RemovePassengersTooLargeForVehicleSystem const&);
    RemovePassengersTooLargeForVehicleSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@RemovePassengersTooLargeForVehicleSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_removePassengersTooLargeForVehicle@RemovePassengersTooLargeForVehicleSystem@@CAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEBUAABBShapeComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBVRideableComponent@@@@AEAV?$EntityModifier@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
    MCAPI static void
    _removePassengersTooLargeForVehicle(class StrictEntityContext&, struct PassengerComponent const&, struct AABBShapeComponent const&, class ViewT<class StrictEntityContext, class RideableComponent const> const&, class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>>&);

    // symbol:
    // ?_tickRemovePassengersTooLargeForVehicle@RemovePassengersTooLargeForVehicleSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUPassengerComponent@@U?$Exclude@V?$FlagComponent@UKeepPassengersTooLargeForVehicleFlag@@@@@@$$CBUAABBShapeComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBVRideableComponent@@@@V?$EntityModifier@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
    MCAPI static void _tickRemovePassengersTooLargeForVehicle(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct PassengerComponent const, struct Exclude<class FlagComponent<struct KeepPassengersTooLargeForVehicleFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class RideableComponent const>, class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>>);

    // NOLINTEND
};

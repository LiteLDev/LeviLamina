#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class PreventMobEjectionFromLegacyVehicleSystem {
public:
    // prevent constructor by default
    PreventMobEjectionFromLegacyVehicleSystem& operator=(PreventMobEjectionFromLegacyVehicleSystem const&);
    PreventMobEjectionFromLegacyVehicleSystem(PreventMobEjectionFromLegacyVehicleSystem const&);
    PreventMobEjectionFromLegacyVehicleSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PreventMobEjectionFromLegacyVehicleSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_preventEjectionIfNeeded@PreventMobEjectionFromLegacyVehicleSystem@@CAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEBUAABBShapeComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBVRideableComponent@@@@AEAV?$EntityModifier@V?$FlagComponent@UKeepPassengersTooLargeForVehicleFlag@@@@@@@Z
    MCAPI static void
    _preventEjectionIfNeeded(class StrictEntityContext&, struct PassengerComponent const&, struct AABBShapeComponent const&, class ViewT<class StrictEntityContext, class RideableComponent const> const&, class EntityModifier<class FlagComponent<struct KeepPassengersTooLargeForVehicleFlag>>&);

    // NOLINTEND
};

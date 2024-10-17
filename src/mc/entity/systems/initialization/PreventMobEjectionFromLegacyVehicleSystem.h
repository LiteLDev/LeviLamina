#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class PreventMobEjectionFromLegacyVehicleSystem {
public:
    // prevent constructor by default
    PreventMobEjectionFromLegacyVehicleSystem& operator=(PreventMobEjectionFromLegacyVehicleSystem const&);
    PreventMobEjectionFromLegacyVehicleSystem(PreventMobEjectionFromLegacyVehicleSystem const&);
    PreventMobEjectionFromLegacyVehicleSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _preventEjectionIfNeeded(
        class StrictEntityContext&                                                              strictEntityContext,
        struct PassengerComponent const&                                                        passengerComponent,
        struct AABBShapeComponent const&                                                        aabbShapeComponent,
        class ViewT<class StrictEntityContext, class RideableComponent const> const&            vehicleView,
        class EntityModifier<class FlagComponent<struct KeepPassengersTooLargeForVehicleFlag>>& modifier
    );

    MCAPI static void _tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorFirstTick>>,
            struct Exclude<class FlagComponent<struct KeepPassengersTooLargeForVehicleFlag>>,
            struct PassengerComponent const,
            struct AABBShapeComponent const>                                                   passengerView,
        class ViewT<class StrictEntityContext, class RideableComponent const>                  vehicleView,
        class EntityModifier<class FlagComponent<struct KeepPassengersTooLargeForVehicleFlag>> modifier
    );

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class RemovePassengersTooLargeForVehicleSystem {
public:
    // prevent constructor by default
    RemovePassengersTooLargeForVehicleSystem& operator=(RemovePassengersTooLargeForVehicleSystem const&);
    RemovePassengersTooLargeForVehicleSystem(RemovePassengersTooLargeForVehicleSystem const&);
    RemovePassengersTooLargeForVehicleSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _removePassengersTooLargeForVehicle(
        class StrictEntityContext&                                                   strictEntityContext,
        struct PassengerComponent const&                                             passengerComponent,
        struct AABBShapeComponent const&                                             aabbShapeComponent,
        class ViewT<class StrictEntityContext, class RideableComponent const> const& vehicleView,
        class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>>&     modifier
    );

    MCAPI static void _tickRemovePassengersTooLargeForVehicle(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct PassengerComponent const,
            struct Exclude<class FlagComponent<struct KeepPassengersTooLargeForVehicleFlag>>,
            struct AABBShapeComponent const>                                    view,
        class ViewT<class StrictEntityContext, class RideableComponent const>   vehicleView,
        class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>> modifier
    );

    // NOLINTEND
};

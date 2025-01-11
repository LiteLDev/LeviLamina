#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorMovementTickNeededComponent;
struct KeepRidingEvenIfTooLargeForVehicleFlagComponent;
struct PassengerComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class RemovePassengersTooLargeForVehicleSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _removePassengersTooLargeForVehicle(
        ::StrictEntityContext&                                           strictEntityContext,
        ::PassengerComponent const&                                      passengerComponent,
        ::AABBShapeComponent const&                                      aabbShapeComponent,
        ::ViewT<::StrictEntityContext, ::RideableComponent const> const& vehicleView,
        ::EntityModifier<::StopRidingRequestComponent>&                  modifier
    );

    MCAPI static void _tickRemovePassengersTooLargeForVehicle(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent>,
            ::PassengerComponent const,
            ::Exclude<::KeepRidingEvenIfTooLargeForVehicleFlagComponent>,
            ::AABBShapeComponent const>                           view,
        ::ViewT<::StrictEntityContext, ::RideableComponent const> vehicleView,
        ::EntityModifier<::StopRidingRequestComponent>            modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};

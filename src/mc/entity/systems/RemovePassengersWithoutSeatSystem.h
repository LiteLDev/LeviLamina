#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class RemovePassengersWithoutSeatSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void removePassengersWithoutSeat(
        ::StrictEntityContext&     rideableComponent,
        ::RideableComponent const& vehicleComponent,
        ::VehicleComponent&        modifier,
        ::EntityModifier<::StopRidingRequestComponent>&
    );
    // NOLINTEND
};

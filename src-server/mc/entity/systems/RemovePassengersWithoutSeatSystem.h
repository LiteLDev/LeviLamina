#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class RemovePassengersWithoutSeatSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickRemovePassengersWithoutSeat(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::RideableComponent const, ::VehicleComponent> view, ::EntityModifier<::StopRidingRequestComponent> modifier);

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void removePassengersWithoutSeat(::StrictEntityContext&, ::RideableComponent const& rideableComponent, ::VehicleComponent& vehicleComponent, ::EntityModifier<::StopRidingRequestComponent>& modifier);
    // NOLINTEND

};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct MobBodyRotationComponent;
struct MobTravelComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace DesiredMoveDirectionSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createPassengerSystem();

MCAPI ::TickingSystemWithInfo createVehicleSystem();

MCAPI void doVehicleTick(
    ::VehicleInputIntentComponent const& vehicleInputIntentComponent,
    ::ActorHeadRotationComponent&        actorHeadRotationComponent,
    ::ActorRotationComponent&            actorRotationComponent,
    ::MobBodyRotationComponent&          mobBodyRotationComponent,
    ::MobTravelComponent&                mobTravelComponent
);
// NOLINTEND

} // namespace DesiredMoveDirectionSystem

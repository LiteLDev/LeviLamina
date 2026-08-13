#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct LocalMoveVelocityComponent;
struct MobTravelComponent;
struct PassengerComponent;
struct PassengerYRotLimitComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace DesiredMoveDirectionSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createPassengerSystem();

MCAPI ::TickingSystemWithInfo createVehicleSystem();

MCAPI void doPassengerTick(
    ::entt::type_list<::Include<::MobTravelComponent>>,
    ::ActorRotationComponent const& vehicleRotation,
    ::VehicleInputIntentComponent&  vehicleInputIntentComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::PassengerComponent>,
        ::ActorRotationComponent const,
        ::LocalMoveVelocityComponent const> const& passengerView,
    ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent>, ::PassengerYRotLimitComponent const> const&
        passengerRotLimitView
);
// NOLINTEND

} // namespace DesiredMoveDirectionSystem

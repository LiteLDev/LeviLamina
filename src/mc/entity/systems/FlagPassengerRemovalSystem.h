#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorIsBeingDestroyedFlagComponent;
struct PassengerComponent;
struct RemovePassengersComponent;
struct StopRidingRequestComponent;
struct SwitchingVehiclesFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace FlagPassengerRemovalSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createVehicleExitedSystem();

MCAPI ::TickingSystemWithInfo createVehicleSwitchedOrDestroyedSystem();

MCAPI void singleImmediatePassengerRemoval(
    ::StrictEntityContext const& passengerEntity,
    ::PassengerComponent const&  passengerComponent,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ActorIsBeingDestroyedFlagComponent>>
        destroyedVehiclePassengers,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::SwitchingVehiclesFlagComponent>>
                                                  switchingVehiclePassengers,
    ::EntityModifier<::RemovePassengersComponent> modifier
);
// NOLINTEND

} // namespace FlagPassengerRemovalSystem

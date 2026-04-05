#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorIsBeingDestroyedFlagComponent;
struct ActorUniqueIDComponent;
struct DoesServerAuthOnlyDismountFlagComponent;
struct PassengerComponent;
struct PendingRemovePassengersComponent;
struct RemovePassengersComponent;
struct StopRidingRequestComponent;
struct SwitchingVehiclesFlagComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace FlagPassengerRemovalSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createVehicleExitedSystem();

MCAPI void exitingPassengerRemoval(
    ::StrictEntityContext const&                                vehicleEntity,
    ::VehicleComponent const&                                   vehicleComponent,
    ::Optional<::DoesServerAuthOnlyDismountFlagComponent const> doesServerAuthOnlyDismountFlagComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::StopRidingRequestComponent>,
        ::Exclude<::ActorIsBeingDestroyedFlagComponent, ::SwitchingVehiclesFlagComponent>,
        ::PassengerComponent const,
        ::ActorUniqueIDComponent const>                                               passengersToRemove,
    ::EntityModifier<::RemovePassengersComponent, ::PendingRemovePassengersComponent> modifier
);

MCAPI void passengerRemovalFromSwitchedOrDestroyedVehicle(
    ::StrictEntityContext const& vehicleEntity,
    ::VehicleComponent const&    vehicleComponent,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ActorIsBeingDestroyedFlagComponent>>
        destroyedVehiclePassengers,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::SwitchingVehiclesFlagComponent>>
                                                  switchingVehiclePassengers,
    ::EntityModifier<::RemovePassengersComponent> modifier
);

MCAPI void singleExitingPassengerRemoval(
    ::StrictEntityContext const&    passengerEntity,
    ::PassengerComponent const&     passengerComponent,
    ::ActorUniqueIDComponent const& actorUniqueIDComponent,
    ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>>
                                                                                      serverAuthOnlyVehicleView,
    ::EntityModifier<::RemovePassengersComponent, ::PendingRemovePassengersComponent> modifier
);

MCAPI void singleTickExitingPassengerRemoval(
    ::StrictEntityContext const& passengerEntity,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::StopRidingRequestComponent>,
        ::Exclude<::ActorIsBeingDestroyedFlagComponent, ::SwitchingVehiclesFlagComponent>,
        ::PassengerComponent const,
        ::ActorUniqueIDComponent const> passengerView,
    ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>>
                                                                                      serverAuthOnlyVehicleView,
    ::EntityModifier<::RemovePassengersComponent, ::PendingRemovePassengersComponent> modifier
);

MCAPI void singleTickPassengerRemovalFromSwitchedOrDestroyedVehicle(
    ::StrictEntityContext const&                                                                        passengerEntity,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent>, ::PassengerComponent const> view,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ActorIsBeingDestroyedFlagComponent>>
        destroyedVehiclePassengers,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::SwitchingVehiclesFlagComponent>>
                                                  switchingVehiclePassengers,
    ::EntityModifier<::RemovePassengersComponent> modifier
);

MCAPI void tickExitingPassengerRemoval(
    ::ViewT<
        ::StrictEntityContext,
        ::VehicleComponent const,
        ::Optional<::DoesServerAuthOnlyDismountFlagComponent const>> view,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::StopRidingRequestComponent>,
        ::Exclude<::ActorIsBeingDestroyedFlagComponent, ::SwitchingVehiclesFlagComponent>,
        ::PassengerComponent const,
        ::ActorUniqueIDComponent const>                                               exitingPassengers,
    ::EntityModifier<::RemovePassengersComponent, ::PendingRemovePassengersComponent> modifier
);

MCAPI void tickPassengerRemovalFromSwitchedOrDestroyedVehicle(
    ::ViewT<::StrictEntityContext, ::VehicleComponent const> view,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ActorIsBeingDestroyedFlagComponent>>
        destroyedVehiclePassengers,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::SwitchingVehiclesFlagComponent>>
                                                  switchingVehiclePassengers,
    ::EntityModifier<::RemovePassengersComponent> modifier
);
// NOLINTEND

} // namespace FlagPassengerRemovalSystem

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorIsBeingDestroyedFlagComponent;
struct ActorUniqueIDComponent;
struct PassengerComponent;
struct PendingRemovePassengersComponent;
struct RemovePassengersComponent;
struct StopRidingRequestComponent;
struct SwitchingVehiclesFlagComponent;
struct VehicleComponent;
// clang-format on

namespace FlagPassengerRemovalSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void deferredPassengerRemoval(
    ::StrictEntityContext const& vehicleEntity,
    ::VehicleComponent const&    vehicleComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::StopRidingRequestComponent>,
        ::Exclude<::ActorIsBeingDestroyedFlagComponent, ::SwitchingVehiclesFlagComponent>,
        ::PassengerComponent const,
        ::ActorUniqueIDComponent const>                  passengersToRemove,
    ::EntityModifier<::PendingRemovePassengersComponent> modifier
);

MCNAPI void immediatePassengerRemoval(
    ::StrictEntityContext const& vehicleEntity,
    ::VehicleComponent const&    vehicleComponent,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ActorIsBeingDestroyedFlagComponent>>
        destroyedPassengersToRemove,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::SwitchingVehiclesFlagComponent>>
                                                  switchingVehiclePassengersToRemove,
    ::EntityModifier<::RemovePassengersComponent> modifier
);

MCNAPI void singleTickDeferredPassengerRemoval(
    ::StrictEntityContext const& entity,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::StopRidingRequestComponent>,
        ::Exclude<::ActorIsBeingDestroyedFlagComponent, ::SwitchingVehiclesFlagComponent>,
        ::PassengerComponent const,
        ::ActorUniqueIDComponent const>                  view,
    ::EntityModifier<::PendingRemovePassengersComponent> modifier
);

MCNAPI void singleTickImmediatePassengerRemoval(
    ::StrictEntityContext const&                                                                        entity,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent>, ::PassengerComponent const> view,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ActorIsBeingDestroyedFlagComponent>>
        destroyedPassengers,
    ::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::SwitchingVehiclesFlagComponent>>
                                                  switchingVehiclePassengers,
    ::EntityModifier<::RemovePassengersComponent> modifier
);
// NOLINTEND

} // namespace FlagPassengerRemovalSystemImpl

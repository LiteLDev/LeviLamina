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
struct ActorIsBeingDestroyedFlagComponent;
struct ExecuteEntityEventRequestComponent;
struct PassengerComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace QueueOnRiderExitEntityEventSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void queueRequest(::PassengerComponent const& passengerComponent, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent>, ::RideableComponent const> vehicleView, ::EntityModifier<::ExecuteEntityEventRequestComponent> modifier);

MCNAPI void tick(::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent>, ::Exclude<::ActorIsBeingDestroyedFlagComponent>, ::PassengerComponent const> passengerView, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent>, ::RideableComponent const> vehicleView, ::EntityModifier<::ExecuteEntityEventRequestComponent> modifier);
// NOLINTEND

}

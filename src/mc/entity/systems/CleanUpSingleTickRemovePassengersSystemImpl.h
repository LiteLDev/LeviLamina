#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct PassengerComponent;
struct RemovePassengersComponent;
struct StopRidingRequestComponent;
// clang-format on

namespace CleanUpSingleTickRemovePassengersSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void _cleanup(
    ::entt::type_list<::Include<::StopRidingRequestComponent>>,
    ::StrictEntityContext const&                                passenger,
    ::PassengerComponent const&                                 passengerComponent,
    ::ViewT<::StrictEntityContext, ::RemovePassengersComponent> vehicles
);
// NOLINTEND

} // namespace CleanUpSingleTickRemovePassengersSystemImpl

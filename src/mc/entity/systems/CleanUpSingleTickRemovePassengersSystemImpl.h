#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace CleanUpSingleTickRemovePassengersSystemImpl {
// NOLINTBEGIN
MCAPI void _cleanup(
    entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>,
    class StrictEntityContext const&                                         passenger,
    struct PassengerComponent const&                                         passengerComponent,
    class ViewT<class StrictEntityContext, struct RemovePassengersComponent> vehicles
);
// NOLINTEND

}; // namespace CleanUpSingleTickRemovePassengersSystemImpl

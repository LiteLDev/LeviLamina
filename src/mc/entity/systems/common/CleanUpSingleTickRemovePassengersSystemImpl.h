#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace CleanUpSingleTickRemovePassengersSystemImpl {
// NOLINTBEGIN
MCAPI void
_cleanup(entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>, class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, struct RemovePassengersComponent>);
// NOLINTEND

}; // namespace CleanUpSingleTickRemovePassengersSystemImpl

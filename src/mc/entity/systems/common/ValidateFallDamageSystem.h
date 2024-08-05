#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"

namespace ValidateFallDamageSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void
doValidateFallDamage(struct EventingDispatcherComponent const&, class Optional<struct ServerPlayerCurrentMovementComponent const> const&, class Optional<struct FallDamageResultComponent const> const&, class Optional<struct PassengerComponent const> const&, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent const, struct FallDamageResultComponent const>, class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>);
// NOLINTEND

}; // namespace ValidateFallDamageSystem

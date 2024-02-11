#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"

namespace ValidateFallDamageSystem {
// NOLINTBEGIN
// symbol: ?createSystem@ValidateFallDamageSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?doValidateFallDamage@ValidateFallDamageSystem@@YAXAEBUEventingDispatcherComponent@@AEBV?$Optional@$$CBUServerPlayerCurrentMovementComponent@@@@AEBV?$Optional@$$CBUFallDamageResultComponent@@@@AEBV?$Optional@$$CBUPassengerComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBUVehicleInputIntentComponent@@$$CBUFallDamageResultComponent@@@@V?$ViewT@VStrictEntityContext@@UEventingRequestQueueComponent@@@@@Z
MCAPI void
doValidateFallDamage(struct EventingDispatcherComponent const&, class Optional<struct ServerPlayerCurrentMovementComponent const> const&, class Optional<struct FallDamageResultComponent const> const&, class Optional<struct PassengerComponent const> const&, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent const, struct FallDamageResultComponent const>, class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>);
// NOLINTEND

}; // namespace ValidateFallDamageSystem

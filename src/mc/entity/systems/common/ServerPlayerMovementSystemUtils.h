#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace ServerPlayerMovementSystemUtils {
// NOLINTBEGIN
MCAPI void
_tickResetFallDistanceSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct ServerPlayerCurrentMovementComponent>>, class ActorOwnerComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&);

MCAPI void checkCheatingIfSupported(class ActorOwnerComponent&, struct ServerPlayerCurrentMovementComponent const&, struct ActorDataFlagComponent const&, class Optional<struct PassengerComponent const> const&, class Optional<struct StateVectorComponent const> const&, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent, class ActorOwnerComponent> const&, class OptionalGlobal<class PlayerMovementSettingsComponent const>);
// NOLINTEND

}; // namespace ServerPlayerMovementSystemUtils

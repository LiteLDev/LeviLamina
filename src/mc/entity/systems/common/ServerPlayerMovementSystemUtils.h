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
// symbol:
// ?_tickResetFallDistanceSystem@ServerPlayerMovementSystemUtils@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UServerPlayerCurrentMovementComponent@@@@@entt@@AEBVActorOwnerComponent@@AEBUStateVectorComponent@@AEAUFallDistanceComponent@@@Z
MCAPI void
_tickResetFallDistanceSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct ServerPlayerCurrentMovementComponent>>, class ActorOwnerComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&);

// symbol:
// ?checkCheatingIfSupported@ServerPlayerMovementSystemUtils@@YAXAEAVActorOwnerComponent@@AEBUServerPlayerCurrentMovementComponent@@AEBUActorDataFlagComponent@@AEBV?$Optional@$$CBUPassengerComponent@@@@AEBV?$Optional@$$CBUStateVectorComponent@@@@AEBV?$ViewT@VStrictEntityContext@@UVehicleInputIntentComponent@@VActorOwnerComponent@@@@V?$OptionalGlobal@$$CBVPlayerMovementSettingsComponent@@@@@Z
MCAPI void checkCheatingIfSupported(class ActorOwnerComponent&, struct ServerPlayerCurrentMovementComponent const&, struct ActorDataFlagComponent const&, class Optional<struct PassengerComponent const> const&, class Optional<struct StateVectorComponent const> const&, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent, class ActorOwnerComponent> const&, class OptionalGlobal<class PlayerMovementSettingsComponent const>);
// NOLINTEND

}; // namespace ServerPlayerMovementSystemUtils

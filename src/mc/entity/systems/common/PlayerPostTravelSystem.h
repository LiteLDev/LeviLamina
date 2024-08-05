#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace PlayerPostTravelSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createGlidingGameEventSystem();

MCAPI void
doServerPlayerPostTravel(struct ActorDataFlagComponent const&, struct ElytraFlightTimeTicksComponent const&, struct StateVectorComponent const&, class ActorOwnerComponent&, struct CurrentTickComponent const&);

MCAPI void tickServerPlayerPostTravel(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct ServerPlayerComponentFlag>>, struct ActorDataFlagComponent const, struct ElytraFlightTimeTicksComponent const, struct StateVectorComponent const, class ActorOwnerComponent>, class OptionalGlobal<struct CurrentTickComponent const>);
// NOLINTEND

}; // namespace PlayerPostTravelSystem

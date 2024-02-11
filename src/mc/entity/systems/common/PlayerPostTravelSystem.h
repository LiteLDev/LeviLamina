#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerPostTravelSystem {
// NOLINTBEGIN
// symbol: ?createGlidingGameEventSystem@PlayerPostTravelSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createGlidingGameEventSystem();

// symbol:
// ?doServerPlayerPostTravel@PlayerPostTravelSystem@@YAXAEBUActorDataFlagComponent@@AEBUElytraFlightTimeTicksComponent@@AEBUStateVectorComponent@@AEAVActorOwnerComponent@@AEBUCurrentTickComponent@@@Z
MCAPI void
doServerPlayerPostTravel(struct ActorDataFlagComponent const&, struct ElytraFlightTimeTicksComponent const&, struct StateVectorComponent const&, class ActorOwnerComponent&, struct CurrentTickComponent const&);
// NOLINTEND

}; // namespace PlayerPostTravelSystem

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerPostTravelSystem {
// NOLINTBEGIN
// symbol: ?createCommonPostTravelSystem@PlayerPostTravelSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createCommonPostTravelSystem();

// symbol: ?createServerSystem@PlayerPostTravelSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createServerSystem();

// symbol:
// ?doServerPlayerPostTravel@PlayerPostTravelSystem@@YAXAEBUSynchedActorDataComponent@@AEBUElytraFlightTimeTicksComponent@@AEBUStateVectorComponent@@AEAVActorOwnerComponent@@AEBUCurrentTickComponent@@@Z
MCAPI void
doServerPlayerPostTravel(struct SynchedActorDataComponent const&, struct ElytraFlightTimeTicksComponent const&, struct StateVectorComponent const&, class ActorOwnerComponent&, struct CurrentTickComponent const&);
// NOLINTEND

}; // namespace PlayerPostTravelSystem

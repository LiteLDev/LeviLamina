#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct ActorDataFlagComponent;
struct CurrentTickComponent;
struct ElytraFlightTimeTicksComponent;
struct StateVectorComponent;
// clang-format on

namespace PlayerPostTravelSystem {
// functions
// NOLINTBEGIN
MCNAPI void doServerPlayerPostTravel(
    ::ActorDataFlagComponent const&         synchedActorData,
    ::ElytraFlightTimeTicksComponent const& elytraFlightTimeTicks,
    ::StateVectorComponent const&           stateVector,
    ::ActorOwnerComponent&                  actorOwner,
    ::CurrentTickComponent const&           currentTick
);
// NOLINTEND

} // namespace PlayerPostTravelSystem

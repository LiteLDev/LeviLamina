#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/TravelMethod.h"

namespace PlayerTravelledEvent {
// NOLINTBEGIN
// symbol: ?getTravelledMethod@PlayerTravelledEvent@@YA?AW4TravelMethod@1@AEBVEntityContext@@AEBVIConstBlockSource@@@Z
MCAPI ::PlayerTravelledEvent::TravelMethod
getTravelledMethod(class EntityContext const&, class IConstBlockSource const&);

// symbol:
// ?onClimbableBlock@PlayerTravelledEvent@@YA_NAEBUStateVectorComponent@@AEBVIConstBlockSource@@AEBVEntityContext@@@Z
MCAPI bool
onClimbableBlock(struct StateVectorComponent const&, class IConstBlockSource const&, class EntityContext const&);
// NOLINTEND

}; // namespace PlayerTravelledEvent

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/TravelMethod.h"

namespace PlayerTravelledEvent {
// NOLINTBEGIN
MCAPI ::PlayerTravelledEvent::TravelMethod
getTravelledMethod(class EntityContext const&, class IConstBlockSource const&);

MCAPI bool
onClimbableBlock(struct StateVectorComponent const&, class IConstBlockSource const&, class EntityContext const&);
// NOLINTEND

}; // namespace PlayerTravelledEvent

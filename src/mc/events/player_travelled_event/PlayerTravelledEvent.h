#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/player_travelled_event/TravelMethod.h"

namespace PlayerTravelledEvent {
// NOLINTBEGIN
MCAPI ::PlayerTravelledEvent::TravelMethod
getTravelledMethod(class EntityContext const& entity, class IConstBlockSource const& region);

MCAPI bool onClimbableBlock(
    struct StateVectorComponent const& stateVector,
    class IConstBlockSource const&     region,
    class EntityContext const&         entity
);
// NOLINTEND

}; // namespace PlayerTravelledEvent

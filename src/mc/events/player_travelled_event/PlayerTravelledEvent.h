#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/player_travelled_event/TravelMethod.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IConstBlockSource;
struct StateVectorComponent;
// clang-format on

namespace PlayerTravelledEvent {
// functions
// NOLINTBEGIN
MCAPI ::PlayerTravelledEvent::TravelMethod
getTravelledMethod(::EntityContext const& entity, ::IConstBlockSource const& region);

MCAPI bool onClimbableBlock(
    ::StateVectorComponent const& stateVector,
    ::IConstBlockSource const&    region,
    ::EntityContext const&        entity
);
// NOLINTEND

} // namespace PlayerTravelledEvent

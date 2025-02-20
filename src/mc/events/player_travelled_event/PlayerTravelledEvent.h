#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/player_travelled_event/TravelMethod.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IConstBlockSource;
// clang-format on

namespace PlayerTravelledEvent {
// functions
// NOLINTBEGIN
MCAPI ::PlayerTravelledEvent::TravelMethod
getTravelledMethod(::EntityContext const& entity, ::IConstBlockSource const& region);
// NOLINTEND

} // namespace PlayerTravelledEvent

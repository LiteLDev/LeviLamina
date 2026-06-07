#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerCatchupMovementTrackerSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createResetTrackingSystem();

MCAPI void registerSystems(::EntitySystems& systems);
// NOLINTEND

} // namespace ServerCatchupMovementTrackerSystem

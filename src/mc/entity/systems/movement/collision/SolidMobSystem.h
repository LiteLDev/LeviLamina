#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct TickingSystemWithInfo;
// clang-format on

namespace SolidMobSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createRewindShapeRefreshSystem();

MCAPI ::TickingSystemWithInfo createStoreNearbyMobsOnMoveRequestSystem();

MCAPI void registerSystems(::EntitySystems& systems, bool isClientSide);
// NOLINTEND

} // namespace SolidMobSystem

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EventCoordinatorRegistration {
// NOLINTBEGIN
// symbol: ?registerClientEventCoordinators@EventCoordinatorRegistration@@YAXAEAVLevel@@@Z
MCAPI void registerClientEventCoordinators(class Level& level);

// symbol: ?registerServerEventCoordinators@EventCoordinatorRegistration@@YAXAEAVServerLevel@@@Z
MCAPI void registerServerEventCoordinators(class ServerLevel& level);

// symbol: ?registerSharedEventCoordinators@EventCoordinatorRegistration@@YAXAEAVLevel@@@Z
MCAPI void registerSharedEventCoordinators(class Level& level);
// NOLINTEND

}; // namespace EventCoordinatorRegistration

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EventCoordinatorRegistration {
/**
 * @symbol ?registerClientEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVLevel\@\@\@Z
 */
MCAPI void registerClientEventCoordinators(class Level&);
/**
 * @symbol ?registerServerEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVServerLevel\@\@\@Z
 */
MCAPI void registerServerEventCoordinators(class ServerLevel&);
/**
 * @symbol ?registerSharedEventCoordinators\@EventCoordinatorRegistration\@\@YAXAEAVLevel\@\@\@Z
 */
MCAPI void registerSharedEventCoordinators(class Level&);

}; // namespace EventCoordinatorRegistration

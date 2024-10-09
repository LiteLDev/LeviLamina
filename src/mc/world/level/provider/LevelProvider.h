#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LevelProvider {
// NOLINTBEGIN
MCAPI void addLevelComponents(class EntityContext& levelEntity, class IRandom& random, bool isClientSide);

MCAPI void initializeGlobalComponents(class EntityRegistry& registry);

MCAPI void registerExternalDataComponent(
    class EntityRegistry&                         registry,
    std::unique_ptr<struct ExternalDataInterface> externalDataInterface
);

MCAPI void registerLevelGlobalComponents(class EntityRegistry& registry, class ILevel& level);

MCAPI void removeGlobalComponents(class EntityRegistry& registry);

MCAPI void unregisterLevelGlobalComponents(class EntityRegistry& registry);
// NOLINTEND

}; // namespace LevelProvider

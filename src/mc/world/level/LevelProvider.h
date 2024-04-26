#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LevelProvider {
// NOLINTBEGIN
// symbol: ?addLevelComponents@LevelProvider@@YAXAEAVEntityContext@@AEAVIRandom@@_N@Z
MCAPI void addLevelComponents(class EntityContext&, class IRandom&, bool);

// symbol: ?initializeGlobalComponents@LevelProvider@@YAXAEAVEntityRegistry@@@Z
MCAPI void initializeGlobalComponents(class EntityRegistry& registry);

// symbol:
// ?registerExternalDataComponent@LevelProvider@@YAXAEAVEntityRegistry@@V?$unique_ptr@UExternalDataInterface@@U?$default_delete@UExternalDataInterface@@@std@@@std@@@Z
MCAPI void registerExternalDataComponent(class EntityRegistry& registry, std::unique_ptr<struct ExternalDataInterface>);

// symbol: ?registerLevelGlobalComponents@LevelProvider@@YAXAEAVEntityRegistry@@AEAVILevel@@@Z
MCAPI void registerLevelGlobalComponents(class EntityRegistry& registry, class ILevel& level);

// symbol: ?removeGlobalComponents@LevelProvider@@YAXAEAVEntityRegistry@@@Z
MCAPI void removeGlobalComponents(class EntityRegistry& registry);

// symbol: ?unregisterLevelGlobalComponents@LevelProvider@@YAXAEAVEntityRegistry@@@Z
MCAPI void unregisterLevelGlobalComponents(class EntityRegistry& registry);
// NOLINTEND

}; // namespace LevelProvider

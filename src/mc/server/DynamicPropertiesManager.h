#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicPropertiesManager {
public:
    // prevent constructor by default
    DynamicPropertiesManager& operator=(DynamicPropertiesManager const&);
    DynamicPropertiesManager(DynamicPropertiesManager const&);
    DynamicPropertiesManager();

public:
    // NOLINTBEGIN
    // symbol: ??0DynamicPropertiesManager@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit DynamicPropertiesManager(struct cereal::ReflectionCtx&);

    // symbol: ?addBytesSaved@DynamicPropertiesManager@@QEAAXAEBVDynamicProperties@@@Z
    MCAPI void addBytesSaved(class DynamicProperties const&);

    // symbol: ?getOrAddLevelDynamicProperties@DynamicPropertiesManager@@QEAAAEAVDynamicProperties@@XZ
    MCAPI class DynamicProperties& getOrAddLevelDynamicProperties();

    // symbol: ?getTotalBytesSaved@DynamicPropertiesManager@@QEBA_KXZ
    MCAPI uint64 getTotalBytesSaved() const;

    // symbol: ?readFromLevelStorage@DynamicPropertiesManager@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void readFromLevelStorage(class LevelStorage&);

    // symbol: ?registerLevelStorageManagerListener@DynamicPropertiesManager@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);

    // symbol: ?tick@DynamicPropertiesManager@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?writeToLevelStorage@DynamicPropertiesManager@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void writeToLevelStorage(class LevelStorage&);

    // NOLINTEND
};

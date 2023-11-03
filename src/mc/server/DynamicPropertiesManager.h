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

public:
    // NOLINTBEGIN
    // symbol: ??0DynamicPropertiesManager@@QEAA@XZ
    MCAPI DynamicPropertiesManager();

    // symbol: ?addBytesSaved@DynamicPropertiesManager@@QEAAXAEBVDynamicProperties@@@Z
    MCAPI void addBytesSaved(class DynamicProperties const&);

    // symbol: ?getOrAddLevelDynamicProperties@DynamicPropertiesManager@@QEAAAEAVDynamicProperties@@XZ
    MCAPI class DynamicProperties& getOrAddLevelDynamicProperties();

    // symbol: ?readFromLevelStorage@DynamicPropertiesManager@@QEAAXAEAVLevelStorage@@AEBUReflectionCtx@cereal@@@Z
    MCAPI void readFromLevelStorage(class LevelStorage&, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?registerLevelStorageManagerListener@DynamicPropertiesManager@@QEAAXAEAVLevelStorageManager@@AEBUReflectionCtx@cereal@@@Z
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&, struct cereal::ReflectionCtx const&);

    // symbol: ?tick@DynamicPropertiesManager@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?writeToLevelStorage@DynamicPropertiesManager@@QEAAXAEAVLevelStorage@@AEBUReflectionCtx@cereal@@@Z
    MCAPI void writeToLevelStorage(class LevelStorage&, struct cereal::ReflectionCtx const&);

    // NOLINTEND
};

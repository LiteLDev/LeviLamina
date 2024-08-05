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
    MCAPI explicit DynamicPropertiesManager(struct cereal::ReflectionCtx&);

    MCAPI void addBytesSaved(class DynamicProperties const&);

    MCAPI class DynamicProperties& getOrAddLevelDynamicProperties();

    MCAPI uint64 getTotalBytesSaved() const;

    MCAPI void readFromLevelStorage(class LevelStorage&);

    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);

    MCAPI void tick();

    MCAPI void writeToLevelStorage(class LevelStorage&);

    // NOLINTEND
};

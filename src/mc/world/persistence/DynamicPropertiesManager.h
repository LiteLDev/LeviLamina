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
    MCAPI explicit DynamicPropertiesManager(struct cereal::ReflectionCtx& ctx);

    MCAPI void addBytesSaved(class DynamicProperties const& properties);

    MCAPI class DynamicProperties& getOrAddLevelDynamicProperties();

    MCAPI uint64 getTotalBytesSaved() const;

    MCAPI void readFromLevelStorage(class LevelStorage& levelStorage);

    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager& levelStorageManager);

    MCAPI void tick();

    MCAPI void writeToLevelStorage(class LevelStorage& levelStorage);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HardcodedSpawnAreaRegistry {

public:
    // prevent constructor by default
    HardcodedSpawnAreaRegistry& operator=(HardcodedSpawnAreaRegistry const&) = delete;
    HardcodedSpawnAreaRegistry(HardcodedSpawnAreaRegistry const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0HardcodedSpawnAreaRegistry\@\@QEAA\@XZ
     */
    MCAPI HardcodedSpawnAreaRegistry();
    /**
     * @symbol
     * ?getMobSpawnsForType\@HardcodedSpawnAreaRegistry\@\@QEBAAEBV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@W4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI std::vector<class MobSpawnerData> const& getMobSpawnsForType(enum class HardcodedSpawnAreaType) const;
    /**
     * @symbol
     * ?initMobSpawnsForType\@HardcodedSpawnAreaRegistry\@\@QEAAXW4HardcodedSpawnAreaType\@\@$$QEAV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initMobSpawnsForType(enum class HardcodedSpawnAreaType, std::vector<class MobSpawnerData>&&);
    // NOLINTEND
};

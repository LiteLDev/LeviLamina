#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/HardcodedSpawnAreaType.h"

class HardcodedSpawnAreaRegistry {
public:
    // prevent constructor by default
    HardcodedSpawnAreaRegistry& operator=(HardcodedSpawnAreaRegistry const&);
    HardcodedSpawnAreaRegistry(HardcodedSpawnAreaRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0HardcodedSpawnAreaRegistry@@QEAA@XZ
    MCAPI HardcodedSpawnAreaRegistry();

    // symbol:
    // ?getMobSpawnsForType@HardcodedSpawnAreaRegistry@@QEBAAEBV?$vector@VMobSpawnerData@@V?$allocator@VMobSpawnerData@@@std@@@std@@W4HardcodedSpawnAreaType@@@Z
    MCAPI std::vector<class MobSpawnerData> const& getMobSpawnsForType(::HardcodedSpawnAreaType type) const;

    // symbol:
    // ?initMobSpawnsForType@HardcodedSpawnAreaRegistry@@QEAAXW4HardcodedSpawnAreaType@@$$QEAV?$vector@VMobSpawnerData@@V?$allocator@VMobSpawnerData@@@std@@@std@@@Z
    MCAPI void initMobSpawnsForType(::HardcodedSpawnAreaType type, std::vector<class MobSpawnerData>&& mobList);

    // NOLINTEND
};

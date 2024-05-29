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
    // ?getMobSpawnsForType@HardcodedSpawnAreaRegistry@@QEBAAEBV?$vector@V?$shared_ptr@VMobSpawnerData@@@std@@V?$allocator@V?$shared_ptr@VMobSpawnerData@@@std@@@2@@std@@W4HardcodedSpawnAreaType@@@Z
    MCAPI std::vector<std::shared_ptr<class MobSpawnerData>> const& getMobSpawnsForType(::HardcodedSpawnAreaType type
    ) const;

    // symbol:
    // ?initMobSpawnsForType@HardcodedSpawnAreaRegistry@@QEAAXW4HardcodedSpawnAreaType@@$$QEAV?$vector@V?$shared_ptr@VMobSpawnerData@@@std@@V?$allocator@V?$shared_ptr@VMobSpawnerData@@@std@@@2@@std@@@Z
    MCAPI void
    initMobSpawnsForType(::HardcodedSpawnAreaType type, std::vector<std::shared_ptr<class MobSpawnerData>>&& mobList);

    // NOLINTEND
};

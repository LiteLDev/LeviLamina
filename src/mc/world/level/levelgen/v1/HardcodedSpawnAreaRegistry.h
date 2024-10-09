#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/MobSpawnerData.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/HardcodedSpawnAreaType.h"

class HardcodedSpawnAreaRegistry {
public:
    char filler[0x40]; // WorldGenerator::WorldGenerator line=12

public:
    // prevent constructor by default
    HardcodedSpawnAreaRegistry& operator=(HardcodedSpawnAreaRegistry const&);
    HardcodedSpawnAreaRegistry(HardcodedSpawnAreaRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI HardcodedSpawnAreaRegistry();

    MCAPI std::vector<std::shared_ptr<class MobSpawnerData>> const& getMobSpawnsForType(::HardcodedSpawnAreaType type
    ) const;

    MCAPI void
    initMobSpawnsForType(::HardcodedSpawnAreaType type, std::vector<std::shared_ptr<class MobSpawnerData>>&& mobList);

    // NOLINTEND
};

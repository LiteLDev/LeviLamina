#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/HardcodedSpawnAreaType.h"

class HardcodedSpawnAreaRegistry {
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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

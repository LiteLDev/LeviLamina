#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/MobSpawnRules.h"

class SpawnGroupData {
public:
    std::string                      mIdentifier;
    std::vector<class MobSpawnRules> mSpawnRules;

    SpawnGroupData() = delete;

public:
    // NOLINTBEGIN
    MCAPI SpawnGroupData(std::string const& identifier, class MobSpawnRules& spawnRules);

    MCAPI void addSpawnRules(class MobSpawnRules& spawnRules);

    MCAPI std::string const& getIdentifier() const;

    MCAPI std::vector<class MobSpawnRules> const& getSpawnRules() const;

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

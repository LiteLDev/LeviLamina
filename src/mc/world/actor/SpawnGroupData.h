#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnGroupData {
public:
    // prevent constructor by default
    SpawnGroupData& operator=(SpawnGroupData const&);
    SpawnGroupData(SpawnGroupData const&);
    SpawnGroupData();

public:
    // NOLINTBEGIN
    MCAPI SpawnGroupData(std::string const& identifier, class MobSpawnRules& spawnRules);

    MCAPI void addSpawnRules(class MobSpawnRules& spawnRules);

    MCAPI std::string const& getIdentifier() const;

    MCAPI std::vector<class MobSpawnRules> const& getSpawnRules() const;

    // NOLINTEND
};

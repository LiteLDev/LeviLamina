#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnConditions {
public:
    // prevent constructor by default
    SpawnConditions& operator=(SpawnConditions const&);
    SpawnConditions(SpawnConditions const&);
    SpawnConditions();

public:
    // NOLINTBEGIN
    MCAPI static class SpawnConditions
    createSpawnConditionsWithSpawnRules(class SpawnConditions const&, class MobSpawnRules const& spawnRules);

    // NOLINTEND
};

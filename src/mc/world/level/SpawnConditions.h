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
    // symbol: ?createSpawnConditionsWithSpawnRules@SpawnConditions@@SA?AV1@AEBV1@AEBVMobSpawnRules@@@Z
    MCAPI static class SpawnConditions
    createSpawnConditionsWithSpawnRules(class SpawnConditions const&, class MobSpawnRules const& spawnRules);

    // NOLINTEND
};

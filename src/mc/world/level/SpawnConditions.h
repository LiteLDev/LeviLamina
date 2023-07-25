#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnConditions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCONDITIONS
public:
    SpawnConditions& operator=(SpawnConditions const&) = delete;
    SpawnConditions(SpawnConditions const&)            = delete;
    SpawnConditions()                                  = delete;
#endif

public:
    /**
     * @symbol ?createSpawnConditionsWithSpawnRules\@SpawnConditions\@\@SA?AV1\@AEBV1\@AEBVMobSpawnRules\@\@\@Z
     */
    MCAPI static class SpawnConditions
    createSpawnConditionsWithSpawnRules(class SpawnConditions const&, class MobSpawnRules const&);
};

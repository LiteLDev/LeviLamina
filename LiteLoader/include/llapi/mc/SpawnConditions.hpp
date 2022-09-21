/**
 * @file  MC/SpawnConditions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnConditions.
 *
 */
class SpawnConditions {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCONDITIONS
public:
    class SpawnConditions& operator=(class SpawnConditions const &) = delete;
    SpawnConditions(class SpawnConditions const &) = delete;
    SpawnConditions() = delete;
#endif

public:
    /**
     * @hash   580656290
     * @symbol ?createSpawnConditionsWithSpawnRules@SpawnConditions@@SA?AV1@AEBV1@AEBVMobSpawnRules@@@Z
     */
    MCAPI static class SpawnConditions createSpawnConditionsWithSpawnRules(class SpawnConditions const &, class MobSpawnRules const &);

};
/**
 * @file  SpawnData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnData.
 *
 */
class SpawnData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNDATA
public:
    class SpawnData& operator=(class SpawnData const &) = delete;
    SpawnData() = delete;
#endif

public:
    /**
     * @hash   1074392582
     * @symbol ??0SpawnData@@QEAA@AEBVCompoundTag@@@Z
     */
    MCAPI SpawnData(class CompoundTag const &);
    /**
     * @hash   866757073
     * @symbol ??0SpawnData@@QEAA@AEBV0@@Z
     */
    MCAPI SpawnData(class SpawnData const &);
    /**
     * @hash   -1271787894
     * @symbol ?save@SpawnData@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save();

};
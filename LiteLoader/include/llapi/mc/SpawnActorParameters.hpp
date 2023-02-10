/**
 * @file  SpawnActorParameters.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SpawnActorParameters.
 *
 */
struct SpawnActorParameters {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORPARAMETERS
public:
    struct SpawnActorParameters& operator=(struct SpawnActorParameters const &) = delete;
#endif

public:
    /**
     * @hash   -578458816
     * @symbol  ??0SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI SpawnActorParameters();
    /**
     * @hash   2043362143
     * @symbol  ??0SpawnActorParameters\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters const &);
    /**
     * @hash   -1860111867
     * @symbol  ??0SpawnActorParameters\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters &&);
    /**
     * @hash   1704150930
     * @symbol  ?setItem\@SpawnActorParameters\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void setItem(class ItemDescriptor const &);
    /**
     * @hash   -285836692
     * @symbol  ?setSpawnEntity\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEntity(std::string const &);
    /**
     * @hash   1203977502
     * @symbol  ?setSpawnEvent\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEvent(std::string const &);
    /**
     * @hash   -1146269426
     * @symbol  ?setSpawnSound\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnSound(std::string const &);
    /**
     * @hash   -1967308917
     * @symbol  ?setSpawnTimeMax\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMax(int const &);
    /**
     * @hash   866485199
     * @symbol  ?setSpawnTimeMin\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMin(int const &);
    /**
     * @hash   643977122
     * @symbol  ?spawnsItemStack\@SpawnActorParameters\@\@QEBA_NXZ
     */
    MCAPI bool spawnsItemStack() const;
    /**
     * @hash   519823726
     * @symbol  ??1SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI ~SpawnActorParameters();

};
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
     * @symbol  ??0SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI SpawnActorParameters();
    /**
     * @symbol  ??0SpawnActorParameters\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters const &);
    /**
     * @symbol  ??0SpawnActorParameters\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters &&);
    /**
     * @symbol  ?setItem\@SpawnActorParameters\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void setItem(class ItemDescriptor const &);
    /**
     * @symbol  ?setSpawnEntity\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEntity(std::string const &);
    /**
     * @symbol  ?setSpawnEvent\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEvent(std::string const &);
    /**
     * @symbol  ?setSpawnSound\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnSound(std::string const &);
    /**
     * @symbol  ?setSpawnTimeMax\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMax(int const &);
    /**
     * @symbol  ?setSpawnTimeMin\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMin(int const &);
    /**
     * @symbol  ?spawnsItemStack\@SpawnActorParameters\@\@QEBA_NXZ
     */
    MCAPI bool spawnsItemStack() const;
    /**
     * @symbol  ??1SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI ~SpawnActorParameters();

};
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorParameters {

public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SpawnActorParameters\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters&&);
    /**
     * @symbol ??0SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI SpawnActorParameters();
    /**
     * @symbol ??0SpawnActorParameters\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters const&);
    /**
     * @symbol ?setItem\@SpawnActorParameters\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void setItem(class ItemDescriptor const&);
    /**
     * @symbol
     * ?setSpawnEntity\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEntity(std::string const&);
    /**
     * @symbol
     * ?setSpawnEvent\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEvent(std::string const&);
    /**
     * @symbol
     * ?setSpawnSound\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnSound(std::string const&);
    /**
     * @symbol ?setSpawnTimeMax\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMax(int const&);
    /**
     * @symbol ?setSpawnTimeMin\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMin(int const&);
    /**
     * @symbol ?spawnsItemStack\@SpawnActorParameters\@\@QEBA_NXZ
     */
    MCAPI bool spawnsItemStack() const;
    /**
     * @symbol ??1SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI ~SpawnActorParameters();
    // NOLINTEND
};

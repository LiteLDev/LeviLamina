#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorParameters {

public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&) = delete;

public:
    /**
     * @symbol ??0SpawnActorParameters\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters&&); // NOLINT
    /**
     * @symbol ??0SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI SpawnActorParameters(); // NOLINT
    /**
     * @symbol ??0SpawnActorParameters\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters const&); // NOLINT
    /**
     * @symbol ?setItem\@SpawnActorParameters\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void setItem(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol
     * ?setSpawnEntity\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEntity(std::string const&); // NOLINT
    /**
     * @symbol
     * ?setSpawnEvent\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnEvent(std::string const&); // NOLINT
    /**
     * @symbol
     * ?setSpawnSound\@SpawnActorParameters\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSpawnSound(std::string const&); // NOLINT
    /**
     * @symbol ?setSpawnTimeMax\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMax(int const&); // NOLINT
    /**
     * @symbol ?setSpawnTimeMin\@SpawnActorParameters\@\@QEAAXAEBH\@Z
     */
    MCAPI void setSpawnTimeMin(int const&); // NOLINT
    /**
     * @symbol ?spawnsItemStack\@SpawnActorParameters\@\@QEBA_NXZ
     */
    MCAPI bool spawnsItemStack() const; // NOLINT
    /**
     * @symbol ??1SpawnActorParameters\@\@QEAA\@XZ
     */
    MCAPI ~SpawnActorParameters(); // NOLINT
};

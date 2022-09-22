/**
 * @file  SpawnActorParameters.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   347683792
     * @symbol ??0SpawnActorParameters@@QEAA@XZ
     */
    MCAPI SpawnActorParameters();
    /**
     * @hash   -1271846433
     * @symbol ??0SpawnActorParameters@@QEAA@AEBU0@@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters const &);
    /**
     * @hash   -880353147
     * @symbol ??0SpawnActorParameters@@QEAA@$$QEAU0@@Z
     */
    MCAPI SpawnActorParameters(struct SpawnActorParameters &&);
    /**
     * @hash   -1664658382
     * @symbol ?setItem@SpawnActorParameters@@QEAAXAEBVItemDescriptor@@@Z
     */
    MCAPI void setItem(class ItemDescriptor const &);
    /**
     * @hash   640321292
     * @symbol ?setSpawnEntity@SpawnActorParameters@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setSpawnEntity(std::string const &);
    /**
     * @hash   2130027854
     * @symbol ?setSpawnEvent@SpawnActorParameters@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setSpawnEvent(std::string const &);
    /**
     * @hash   -220342082
     * @symbol ?setSpawnSound@SpawnActorParameters@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setSpawnSound(std::string const &);
    /**
     * @hash   -1041381573
     * @symbol ?setSpawnTimeMax@SpawnActorParameters@@QEAAXAEBH@Z
     */
    MCAPI void setSpawnTimeMax(int const &);
    /**
     * @hash   1792412543
     * @symbol ?setSpawnTimeMin@SpawnActorParameters@@QEAAXAEBH@Z
     */
    MCAPI void setSpawnTimeMin(int const &);
    /**
     * @hash   1569904466
     * @symbol ?spawnsItemStack@SpawnActorParameters@@QEBA_NXZ
     */
    MCAPI bool spawnsItemStack() const;
    /**
     * @hash   1499705454
     * @symbol ??1SpawnActorParameters@@QEAA@XZ
     */
    MCAPI ~SpawnActorParameters();

};
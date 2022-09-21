/**
 * @file  MC/SpawnActorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnActorComponent.
 *
 */
class SpawnActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORCOMPONENT
public:
    class SpawnActorComponent& operator=(class SpawnActorComponent const &) = delete;
    SpawnActorComponent(class SpawnActorComponent const &) = delete;
    SpawnActorComponent() = delete;
#endif

public:
    /**
     * @hash   364015368
     * @symbol ?addAdditionalSaveData@SpawnActorComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1847686934
     * @symbol ?getSpawnEntries@SpawnActorComponent@@QEAAAEAV?$vector@USpawnActorEntry@@V?$allocator@USpawnActorEntry@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct SpawnActorEntry> & getSpawnEntries();
    /**
     * @hash   -728742266
     * @symbol ?readAdditionalSaveData@SpawnActorComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

};
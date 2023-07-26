#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnActorComponent {

public:
    // prevent constructor by default
    SpawnActorComponent& operator=(SpawnActorComponent const&) = delete;
    SpawnActorComponent(SpawnActorComponent const&)            = delete;
    SpawnActorComponent()                                      = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@SpawnActorComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?getSpawnEntries\@SpawnActorComponent\@\@QEAAAEAV?$vector\@USpawnActorEntry\@\@V?$allocator\@USpawnActorEntry\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct SpawnActorEntry>& getSpawnEntries(); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@SpawnActorComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
};

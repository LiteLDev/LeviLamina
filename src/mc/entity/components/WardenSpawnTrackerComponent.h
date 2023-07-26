#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WardenSpawnTrackerComponent {

public:
    // prevent constructor by default
    WardenSpawnTrackerComponent& operator=(WardenSpawnTrackerComponent const&) = delete;
    WardenSpawnTrackerComponent(WardenSpawnTrackerComponent const&)            = delete;

public:
    /**
     * @symbol ??0WardenSpawnTrackerComponent\@\@QEAA\@XZ
     */
    MCAPI WardenSpawnTrackerComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?canIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canIncreaseThreatLevel() const; // NOLINT
    /**
     * @symbol ?copyDataFrom\@WardenSpawnTrackerComponent\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?tick\@WardenSpawnTrackerComponent\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ?tryIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEAAHXZ
     */
    MCAPI int tryIncreaseThreatLevel(); // NOLINT
    /**
     * @symbol
     * ?getSoundEventForThreatLevel\@WardenSpawnTrackerComponent\@\@SA?AV?$optional\@W4LevelSoundEvent\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::optional<enum class LevelSoundEvent> getSoundEventForThreatLevel(int); // NOLINT
    /**
     * @symbol ?hasNearbyWarden\@WardenSpawnTrackerComponent\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool hasNearbyWarden(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?MAX_THREAT_LEVEL\@WardenSpawnTrackerComponent\@\@2HB
     */
    MCAPI static int const MAX_THREAT_LEVEL; // NOLINT
};

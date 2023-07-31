#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WardenSpawnTrackerComponent {

public:
    // prevent constructor by default
    WardenSpawnTrackerComponent& operator=(WardenSpawnTrackerComponent const&) = delete;
    WardenSpawnTrackerComponent(WardenSpawnTrackerComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0WardenSpawnTrackerComponent\@\@QEAA\@XZ
     */
    MCAPI WardenSpawnTrackerComponent();
    /**
     * @symbol ?addAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?canIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canIncreaseThreatLevel() const;
    /**
     * @symbol ?copyDataFrom\@WardenSpawnTrackerComponent\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?tick\@WardenSpawnTrackerComponent\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol ?tryIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEAAHXZ
     */
    MCAPI int tryIncreaseThreatLevel();
    /**
     * @symbol
     * ?getSoundEventForThreatLevel\@WardenSpawnTrackerComponent\@\@SA?AV?$optional\@W4LevelSoundEvent\@\@\@std\@\@H\@Z
     */
    MCAPI static std::optional<enum class LevelSoundEvent> getSoundEventForThreatLevel(int);
    /**
     * @symbol ?hasNearbyWarden\@WardenSpawnTrackerComponent\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool hasNearbyWarden(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?MAX_THREAT_LEVEL\@WardenSpawnTrackerComponent\@\@2HB
     */
    MCAPI static int const MAX_THREAT_LEVEL;
    // NOLINTEND
};

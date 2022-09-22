/**
 * @file  WardenSpawnTrackerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WardenSpawnTrackerComponent.
 *
 */
class WardenSpawnTrackerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENSPAWNTRACKERCOMPONENT
public:
    class WardenSpawnTrackerComponent& operator=(class WardenSpawnTrackerComponent const &) = delete;
    WardenSpawnTrackerComponent(class WardenSpawnTrackerComponent const &) = delete;
#endif

public:
    /**
     * @hash   1016635479
     * @symbol ??0WardenSpawnTrackerComponent@@QEAA@XZ
     */
    MCAPI WardenSpawnTrackerComponent();
    /**
     * @hash   -331739096
     * @symbol ?addAdditionalSaveData@WardenSpawnTrackerComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -452275062
     * @symbol ?canIncreaseThreatLevel@WardenSpawnTrackerComponent@@QEBA_NXZ
     */
    MCAPI bool canIncreaseThreatLevel() const;
    /**
     * @hash   -476930572
     * @symbol ?copyDataFrom@WardenSpawnTrackerComponent@@QEAAXAEBV1@@Z
     */
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const &);
    /**
     * @hash   2100263190
     * @symbol ?readAdditionalSaveData@WardenSpawnTrackerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1297583101
     * @symbol ?tick@WardenSpawnTrackerComponent@@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   164796162
     * @symbol ?tryIncreaseThreatLevel@WardenSpawnTrackerComponent@@QEAAHXZ
     */
    MCAPI int tryIncreaseThreatLevel();
    /**
     * @hash   1142880138
     * @symbol ?getSoundEventForThreatLevel@WardenSpawnTrackerComponent@@SA?AV?$optional@W4LevelSoundEvent@@@std@@H@Z
     */
    MCAPI static class std::optional<enum LevelSoundEvent> getSoundEventForThreatLevel(int);
    /**
     * @hash   -1371014808
     * @symbol ?hasNearbyWarden@WardenSpawnTrackerComponent@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool hasNearbyWarden(class BlockSource &, class BlockPos const &);

};
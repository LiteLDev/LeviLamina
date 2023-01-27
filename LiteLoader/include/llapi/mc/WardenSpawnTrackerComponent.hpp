/**
 * @file  WardenSpawnTrackerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   49915607
     * @symbol  ??0WardenSpawnTrackerComponent\@\@QEAA\@XZ
     */
    MCAPI WardenSpawnTrackerComponent();
    /**
     * @hash   -1298458968
     * @symbol  ?addAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1418994934
     * @symbol  ?canIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canIncreaseThreatLevel() const;
    /**
     * @hash   -1443650444
     * @symbol  ?copyDataFrom\@WardenSpawnTrackerComponent\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const &);
    /**
     * @hash   1133543318
     * @symbol  ?readAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   330863229
     * @symbol  ?tick\@WardenSpawnTrackerComponent\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   -801923710
     * @symbol  ?tryIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEAAHXZ
     */
    MCAPI int tryIncreaseThreatLevel();
    /**
     * @hash   176160266
     * @symbol  ?getSoundEventForThreatLevel\@WardenSpawnTrackerComponent\@\@SA?AV?$optional\@W4LevelSoundEvent\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::optional<enum class LevelSoundEvent> getSoundEventForThreatLevel(int);
    /**
     * @hash   1957232616
     * @symbol  ?hasNearbyWarden\@WardenSpawnTrackerComponent\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool hasNearbyWarden(class BlockSource &, class BlockPos const &);

};
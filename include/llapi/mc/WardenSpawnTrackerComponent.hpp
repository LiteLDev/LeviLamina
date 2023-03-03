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
     * @symbol  ??0WardenSpawnTrackerComponent\@\@QEAA\@XZ
     */
    MCAPI WardenSpawnTrackerComponent();
    /**
     * @symbol  ?addAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?canIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canIncreaseThreatLevel() const;
    /**
     * @symbol  ?copyDataFrom\@WardenSpawnTrackerComponent\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const &);
    /**
     * @symbol  ?readAdditionalSaveData\@WardenSpawnTrackerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?tick\@WardenSpawnTrackerComponent\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol  ?tryIncreaseThreatLevel\@WardenSpawnTrackerComponent\@\@QEAAHXZ
     */
    MCAPI int tryIncreaseThreatLevel();
    /**
     * @symbol  ?getSoundEventForThreatLevel\@WardenSpawnTrackerComponent\@\@SA?AV?$optional\@W4LevelSoundEvent\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::optional<enum class LevelSoundEvent> getSoundEventForThreatLevel(int);
    /**
     * @symbol  ?hasNearbyWarden\@WardenSpawnTrackerComponent\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool hasNearbyWarden(class BlockSource &, class BlockPos const &);

};
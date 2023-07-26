#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimerComponent {

public:
    // prevent constructor by default
    TimerComponent& operator=(TimerComponent const&) = delete;
    TimerComponent(TimerComponent const&)            = delete;

public:
    /**
     * @symbol ??0TimerComponent\@\@QEAA\@XZ
     */
    MCAPI TimerComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@TimerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?getHasExecuted\@TimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasExecuted() const; // NOLINT
    /**
     * @symbol ?getLooping\@TimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getLooping() const; // NOLINT
    /**
     * @symbol ?getTimeStamp\@TimerComponent\@\@QEAA_KAEBVLevel\@\@\@Z
     */
    MCAPI unsigned __int64 getTimeStamp(class Level const&); // NOLINT
    /**
     * @symbol ??4TimerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class TimerComponent& operator=(class TimerComponent&&); // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@TimerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?restartTimer\@TimerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void restartTimer(class Actor&); // NOLINT
    /**
     * @symbol ?setHasExecuted\@TimerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasExecuted(bool); // NOLINT

    // private:
    /**
     * @symbol ?getRandomTime\@TimerComponent\@\@AEAAHAEAVActor\@\@\@Z
     */
    MCAPI int getRandomTime(class Actor&); // NOLINT

private:
};

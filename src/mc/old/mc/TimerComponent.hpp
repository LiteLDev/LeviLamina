/**
 * @file  TimerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TimerComponent.
 *
 */
class TimerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMERCOMPONENT
public:
    class TimerComponent& operator=(class TimerComponent const &) = delete;
    TimerComponent(class TimerComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0TimerComponent\@\@QEAA\@XZ
     */
    MCAPI TimerComponent();
    /**
     * @symbol  ?addAdditionalSaveData\@TimerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?getHasExecuted\@TimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasExecuted() const;
    /**
     * @symbol  ?getLooping\@TimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getLooping() const;
    /**
     * @symbol  ?getTimeStamp\@TimerComponent\@\@QEAA_KAEBVLevel\@\@\@Z
     */
    MCAPI unsigned __int64 getTimeStamp(class Level const &);
    /**
     * @symbol  ??4TimerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class TimerComponent & operator=(class TimerComponent &&);
    /**
     * @symbol  ?readAdditionalSaveData\@TimerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?restartTimer\@TimerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void restartTimer(class Actor &);
    /**
     * @symbol  ?setHasExecuted\@TimerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasExecuted(bool);

//private:
    /**
     * @symbol  ?getRandomTime\@TimerComponent\@\@AEAAHAEAVActor\@\@\@Z
     */
    MCAPI int getRandomTime(class Actor &);

private:

};
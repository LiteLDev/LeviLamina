/**
 * @file  TimerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1609949228
     * @symbol  ??0TimerComponent\@\@QEAA\@XZ
     */
    MCAPI TimerComponent();
    /**
     * @hash   2068536648
     * @symbol  ?addAdditionalSaveData\@TimerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1775530580
     * @symbol  ?getHasExecuted\@TimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasExecuted() const;
    /**
     * @hash   -1296028498
     * @symbol  ?getLooping\@TimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getLooping() const;
    /**
     * @hash   2136849364
     * @symbol  ?getTimeStamp\@TimerComponent\@\@QEAA_KAEBVLevel\@\@\@Z
     */
    MCAPI unsigned __int64 getTimeStamp(class Level const &);
    /**
     * @hash   1268404460
     * @symbol  ??4TimerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class TimerComponent & operator=(class TimerComponent &&);
    /**
     * @hash   -1266416358
     * @symbol  ?readAdditionalSaveData\@TimerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1002336838
     * @symbol  ?restartTimer\@TimerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void restartTimer(class Actor &);
    /**
     * @hash   765367328
     * @symbol  ?setHasExecuted\@TimerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasExecuted(bool);

//private:
    /**
     * @hash   1359714536
     * @symbol  ?getRandomTime\@TimerComponent\@\@AEAAHAEAVActor\@\@\@Z
     */
    MCAPI int getRandomTime(class Actor &);

private:

};
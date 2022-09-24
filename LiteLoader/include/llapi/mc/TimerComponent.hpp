/**
 * @file  TimerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -684406284
     * @symbol ??0TimerComponent@@QEAA@XZ
     */
    MCAPI TimerComponent();
    /**
     * @hash   -1300887704
     * @symbol ?addAdditionalSaveData@TimerComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1670450996
     * @symbol ?getHasExecuted@TimerComponent@@QEBA_NXZ
     */
    MCAPI bool getHasExecuted() const;
    /**
     * @hash   -361567474
     * @symbol ?getLooping@TimerComponent@@QEBA_NXZ
     */
    MCAPI bool getLooping() const;
    /**
     * @hash   -1232697996
     * @symbol ?getTimeStamp@TimerComponent@@QEAA_KAEBVLevel@@@Z
     */
    MCAPI unsigned __int64 getTimeStamp(class Level const &);
    /**
     * @hash   -2105986340
     * @symbol ??4TimerComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class TimerComponent & operator=(class TimerComponent &&);
    /**
     * @hash   -341027174
     * @symbol ?readAdditionalSaveData@TimerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -76947654
     * @symbol ?restartTimer@TimerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void restartTimer(class Actor &);
    /**
     * @hash   1616290544
     * @symbol ?setHasExecuted@TimerComponent@@QEAAX_N@Z
     */
    MCAPI void setHasExecuted(bool);

//private:
    /**
     * @hash   -2009832824
     * @symbol ?getRandomTime@TimerComponent@@AEAAHAEAVActor@@@Z
     */
    MCAPI int getRandomTime(class Actor &);

private:

};
#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Timer {

public:
    // prevent constructor by default
    Timer& operator=(Timer const&) = delete;
    Timer(Timer const&)            = delete;
    Timer()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Timer\@\@QEAA\@MV?$function\@$$A6A_JXZ\@std\@\@\@Z
     */
    MCAPI Timer(float, std::function<int64_t(void)>);
    /**
     * @symbol ?advanceTime\@Timer\@\@QEAAXM\@Z
     */
    MCAPI void advanceTime(float);
    /**
     * @symbol ?getTicks\@Timer\@\@QEBA_KXZ
     */
    MCAPI uint64_t getTicks() const;
    /**
     * @symbol ?getTimeScale\@Timer\@\@QEBAMXZ
     */
    MCAPI float getTimeScale() const;
    /**
     * @symbol ?resetTimePassed\@Timer\@\@QEAAXXZ
     */
    MCAPI void resetTimePassed();
    /**
     * @symbol ?setTimeScale\@Timer\@\@QEAAXM\@Z
     */
    MCAPI void setTimeScale(float);
    /**
     * @symbol ?stepTick\@Timer\@\@QEAAXH\@Z
     */
    MCAPI void stepTick(int);
    /**
     * @symbol ?stepping\@Timer\@\@QEBA_NXZ
     */
    MCAPI bool stepping() const;
    // NOLINTEND
};

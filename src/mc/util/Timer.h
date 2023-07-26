#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Timer {

public:
    // prevent constructor by default
    Timer& operator=(Timer const&) = delete;
    Timer(Timer const&)            = delete;
    Timer()                        = delete;

public:
    /**
     * @symbol ??0Timer\@\@QEAA\@MV?$function\@$$A6A_JXZ\@std\@\@\@Z
     */
    MCAPI Timer(float, class std::function<__int64(void)>); // NOLINT
    /**
     * @symbol ?advanceTime\@Timer\@\@QEAAXM\@Z
     */
    MCAPI void advanceTime(float); // NOLINT
    /**
     * @symbol ?getTicks\@Timer\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getTicks() const; // NOLINT
    /**
     * @symbol ?getTimeScale\@Timer\@\@QEBAMXZ
     */
    MCAPI float getTimeScale() const; // NOLINT
    /**
     * @symbol ?resetTimePassed\@Timer\@\@QEAAXXZ
     */
    MCAPI void resetTimePassed(); // NOLINT
    /**
     * @symbol ?setTimeScale\@Timer\@\@QEAAXM\@Z
     */
    MCAPI void setTimeScale(float); // NOLINT
    /**
     * @symbol ?stepTick\@Timer\@\@QEAAXH\@Z
     */
    MCAPI void stepTick(int); // NOLINT
    /**
     * @symbol ?stepping\@Timer\@\@QEBA_NXZ
     */
    MCAPI bool stepping() const; // NOLINT
};

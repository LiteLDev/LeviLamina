#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeAccumulator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMEACCUMULATOR
public:
    TimeAccumulator& operator=(TimeAccumulator const&) = delete;
    TimeAccumulator(TimeAccumulator const&)            = delete;
    TimeAccumulator()                                  = delete;
#endif

public:
    /**
     * @symbol ?getCount\@TimeAccumulator\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCount() const;
    /**
     * @symbol ?getTimeSumAverageMS\@TimeAccumulator\@\@QEBAMXZ
     */
    MCAPI float getTimeSumAverageMS() const;
    /**
     * @symbol ?getTimeSumAverageSeconds\@TimeAccumulator\@\@QEBAMXZ
     */
    MCAPI float getTimeSumAverageSeconds() const;
};

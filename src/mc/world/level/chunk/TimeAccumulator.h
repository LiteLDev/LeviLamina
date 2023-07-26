#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeAccumulator {

public:
    // prevent constructor by default
    TimeAccumulator& operator=(TimeAccumulator const&) = delete;
    TimeAccumulator(TimeAccumulator const&)            = delete;
    TimeAccumulator()                                  = delete;

public:
    /**
     * @symbol ?getCount\@TimeAccumulator\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCount() const; // NOLINT
    /**
     * @symbol ?getTimeSumAverageMS\@TimeAccumulator\@\@QEBAMXZ
     */
    MCAPI float getTimeSumAverageMS() const; // NOLINT
    /**
     * @symbol ?getTimeSumAverageSeconds\@TimeAccumulator\@\@QEBAMXZ
     */
    MCAPI float getTimeSumAverageSeconds() const; // NOLINT
};

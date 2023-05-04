/**
 * @file  TimeAccumulator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TimeAccumulator.
 *
 */
class TimeAccumulator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMEACCUMULATOR
public:
    class TimeAccumulator& operator=(class TimeAccumulator const &) = delete;
    TimeAccumulator(class TimeAccumulator const &) = delete;
    TimeAccumulator() = delete;
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

/**
 * @file  TimeAccumulator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
#endif

public:
    /**
     * @hash   -615717003
     * @symbol ??0TimeAccumulator@@QEAA@XZ
     */
    MCAPI TimeAccumulator();
    /**
     * @hash   768693577
     * @symbol ?getCount@TimeAccumulator@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCount() const;
    /**
     * @hash   -527966372
     * @symbol ?getTimeSumAverageMS@TimeAccumulator@@QEBAMXZ
     */
    MCAPI float getTimeSumAverageMS() const;
    /**
     * @hash   -638869288
     * @symbol ?getTimeSumAverageSeconds@TimeAccumulator@@QEBAMXZ
     */
    MCAPI float getTimeSumAverageSeconds() const;
    /**
     * @hash   -1388613756
     * @symbol ?getTimeSumSeconds@TimeAccumulator@@QEBAMXZ
     */
    MCAPI float getTimeSumSeconds() const;

};
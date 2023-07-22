/**
 * @file  Timer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Timer.
 *
 */
class Timer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMER
public:
    class Timer& operator=(class Timer const &) = delete;
    Timer(class Timer const &) = delete;
    Timer() = delete;
#endif

public:
    /**
     * @symbol  ??0Timer\@\@QEAA\@MV?$function\@$$A6A_JXZ\@std\@\@\@Z
     */
    MCAPI Timer(float, class std::function<__int64 (void)>);
    /**
     * @symbol  ?advanceTime\@Timer\@\@QEAAXM\@Z
     */
    MCAPI void advanceTime(float);
    /**
     * @symbol  ?getTicks\@Timer\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getTicks() const;
    /**
     * @symbol  ?getTimeScale\@Timer\@\@QEBAMXZ
     */
    MCAPI float getTimeScale() const;
    /**
     * @symbol  ?resetTimePassed\@Timer\@\@QEAAXXZ
     */
    MCAPI void resetTimePassed();
    /**
     * @symbol  ?setTimeScale\@Timer\@\@QEAAXM\@Z
     */
    MCAPI void setTimeScale(float);
    /**
     * @symbol  ?stepTick\@Timer\@\@QEAAXH\@Z
     */
    MCAPI void stepTick(int);
    /**
     * @symbol  ?stepping\@Timer\@\@QEBA_NXZ
     */
    MCAPI bool stepping() const;

};
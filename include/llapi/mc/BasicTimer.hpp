/**
 * @file  BasicTimer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BasicTimer.
 *
 */
class BasicTimer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASICTIMER
public:
    class BasicTimer& operator=(class BasicTimer const &) = delete;
    BasicTimer(class BasicTimer const &) = delete;
    BasicTimer() = delete;
#endif

public:
    /**
     * @symbol  ??0BasicTimer\@\@QEAA\@NV?$function\@$$A6ANXZ\@std\@\@\@Z
     */
    MCAPI BasicTimer(double, class std::function<double (void)>);
    /**
     * @symbol  ?isFinished\@BasicTimer\@\@QEBA_NXZ
     */
    MCAPI bool isFinished() const;
    /**
     * @symbol  ?resetTime\@BasicTimer\@\@QEAAXXZ
     */
    MCAPI void resetTime();
    /**
     * @symbol  ??1BasicTimer\@\@QEAA\@XZ
     */
    MCAPI ~BasicTimer();

};
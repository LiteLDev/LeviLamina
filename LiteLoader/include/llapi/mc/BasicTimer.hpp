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
     * @hash   1093216614
     * @symbol  ??0BasicTimer\@\@QEAA\@NV?$function\@$$A6ANXZ\@std\@\@\@Z
     */
    MCAPI BasicTimer(double, class std::function<double (void)>);
    /**
     * @hash   -1176363720
     * @symbol  ?isFinished\@BasicTimer\@\@QEBA_NXZ
     */
    MCAPI bool isFinished() const;
    /**
     * @hash   886389059
     * @symbol  ?resetTime\@BasicTimer\@\@QEAAXXZ
     */
    MCAPI void resetTime();
    /**
     * @hash   -903380559
     * @symbol  ??1BasicTimer\@\@QEAA\@XZ
     */
    MCAPI ~BasicTimer();

};
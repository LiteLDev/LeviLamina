#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicTimer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASICTIMER
public:
    BasicTimer& operator=(BasicTimer const&) = delete;
    BasicTimer(BasicTimer const&)            = delete;
    BasicTimer()                             = delete;
#endif

public:
    /**
     * @symbol ??0BasicTimer\@\@QEAA\@NV?$function\@$$A6ANXZ\@std\@\@\@Z
     */
    MCAPI BasicTimer(double, class std::function<double(void)>);
    /**
     * @symbol ?isFinished\@BasicTimer\@\@QEBA_NXZ
     */
    MCAPI bool isFinished() const;
    /**
     * @symbol ?resetTime\@BasicTimer\@\@QEAAXXZ
     */
    MCAPI void resetTime();
    /**
     * @symbol ??1BasicTimer\@\@QEAA\@XZ
     */
    MCAPI ~BasicTimer();
};

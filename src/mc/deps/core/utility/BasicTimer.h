#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicTimer {

public:
    // prevent constructor by default
    BasicTimer& operator=(BasicTimer const&) = delete;
    BasicTimer(BasicTimer const&)            = delete;
    BasicTimer()                             = delete;

public:
    /**
     * @symbol ??0BasicTimer\@\@QEAA\@NV?$function\@$$A6ANXZ\@std\@\@\@Z
     */
    MCAPI BasicTimer(double, class std::function<double(void)>); // NOLINT
    /**
     * @symbol ?isFinished\@BasicTimer\@\@QEBA_NXZ
     */
    MCAPI bool isFinished() const; // NOLINT
    /**
     * @symbol ?resetTime\@BasicTimer\@\@QEAAXXZ
     */
    MCAPI void resetTime(); // NOLINT
    /**
     * @symbol ??1BasicTimer\@\@QEAA\@XZ
     */
    MCAPI ~BasicTimer(); // NOLINT
};

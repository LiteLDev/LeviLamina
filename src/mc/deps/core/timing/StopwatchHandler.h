#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StopwatchHandler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPWATCHHANDLER
public:
    StopwatchHandler& operator=(StopwatchHandler const&) = delete;
    StopwatchHandler(StopwatchHandler const&)            = delete;
    StopwatchHandler()                                   = delete;
#endif

public:
    /**
     * @symbol ?clearAll\@StopwatchHandler\@\@QEAAXXZ
     */
    MCAPI void clearAll();
};

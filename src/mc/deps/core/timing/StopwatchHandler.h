#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StopwatchHandler {

public:
    // prevent constructor by default
    StopwatchHandler& operator=(StopwatchHandler const&) = delete;
    StopwatchHandler(StopwatchHandler const&)            = delete;
    StopwatchHandler()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?clearAll\@StopwatchHandler\@\@QEAAXXZ
     */
    MCAPI void clearAll();
    // NOLINTEND
};

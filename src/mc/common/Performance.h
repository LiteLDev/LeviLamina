#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Performance {

public:
    // prevent constructor by default
    Performance& operator=(Performance const&) = delete;
    Performance(Performance const&)            = delete;
    Performance()                              = delete;

public:
    /**
     * @symbol ?watches\@Performance\@\@2VStopwatchHandler\@\@A
     */
    MCAPI static class StopwatchHandler watches; // NOLINT
};

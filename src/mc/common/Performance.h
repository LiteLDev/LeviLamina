#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Performance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFORMANCE
public:
    Performance& operator=(Performance const&) = delete;
    Performance(Performance const&)            = delete;
    Performance()                              = delete;
#endif

public:
    /**
     * @symbol ?watches\@Performance\@\@2VStopwatchHandler\@\@A
     */
    MCAPI static class StopwatchHandler watches;
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StopwatchHandler {
public:
    // prevent constructor by default
    StopwatchHandler& operator=(StopwatchHandler const&);
    StopwatchHandler(StopwatchHandler const&);
    StopwatchHandler();

public:
    // NOLINTBEGIN
    MCAPI void clearAll();

    // NOLINTEND
};

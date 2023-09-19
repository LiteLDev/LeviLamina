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
    // symbol: ?clearAll@StopwatchHandler@@QEAAXXZ
    MCAPI void clearAll();

    // NOLINTEND
};

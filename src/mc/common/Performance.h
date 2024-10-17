#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Performance {
public:
    // prevent constructor by default
    Performance& operator=(Performance const&);
    Performance(Performance const&);
    Performance();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class StopwatchHandler& watches();

    // NOLINTEND
};

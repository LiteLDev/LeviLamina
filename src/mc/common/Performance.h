#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StopwatchHandler;
// clang-format on

class Performance {
public:
    // prevent constructor by default
    Performance& operator=(Performance const&);
    Performance(Performance const&);
    Performance();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::StopwatchHandler& watches();
    // NOLINTEND
};

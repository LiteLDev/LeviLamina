#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {
public:
    // prevent constructor by default
    AverageTracker& operator=(AverageTracker const&);
    AverageTracker(AverageTracker const&);
    AverageTracker();

public:
    // NOLINTBEGIN
    MCAPI void addSample(std::chrono::nanoseconds dt);

    // NOLINTEND
};

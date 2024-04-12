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
    // symbol: ?addSample@AverageTracker@@QEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    MCAPI void addSample(std::chrono::nanoseconds dt);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeAccumulator {
public:
    // prevent constructor by default
    TimeAccumulator& operator=(TimeAccumulator const&);
    TimeAccumulator(TimeAccumulator const&);
    TimeAccumulator();

public:
    // NOLINTBEGIN
    MCAPI uint64 getCount() const;

    MCAPI float getTimeSumAverageMS() const;

    MCAPI float getTimeSumAverageSeconds() const;

    // NOLINTEND
};

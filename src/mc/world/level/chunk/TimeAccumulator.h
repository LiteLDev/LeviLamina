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
    // symbol: ?getCount@TimeAccumulator@@QEBA_KXZ
    MCAPI uint64 getCount() const;

    // symbol: ?getTimeSumAverageMS@TimeAccumulator@@QEBAMXZ
    MCAPI float getTimeSumAverageMS() const;

    // symbol: ?getTimeSumAverageSeconds@TimeAccumulator@@QEBAMXZ
    MCAPI float getTimeSumAverageSeconds() const;

    // NOLINTEND
};

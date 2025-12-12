#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeAccumulator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk53004e;
    ::ll::UntypedStorage<8, 8> mUnk94cf63;
    ::ll::UntypedStorage<8, 8> mUnk2f3334;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeAccumulator& operator=(TimeAccumulator const&);
    TimeAccumulator(TimeAccumulator const&);
    TimeAccumulator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getTimeSumAverageMS() const;

    MCNAPI float getTimeSumAverageSeconds() const;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RollingAverageTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                             mSampleBufferIdx;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>       mSampleAverage;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>       mSampleSum;
    ::ll::TypedStorage<8, 160, ::std::chrono::nanoseconds[20]> mSampleBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RollingAverageTracker();

    MCAPI void addSample(::std::chrono::nanoseconds dt);

    MCFOLD ::std::chrono::nanoseconds getAverage() const;

    MCAPI ::std::chrono::nanoseconds getLastSample() const;

    MCAPI ::std::vector<::std::chrono::nanoseconds> getLastSamples(uint count) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

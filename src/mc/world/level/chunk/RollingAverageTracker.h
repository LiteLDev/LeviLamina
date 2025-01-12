#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RollingAverageTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk6f93ea;
    ::ll::UntypedStorage<8, 8>   mUnkb7f6cb;
    ::ll::UntypedStorage<8, 8>   mUnka07603;
    ::ll::UntypedStorage<8, 160> mUnk7b6dc3;
    // NOLINTEND

public:
    // prevent constructor by default
    RollingAverageTracker& operator=(RollingAverageTracker const&);
    RollingAverageTracker(RollingAverageTracker const&);

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

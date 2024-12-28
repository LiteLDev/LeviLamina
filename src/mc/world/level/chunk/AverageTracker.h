#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkea20a5;
    ::ll::UntypedStorage<4, 4>  mUnk32875b;
    ::ll::UntypedStorage<4, 4>  mUnk904284;
    ::ll::UntypedStorage<4, 4>  mUnkf17d4b;
    ::ll::UntypedStorage<8, 24> mUnka6c706;
    ::ll::UntypedStorage<8, 8>  mUnkf0fbea;
    // NOLINTEND

public:
    // prevent constructor by default
    AverageTracker& operator=(AverageTracker const&);
    AverageTracker(AverageTracker const&);
    AverageTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addSample(::std::chrono::nanoseconds dt);

    MCAPI ~AverageTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

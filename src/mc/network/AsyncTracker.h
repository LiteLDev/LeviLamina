#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncTracker {
public:
    // prevent constructor by default
    AsyncTracker& operator=(AsyncTracker const&);
    AsyncTracker(AsyncTracker const&);
    AsyncTracker();

public:
    // NOLINTBEGIN
    MCAPI bool hasAsyncOperationTimedOut();

    // NOLINTEND
};

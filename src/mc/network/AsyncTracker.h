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
    // symbol: ?hasAsyncOperationTimedOut@AsyncTracker@@QEAA_NXZ
    MCAPI bool hasAsyncOperationTimedOut();

    // NOLINTEND
};

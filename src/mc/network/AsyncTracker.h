#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncTracker {

public:
    // prevent constructor by default
    AsyncTracker& operator=(AsyncTracker const&) = delete;
    AsyncTracker(AsyncTracker const&)            = delete;
    AsyncTracker()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?hasAsyncOperationTimedOut\@AsyncTracker\@\@QEAA_NXZ
     */
    MCAPI bool hasAsyncOperationTimedOut();
    // NOLINTEND
};

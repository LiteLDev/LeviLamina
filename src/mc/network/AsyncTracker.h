#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncTracker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCTRACKER
public:
    AsyncTracker& operator=(AsyncTracker const&) = delete;
    AsyncTracker(AsyncTracker const&)            = delete;
    AsyncTracker()                               = delete;
#endif

public:
    /**
     * @symbol ?hasAsyncOperationTimedOut\@AsyncTracker\@\@QEAA_NXZ
     */
    MCAPI bool hasAsyncOperationTimedOut();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    isCurrentWaitingOnCall;
    ::ll::TypedStorage<1, 1, bool>                                    mWasCallAborted;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> operationStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  timeLimit;
    ::ll::TypedStorage<1, 1, bool>                                    mHasRetryBeenRequested;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mRetryTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool hasAsyncOperationTimedOut();

    MCNAPI_C void retryCallInSeconds(int seconds);

    MCNAPI_C bool shouldCallBeRetried();

    MCNAPI_C void trackNewAsyncOperation(int timeoutInSeconds);
    // NOLINTEND
};

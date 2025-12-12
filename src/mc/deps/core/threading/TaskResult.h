#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mIsDone;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mRunAtTime;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TaskResult requeueAfter(::std::chrono::nanoseconds requeueDelay);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::TaskResult const& Done();

    MCNAPI static ::TaskResult const& Requeue();
    // NOLINTEND
};

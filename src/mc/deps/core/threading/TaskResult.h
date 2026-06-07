#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mIsDone;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mRunAtTime;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TaskResult();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit TaskResult(bool done);
#endif

    MCNAPI ::std::chrono::steady_clock::time_point getRunAtTime() const;

    MCNAPI bool hasDelay() const;

    MCNAPI bool isDone() const;
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

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(bool done);
#endif
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

class TaskResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                         mIsDone;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                      mRunAtTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>> mWaitOperation;
    ::ll::TypedStorage<1, 1, bool>                                                         mLinkWaitOperation;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskResult& operator=(TaskResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TaskResult(::TaskResult const&);

    MCAPI ~TaskResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TaskResult requeueAfter(::std::chrono::nanoseconds requeueDelay);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::TaskResult const& Done();

    MCAPI static ::TaskResult const& Requeue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TaskResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

class ResetEventObj {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::condition_variable> mCondition;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mSet;
    ::ll::TypedStorage<1, 1, bool> mAutoReset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool wait_until(::std::chrono::steady_clock::time_point t);
    // NOLINTEND

};

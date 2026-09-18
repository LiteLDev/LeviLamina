#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetEventObj {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::condition_variable> mCondition;
    ::ll::TypedStorage<8, 80, ::std::mutex>              mMutex;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>        mSet;
    ::ll::TypedStorage<1, 1, bool>                       mAutoReset;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class ResetEventObj {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::condition_variable>   mCondition;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>          mSet;
    ::ll::TypedStorage<1, 1, bool>                         mAutoReset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool wait_until(::std::chrono::steady_clock::time_point t);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetEventObj {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk5f2ad5;
    ::ll::UntypedStorage<8, 80> mUnk8cb1b5;
    ::ll::UntypedStorage<1, 1>  mUnk89ea7c;
    ::ll::UntypedStorage<1, 1>  mUnk6702f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ResetEventObj& operator=(ResetEventObj const&);
    ResetEventObj(ResetEventObj const&);
    ResetEventObj();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool wait_until(::std::chrono::steady_clock::time_point t);
    // NOLINTEND
};

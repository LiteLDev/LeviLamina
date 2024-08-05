#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetEventObj {
public:
    // prevent constructor by default
    ResetEventObj& operator=(ResetEventObj const&);
    ResetEventObj(ResetEventObj const&);
    ResetEventObj();

public:
    // NOLINTBEGIN
    MCAPI bool wait_until(std::chrono::steady_clock::time_point t);

    // NOLINTEND
};

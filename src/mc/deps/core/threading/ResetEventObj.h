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
    // symbol:
    // ?wait_until@ResetEventObj@@QEAA_NV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool wait_until(std::chrono::steady_clock::time_point t);

    // NOLINTEND
};

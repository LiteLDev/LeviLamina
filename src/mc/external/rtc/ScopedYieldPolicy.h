#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ScopedYieldPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc0e8ff;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedYieldPolicy& operator=(ScopedYieldPolicy const&);
    ScopedYieldPolicy(ScopedYieldPolicy const&);
    ScopedYieldPolicy();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void YieldExecution();
    // NOLINTEND
};

} // namespace rtc

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class LockGuard {

public:
    // prevent constructor by default
    LockGuard& operator=(LockGuard const&) = delete;
    LockGuard(LockGuard const&)            = delete;
    LockGuard()                            = delete;
};

}; // namespace Bedrock::Threading

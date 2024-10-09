#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class LockGuard {
public:
    // prevent constructor by default
    LockGuard& operator=(LockGuard const&);
    LockGuard(LockGuard const&);
    LockGuard();
};

}; // namespace Bedrock::Threading

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class LockGuard {
public:
    MCAPI LockGuard(T0);
    MCAPI ~LockGuard();
};

}; // namespace Bedrock::Threading

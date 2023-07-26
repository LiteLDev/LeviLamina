#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class LockGuard {

public:
    MCAPI LockGuard(T);
    MCAPI ~LockGuard();
};

}; // namespace Bedrock::Threading

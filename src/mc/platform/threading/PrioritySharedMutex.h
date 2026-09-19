#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename Strategy>
class PrioritySharedMutex {
public:
    void lock() { mStrategy.lock(); }
    bool try_lock() { return mStrategy.try_lock(); }
    void unlock() { mStrategy.unlock(); }

    void lock_shared() { mStrategy.lock_shared(); }
    void unlock_shared() { mStrategy.unlock_shared(); }

    Strategy mStrategy;
};

} // namespace Bedrock::Threading

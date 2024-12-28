#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class ThreadsafeAllocatingQueue {
public:
    // prevent constructor by default
    ThreadsafeAllocatingQueue& operator=(ThreadsafeAllocatingQueue const&);
    ThreadsafeAllocatingQueue(ThreadsafeAllocatingQueue const&);
    ThreadsafeAllocatingQueue();
};

} // namespace DataStructures

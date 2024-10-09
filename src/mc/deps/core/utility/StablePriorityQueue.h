#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
struct StablePriorityQueue {
public:
    // prevent constructor by default
    StablePriorityQueue& operator=(StablePriorityQueue const&);
    StablePriorityQueue(StablePriorityQueue const&);
    StablePriorityQueue();
};

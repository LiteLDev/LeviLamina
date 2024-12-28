#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class MovePriorityQueue {
public:
    // prevent constructor by default
    MovePriorityQueue& operator=(MovePriorityQueue const&);
    MovePriorityQueue(MovePriorityQueue const&);
    MovePriorityQueue();
};

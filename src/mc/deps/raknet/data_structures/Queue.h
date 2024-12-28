#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class Queue {
public:
    // prevent constructor by default
    Queue& operator=(Queue const&);
    Queue(Queue const&);
    Queue();
};

} // namespace DataStructures

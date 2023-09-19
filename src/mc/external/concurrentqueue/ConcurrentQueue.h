#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace moodycamel {

template <typename T0, typename T1>
struct ConcurrentQueue {
public:
    // prevent constructor by default
    ConcurrentQueue& operator=(ConcurrentQueue const&);
    ConcurrentQueue(ConcurrentQueue const&);
    ConcurrentQueue();
};

}; // namespace moodycamel

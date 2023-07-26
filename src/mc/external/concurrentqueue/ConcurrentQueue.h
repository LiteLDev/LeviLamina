#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace moodycamel {

template <typename T0, typename T1>
struct ConcurrentQueue {

public:
    // prevent constructor by default
    ConcurrentQueue& operator=(ConcurrentQueue const&) = delete;
    ConcurrentQueue(ConcurrentQueue const&)            = delete;
    ConcurrentQueue()                                  = delete;
};

}; // namespace moodycamel

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace moodycamel {

template <typename T0, typename T1>
struct ConcurrentQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOODYCAMEL_CONCURRENTQUEUE
public:
    ConcurrentQueue& operator=(ConcurrentQueue const&) = delete;
    ConcurrentQueue(ConcurrentQueue const&)            = delete;
    ConcurrentQueue()                                  = delete;
#endif

public:
};

}; // namespace moodycamel

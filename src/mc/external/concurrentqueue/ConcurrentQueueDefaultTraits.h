#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace moodycamel {

struct ConcurrentQueueDefaultTraits {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOODYCAMEL_CONCURRENTQUEUEDEFAULTTRAITS
public:
    ConcurrentQueueDefaultTraits& operator=(ConcurrentQueueDefaultTraits const&) = delete;
    ConcurrentQueueDefaultTraits(ConcurrentQueueDefaultTraits const&)            = delete;
    ConcurrentQueueDefaultTraits()                                               = delete;
#endif

public:
};

}; // namespace moodycamel

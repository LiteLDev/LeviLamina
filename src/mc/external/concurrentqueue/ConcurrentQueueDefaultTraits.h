#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace moodycamel {

struct ConcurrentQueueDefaultTraits {

public:
    // prevent constructor by default
    ConcurrentQueueDefaultTraits& operator=(ConcurrentQueueDefaultTraits const&) = delete;
    ConcurrentQueueDefaultTraits(ConcurrentQueueDefaultTraits const&)            = delete;
    ConcurrentQueueDefaultTraits()                                               = delete;
};

}; // namespace moodycamel

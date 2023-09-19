#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace moodycamel {

struct ConcurrentQueueDefaultTraits {
public:
    // prevent constructor by default
    ConcurrentQueueDefaultTraits& operator=(ConcurrentQueueDefaultTraits const&);
    ConcurrentQueueDefaultTraits(ConcurrentQueueDefaultTraits const&);
    ConcurrentQueueDefaultTraits();
};

}; // namespace moodycamel

#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class MPMCQueue {

public:
    // prevent constructor by default
    MPMCQueue& operator=(MPMCQueue const&) = delete;
    MPMCQueue(MPMCQueue const&)            = delete;
    MPMCQueue()                            = delete;
};

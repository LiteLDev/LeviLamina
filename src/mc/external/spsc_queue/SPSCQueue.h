#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, int T1>
struct SPSCQueue {

public:
    // prevent constructor by default
    SPSCQueue& operator=(SPSCQueue const&) = delete;
    SPSCQueue(SPSCQueue const&)            = delete;
    SPSCQueue()                            = delete;
};

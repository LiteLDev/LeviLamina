#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class LocklessQueue {

public:
    // prevent constructor by default
    LocklessQueue& operator=(LocklessQueue const&) = delete;
    LocklessQueue(LocklessQueue const&)            = delete;
    LocklessQueue()                                = delete;
};

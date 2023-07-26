#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class PrioritySharedMutex {

public:
    // prevent constructor by default
    PrioritySharedMutex& operator=(PrioritySharedMutex const&) = delete;
    PrioritySharedMutex(PrioritySharedMutex const&)            = delete;
    PrioritySharedMutex()                                      = delete;
};

}; // namespace Bedrock::Threading

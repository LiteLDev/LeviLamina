#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class PrioritySharedMutex {
public:
    // prevent constructor by default
    PrioritySharedMutex& operator=(PrioritySharedMutex const&);
    PrioritySharedMutex(PrioritySharedMutex const&);
    PrioritySharedMutex();
};

}; // namespace Bedrock::Threading

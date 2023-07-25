#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class PrioritySharedMutex {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_PRIORITYSHAREDMUTEX
public:
    PrioritySharedMutex& operator=(PrioritySharedMutex const&) = delete;
    PrioritySharedMutex(PrioritySharedMutex const&)            = delete;
    PrioritySharedMutex()                                      = delete;
#endif

public:
};

}; // namespace Bedrock::Threading

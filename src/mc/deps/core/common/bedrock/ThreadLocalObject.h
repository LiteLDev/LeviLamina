#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class ThreadLocalObject {

public:
    // prevent constructor by default
    ThreadLocalObject& operator=(ThreadLocalObject const&) = delete;
    ThreadLocalObject(ThreadLocalObject const&)            = delete;
    ThreadLocalObject()                                    = delete;
};

}; // namespace Bedrock::Threading

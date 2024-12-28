#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class ThreadLocalObject {
public:
    // prevent constructor by default
    ThreadLocalObject& operator=(ThreadLocalObject const&);
    ThreadLocalObject(ThreadLocalObject const&);
    ThreadLocalObject();
};

} // namespace Bedrock::Threading

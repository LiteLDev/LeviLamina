#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0, typename T1>
class InstancedThreadLocal {
public:
    // prevent constructor by default
    InstancedThreadLocal& operator=(InstancedThreadLocal const&);
    InstancedThreadLocal(InstancedThreadLocal const&);
    InstancedThreadLocal();
};

} // namespace Bedrock::Threading

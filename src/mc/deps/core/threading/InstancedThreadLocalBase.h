#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class InstancedThreadLocalBase {
public:
    // prevent constructor by default
    InstancedThreadLocalBase& operator=(InstancedThreadLocalBase const&);
    InstancedThreadLocalBase(InstancedThreadLocalBase const&);
    InstancedThreadLocalBase();
};

} // namespace Bedrock::Threading

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst {

template <typename T0, typename T1, typename T2>
class WorkQueue {
public:
    // prevent constructor by default
    WorkQueue& operator=(WorkQueue const&);
    WorkQueue(WorkQueue const&);
    WorkQueue();
};

} // namespace Bedrock::Threading::Burst

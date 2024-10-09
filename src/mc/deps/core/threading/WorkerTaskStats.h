#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

template <typename T0>
struct WorkerTaskStats {
public:
    // prevent constructor by default
    WorkerTaskStats& operator=(WorkerTaskStats const&);
    WorkerTaskStats(WorkerTaskStats const&);
    WorkerTaskStats();
};

}; // namespace Bedrock::Threading::Burst::Details

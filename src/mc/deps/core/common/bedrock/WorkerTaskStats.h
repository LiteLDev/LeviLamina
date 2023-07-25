#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

template <typename T0>
struct WorkerTaskStats {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_BURST_DETAILS_WORKERTASKSTATS
public:
    WorkerTaskStats& operator=(WorkerTaskStats const&) = delete;
    WorkerTaskStats(WorkerTaskStats const&)            = delete;
    WorkerTaskStats()                                  = delete;
#endif

public:
};

}; // namespace Bedrock::Threading::Burst::Details

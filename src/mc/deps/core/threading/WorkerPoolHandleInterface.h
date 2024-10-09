#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class WorkerPoolHandleInterface {
public:
    // prevent constructor by default
    WorkerPoolHandleInterface& operator=(WorkerPoolHandleInterface const&);
    WorkerPoolHandleInterface(WorkerPoolHandleInterface const&);
    WorkerPoolHandleInterface();
};

}; // namespace Bedrock

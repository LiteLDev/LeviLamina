#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class WorkerPoolManager {
public:
    // prevent constructor by default
    WorkerPoolManager& operator=(WorkerPoolManager const&);
    WorkerPoolManager(WorkerPoolManager const&);
    WorkerPoolManager();

public:
    // NOLINTBEGIN
    MCVAPI ~WorkerPoolManager();

    // NOLINTEND
};

}; // namespace Bedrock

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class WorkerPoolManager {
public:
    // WorkerPoolManager inner types declare
    // clang-format off
    class PoolHandleInterface;
    // clang-format on

    // WorkerPoolManager inner types define
    class PoolHandleInterface {
    public:
        // prevent constructor by default
        PoolHandleInterface& operator=(PoolHandleInterface const&);
        PoolHandleInterface(PoolHandleInterface const&);
        PoolHandleInterface();
    };

public:
    // prevent constructor by default
    WorkerPoolManager& operator=(WorkerPoolManager const&);
    WorkerPoolManager(WorkerPoolManager const&);
    WorkerPoolManager();

public:
    // NOLINTBEGIN
    // symbol: ??1WorkerPoolManager@Bedrock@@UEAA@XZ
    MCVAPI ~WorkerPoolManager();

    // NOLINTEND
};

}; // namespace Bedrock

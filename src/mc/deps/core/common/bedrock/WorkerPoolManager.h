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
        PoolHandleInterface& operator=(PoolHandleInterface const&) = delete;
        PoolHandleInterface(PoolHandleInterface const&)            = delete;
        PoolHandleInterface()                                      = delete;
    };

public:
    // prevent constructor by default
    WorkerPoolManager& operator=(WorkerPoolManager const&) = delete;
    WorkerPoolManager(WorkerPoolManager const&)            = delete;
    WorkerPoolManager()                                    = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1WorkerPoolManager@Bedrock@@UEAA@XZ
    MCVAPI ~WorkerPoolManager();

    // NOLINTEND
};

}; // namespace Bedrock

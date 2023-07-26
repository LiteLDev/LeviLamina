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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_WORKERPOOLMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkerPoolManager(); // NOLINT
#endif
};

}; // namespace Bedrock

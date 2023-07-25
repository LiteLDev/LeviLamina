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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_WORKERPOOLMANAGER_POOLHANDLEINTERFACE
    public:
        PoolHandleInterface& operator=(PoolHandleInterface const&) = delete;
        PoolHandleInterface(PoolHandleInterface const&)            = delete;
        PoolHandleInterface()                                      = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_WORKERPOOLMANAGER
public:
    WorkerPoolManager& operator=(WorkerPoolManager const&) = delete;
    WorkerPoolManager(WorkerPoolManager const&)            = delete;
    WorkerPoolManager()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_WORKERPOOLMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkerPoolManager();
#endif
};

}; // namespace Bedrock

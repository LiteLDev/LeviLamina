#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/WorkerPoolManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

namespace Bedrock {

class WorkerPoolManagerImpl {
public:
    // WorkerPoolManagerImpl inner types declare
    // clang-format off
    struct PoolEntry;
    // clang-format on

    // WorkerPoolManagerImpl inner types define
    struct PoolEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_WORKERPOOLMANAGERIMPL_POOLENTRY
    public:
        PoolEntry& operator=(PoolEntry const&) = delete;
        PoolEntry(PoolEntry const&)            = delete;
        PoolEntry()                            = delete;
#endif

    public:
        /**
         * @symbol ??1PoolEntry\@WorkerPoolManagerImpl\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~PoolEntry();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_WORKERPOOLMANAGERIMPL
public:
    WorkerPoolManagerImpl& operator=(WorkerPoolManagerImpl const&) = delete;
    WorkerPoolManagerImpl(WorkerPoolManagerImpl const&)            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_WORKERPOOLMANAGERIMPL
    /**
     * @symbol
     * ?createWorkerPool\@WorkerPoolManagerImpl\@Bedrock\@\@UEAA?AV?$shared_ptr\@VPoolHandleInterface\@WorkerPoolManager\@Bedrock\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@_KAEBVOSThreadPriority\@Threading\@2\@V?$optional\@_K\@4\@_NV?$optional\@H\@4\@\@Z
     */
    MCVAPI class std::shared_ptr<class Bedrock::WorkerPoolManager::PoolHandleInterface>
    createWorkerPool(std::string, unsigned __int64, class Bedrock::Threading::OSThreadPriority const&, class std::optional<unsigned __int64>, bool, class std::optional<int>);
    /**
     * @symbol ?init\@WorkerPoolManagerImpl\@Bedrock\@\@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @symbol ?tick\@WorkerPoolManagerImpl\@Bedrock\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @symbol ??0WorkerPoolManagerImpl\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI WorkerPoolManagerImpl();
};

}; // namespace Bedrock

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/SmallSet.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

class WorkerPool {

public:
    // prevent constructor by default
    WorkerPool& operator=(WorkerPool const&) = delete;
    WorkerPool(WorkerPool const&)            = delete;
    WorkerPool()                             = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKERPOOL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkerPool();
#endif
    /**
     * @symbol
     * ??0WorkerPool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI WorkerPool(std::string, class Scheduler&);
    /**
     * @symbol
     * ??0WorkerPool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEBVOSThreadPriority\@Threading\@Bedrock\@\@V?$optional\@_K\@2\@_NV?$optional\@H\@2\@\@Z
     */
    MCAPI
    WorkerPool(std::string, uint64_t, class Bedrock::Threading::OSThreadPriority const&, std::optional<uint64_t>, bool, std::optional<int>);
    /**
     * @symbol ?queue\@WorkerPool\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @symbol ?size\@WorkerPool\@\@QEBA_KXZ
     */
    MCAPI uint64_t size() const;
    /**
     * @symbol ?tryPop\@WorkerPool\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@H\@Z
     */
    MCAPI std::shared_ptr<class BackgroundTaskBase> tryPop(int);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_registerPool\@WorkerPool\@\@KAXAEAV1\@\@Z
     */
    MCAPI static void _registerPool(class WorkerPool&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_checkPendingWork\@WorkerPool\@\@AEAA_NXZ
     */
    MCAPI bool _checkPendingWork();
    // NOLINTEND

protected:
    // NOLINTBEGIN
    /**
     * @symbol ?sAllPools\@WorkerPool\@\@1V?$SmallSet\@PEAVWorkerPool\@\@\@\@A
     */
    MCAPI static class SmallSet<class WorkerPool*> sAllPools;
    /**
     * @symbol ?sAllPoolsMutex\@WorkerPool\@\@1Vmutex\@std\@\@A
     */
    MCAPI static std::mutex sAllPoolsMutex;
    // NOLINTEND
};

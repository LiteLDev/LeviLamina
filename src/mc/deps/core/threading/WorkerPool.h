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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKERPOOL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkerPool(); // NOLINT
#endif
    /**
     * @symbol
     * ??0WorkerPool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI WorkerPool(std::string, class Scheduler&); // NOLINT
    /**
     * @symbol
     * ??0WorkerPool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEBVOSThreadPriority\@Threading\@Bedrock\@\@V?$optional\@_K\@2\@_NV?$optional\@H\@2\@\@Z
     */
    MCAPI
    WorkerPool(std::string, unsigned __int64, class Bedrock::Threading::OSThreadPriority const&, class std::optional<unsigned __int64>, bool, class std::optional<int>); // NOLINT
    /**
     * @symbol ?queue\@WorkerPool\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool); // NOLINT
    /**
     * @symbol ?size\@WorkerPool\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const; // NOLINT
    /**
     * @symbol ?tryPop\@WorkerPool\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@H\@Z
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int); // NOLINT

    // protected:
    /**
     * @symbol ?_registerPool\@WorkerPool\@\@KAXAEAV1\@\@Z
     */
    MCAPI static void _registerPool(class WorkerPool&); // NOLINT

    // private:
    /**
     * @symbol ?_checkPendingWork\@WorkerPool\@\@AEAA_NXZ
     */
    MCAPI bool _checkPendingWork(); // NOLINT

protected:
    /**
     * @symbol ?sAllPools\@WorkerPool\@\@1V?$SmallSet\@PEAVWorkerPool\@\@\@\@A
     */
    MCAPI static class SmallSet<class WorkerPool*> sAllPools; // NOLINT
    /**
     * @symbol ?sAllPoolsMutex\@WorkerPool\@\@1Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sAllPoolsMutex; // NOLINT

private:
};

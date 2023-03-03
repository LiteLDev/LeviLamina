/**
 * @file  WorkerPool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkerPool.
 *
 */
class WorkerPool {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKERPOOL
public:
    class WorkerPool& operator=(class WorkerPool const &) = delete;
    WorkerPool(class WorkerPool const &) = delete;
    WorkerPool() = delete;
#endif

public:
    /**
     * @symbol  ??0WorkerPool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEBVOSThreadPriority\@Threading\@Bedrock\@\@V?$optional\@_K\@2\@_NV?$optional\@H\@2\@\@Z
     */
    MCAPI WorkerPool(std::string, unsigned __int64, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, bool, class std::optional<int>);
    /**
     * @symbol  ??0WorkerPool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI WorkerPool(std::string, class Scheduler &);
    /**
     * @symbol  ?queue\@WorkerPool\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @symbol  ?resortPriorityQueue\@WorkerPool\@\@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @symbol  ?size\@WorkerPool\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @symbol  ?tryPop\@WorkerPool\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@H\@Z
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int);

//protected:
    /**
     * @symbol  ?_registerPool\@WorkerPool\@\@KAXAEAV1\@\@Z
     */
    MCAPI static void _registerPool(class WorkerPool &);

//private:
    /**
     * @symbol  ?_checkPendingWork\@WorkerPool\@\@AEAA_NXZ
     */
    MCAPI bool _checkPendingWork();

protected:
    /**
     * @symbol  ?sAllPools\@WorkerPool\@\@1V?$SmallSet\@PEAVWorkerPool\@\@\@\@A
     */
    MCAPI static class SmallSet<class WorkerPool *> sAllPools;
    /**
     * @symbol  ?sAllPoolsMutex\@WorkerPool\@\@1Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sAllPoolsMutex;

private:

};
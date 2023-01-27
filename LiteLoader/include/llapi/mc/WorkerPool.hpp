/**
 * @file  WorkerPool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

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
     * @hash   1332860684
     * @symbol  ??0WorkerPool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI WorkerPool(std::string, class Scheduler &);
    /**
     * @hash   -114355450
     * @symbol  ?queue\@WorkerPool\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @hash   564050195
     * @symbol  ?resortPriorityQueue\@WorkerPool\@\@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @hash   1980388199
     * @symbol  ?size\@WorkerPool\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @hash   -1683234676
     * @symbol  ?tryPop\@WorkerPool\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@H\@Z
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int);

//protected:
    /**
     * @hash   459159563
     * @symbol  ?_registerPool\@WorkerPool\@\@KAXAEAV1\@\@Z
     */
    MCAPI static void _registerPool(class WorkerPool &);

//private:
    /**
     * @hash   1805596571
     * @symbol  ?_checkPendingWork\@WorkerPool\@\@AEAA_NXZ
     */
    MCAPI bool _checkPendingWork();

protected:
    /**
     * @hash   249587937
     * @symbol  ?sAllPools\@WorkerPool\@\@1V?$SmallSet\@PEAVWorkerPool\@\@\@\@A
     */
    MCAPI static class SmallSet<class WorkerPool *> sAllPools;
    /**
     * @hash   -1522751261
     * @symbol  ?sAllPoolsMutex\@WorkerPool\@\@1Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sAllPoolsMutex;

private:

};
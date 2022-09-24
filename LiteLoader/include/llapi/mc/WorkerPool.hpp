/**
 * @file  WorkerPool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1143766886
     * @symbol ??0WorkerPool@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KAEBVOSThreadPriority@Threading@Bedrock@@V?$optional@_K@2@_N@Z
     */
    MCAPI WorkerPool(std::string, unsigned __int64, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, bool);
    /**
     * @hash   581789212
     * @symbol ??0WorkerPool@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVScheduler@@@Z
     */
    MCAPI WorkerPool(std::string, class Scheduler &);
    /**
     * @hash   -865426922
     * @symbol ?queue@WorkerPool@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @hash   -187052029
     * @symbol ?resortPriorityQueue@WorkerPool@@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @hash   1229285975
     * @symbol ?size@WorkerPool@@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @hash   1860630396
     * @symbol ?tryPop@WorkerPool@@QEAA?AV?$shared_ptr@VBackgroundTaskBase@@@std@@H@Z
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int);

//protected:
    /**
     * @hash   -291911909
     * @symbol ?_registerPool@WorkerPool@@KAXAEAV1@@Z
     */
    MCAPI static void _registerPool(class WorkerPool &);

//private:
    /**
     * @hash   1054525099
     * @symbol ?_checkPendingWork@WorkerPool@@AEAA_NXZ
     */
    MCAPI bool _checkPendingWork();

protected:
    /**
     * @hash   -567784847
     * @symbol ?sAllPools@WorkerPool@@1V?$SmallSet@PEAVWorkerPool@@@@A
     */
    MCAPI static class SmallSet<class WorkerPool *> sAllPools;
    /**
     * @hash   1954843251
     * @symbol ?sAllPoolsMutex@WorkerPool@@1Vmutex@std@@A
     */
    MCAPI static class std::mutex sAllPoolsMutex;

private:

};
/**
 * @file  BackgroundWorker.hpp
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
 * @brief MC class BackgroundWorker.
 *
 */
class BackgroundWorker {

#define AFTER_EXTRA
// Add Member There
public:
enum class RunOneResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDWORKER
public:
    class BackgroundWorker& operator=(class BackgroundWorker const &) = delete;
    BackgroundWorker(class BackgroundWorker const &) = delete;
    BackgroundWorker() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BackgroundWorker();
    /**
     * @hash   104740174
     * @vftbl  1
     * @symbol  ?isAsync\@BackgroundWorker\@\@UEBA_NXZ
     */
    virtual bool isAsync() const;
    /**
     * @hash   1926614854
     * @vftbl  2
     * @symbol  ?canTaskRunAgain\@BackgroundWorker\@\@UEBA_NXZ
     */
    virtual bool canTaskRunAgain() const;
    /**
     * @symbol  ??0BackgroundWorker\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NAEBVOSThreadPriority\@Threading\@Bedrock\@\@V?$optional\@_K\@2\@V?$optional\@H\@2\@AEAVWorkerPool\@\@1\@Z
     */
    MCAPI BackgroundWorker(std::string, bool, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, class std::optional<int>, class WorkerPool &, bool);
    /**
     * @hash   858256443
     * @symbol  ?getApproximateTaskCount\@BackgroundWorker\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    /**
     * @hash   240490662
     * @symbol  ?getThreadId\@BackgroundWorker\@\@QEBA?AVid\@thread\@std\@\@XZ
     */
    MCAPI class std::thread::id getThreadId() const;
    /**
     * @hash   -928689838
     * @symbol  ?isIdle\@BackgroundWorker\@\@QEBA_NXZ
     */
    MCAPI bool isIdle() const;
    /**
     * @hash   -1416832506
     * @symbol  ?processTaskSync\@BackgroundWorker\@\@QEAA_NXZ
     */
    MCAPI bool processTaskSync();
    /**
     * @hash   1419195435
     * @symbol  ?queue\@BackgroundWorker\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @hash   1421043826
     * @symbol  ?requestStop\@BackgroundWorker\@\@QEAAX_N\@Z
     */
    MCAPI void requestStop(bool);
    /**
     * @hash   -1393523949
     * @symbol  ?resetWorkerThreadID\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void resetWorkerThreadID();
    /**
     * @hash   1011860451
     * @symbol  ?resortPriorityQueue\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @hash   -543914125
     * @symbol  ?start\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void start();
    /**
     * @hash   -819904987
     * @symbol  ?wake\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void wake();
    /**
     * @hash   1065495912
     * @symbol  ?getLocal\@BackgroundWorker\@\@SAPEAV1\@XZ
     */
    MCAPI static class BackgroundWorker * getLocal();

//private:
    /**
     * @hash   -1296311422
     * @symbol  ?_processNextTask\@BackgroundWorker\@\@AEAA_NXZ
     */
    MCAPI bool _processNextTask();
    /**
     * @hash   -438465875
     * @symbol  ?_runOneTask\@BackgroundWorker\@\@AEAA?AW4RunOneResult\@1\@XZ
     */
    MCAPI enum class BackgroundWorker::RunOneResult _runOneTask();

private:
    /**
     * @hash   866351491
     * @symbol  ?gLocalWorkerMappingSingleton\@BackgroundWorker\@\@0PEAV1\@EA
     */
    MCAPI static class BackgroundWorker * gLocalWorkerMappingSingleton;

};
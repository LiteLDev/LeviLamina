/**
 * @file  BackgroundWorker.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isAsync\@BackgroundWorker\@\@UEBA_NXZ
     */
    virtual bool isAsync() const;
    /**
     * @vftbl 2
     * @symbol ?canTaskRunAgain\@BackgroundWorker\@\@UEBA_NXZ
     */
    virtual bool canTaskRunAgain() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDWORKER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BackgroundWorker();
#endif
    /**
     * @symbol ??0BackgroundWorker\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NAEBVOSThreadPriority\@Threading\@Bedrock\@\@V?$optional\@_K\@2\@V?$optional\@H\@2\@AEAVWorkerPool\@\@1\@Z
     */
    MCAPI BackgroundWorker(std::string, bool, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, class std::optional<int>, class WorkerPool &, bool);
    /**
     * @symbol ?queue\@BackgroundWorker\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?start\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void start();
    /**
     * @symbol ?wake\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void wake();

//private:
    /**
     * @symbol ?_processNextTask\@BackgroundWorker\@\@AEAA_NXZ
     */
    MCAPI bool _processNextTask();
    /**
     * @symbol ?_runOneTask\@BackgroundWorker\@\@AEAA?AW4RunOneResult\@1\@XZ
     */
    MCAPI enum class BackgroundWorker::RunOneResult _runOneTask();

private:
    /**
     * @symbol ?gLocalWorkerMappingSingleton\@BackgroundWorker\@\@0PEAV1\@EA
     */
    MCAPI static class BackgroundWorker * gLocalWorkerMappingSingleton;

};

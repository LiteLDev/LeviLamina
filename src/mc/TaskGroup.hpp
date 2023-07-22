/**
 * @file  TaskGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskGroup.
 *
 */
class TaskGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKGROUP
public:
    class TaskGroup& operator=(class TaskGroup const &) = delete;
    TaskGroup(class TaskGroup const &) = delete;
    TaskGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TaskGroup();
    /**
     * @vftbl  1
     * @symbol  ?queue\@TaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @vftbl  2
     * @symbol  ?queueSync\@TaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @vftbl  3
     * @symbol  ?taskRegister\@TaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    virtual void taskRegister(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @vftbl  4
     * @symbol  ?requeueTask\@TaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    virtual void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @vftbl  5
     * @symbol  ?getState\@TaskGroup\@\@UEBA?AW4TaskGroupState\@\@XZ
     */
    virtual enum class TaskGroupState getState() const;
    /**
     * @vftbl  6
     * @symbol  ?processCoroutines\@TaskGroup\@\@UEAAXXZ
     */
    virtual void processCoroutines();
    /**
     * @vftbl  7
     * @symbol  ?taskComplete\@TaskGroup\@\@UEAAXV?$not_null\@PEAVBackgroundTaskBase\@\@\@gsl\@\@\@Z
     */
    virtual void taskComplete(class gsl::not_null<class BackgroundTaskBase *>);
    /**
     * @symbol  ??0TaskGroup\@\@QEAA\@AEAVWorkerPool\@\@AEAVScheduler\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TaskGroup(class WorkerPool &, class Scheduler &, std::string);
    /**
     * @symbol  ?disableOwnerThreadChecks\@TaskGroup\@\@QEAAXXZ
     */
    MCAPI void disableOwnerThreadChecks();
    /**
     * @symbol  ?flush\@TaskGroup\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void flush(class std::function<void (void)>);
    /**
     * @symbol  ?getName\@TaskGroup\@\@QEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @symbol  ?getScheduler\@TaskGroup\@\@QEAAAEAVScheduler\@\@XZ
     */
    MCAPI class Scheduler & getScheduler();
    /**
     * @symbol  ?isEmpty\@TaskGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ?pause\@TaskGroup\@\@QEAAXXZ
     */
    MCAPI void pause();
    /**
     * @symbol  ?queue\@TaskGroup\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @symbol  ?queueSync\@TaskGroup\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&);
    /**
     * @symbol  ?sync_DEPRECATED_ASK_TOMMO\@TaskGroup\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void sync_DEPRECATED_ASK_TOMMO(class std::function<void (void)>);
    /**
     * @symbol  ?queueChildSync_DEPRECATED\@TaskGroup\@\@SA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @symbol  ?queueChild_DEPRECATED\@TaskGroup\@\@SA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);

//private:
    /**
     * @symbol  ?_forAllTasks\@TaskGroup\@\@AEAAXAEAV?$UniqueLock\@Vmutex\@std\@\@\@Threading\@Bedrock\@\@V?$function\@$$A6AXAEBV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _forAllTasks(class Bedrock::Threading::UniqueLock<class std::mutex> &, class std::function<void (class std::shared_ptr<class BackgroundTaskBase> const &)>);
    /**
     * @symbol  ?_isEmptyInternal\@TaskGroup\@\@AEBA_NXZ
     */
    MCAPI bool _isEmptyInternal() const;
    /**
     * @symbol  ?_queueInternal\@TaskGroup\@\@AEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void _queueInternal(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol  ?getCurrentTaskGroup\@TaskGroup\@\@CAPEAVIBackgroundTaskOwner\@\@XZ
     */
    MCAPI static class IBackgroundTaskOwner * getCurrentTaskGroup();

private:

};
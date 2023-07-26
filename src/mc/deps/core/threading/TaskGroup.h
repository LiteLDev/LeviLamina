#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/UniqueLock.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"

class TaskGroup {

public:
    // prevent constructor by default
    TaskGroup& operator=(TaskGroup const&) = delete;
    TaskGroup(TaskGroup const&)            = delete;
    TaskGroup()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?queue\@TaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queue(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult(void)>&&, class std::function<void(void)>&&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?queueSync\@TaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueSync(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult(void)>&&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?taskRegister\@TaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    virtual void taskRegister(class std::shared_ptr<class BackgroundTaskBase>); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?requeueTask\@TaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    virtual void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getState\@TaskGroup\@\@UEBA?AW4TaskGroupState\@\@XZ
     */
    virtual enum class TaskGroupState getState() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?processCoroutines\@TaskGroup\@\@UEAAXXZ
     */
    virtual void processCoroutines(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?taskComplete\@TaskGroup\@\@UEAAXV?$not_null\@PEAVBackgroundTaskBase\@\@\@gsl\@\@\@Z
     */
    virtual void taskComplete(class gsl::not_null<class BackgroundTaskBase*>); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TASKGROUP
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TaskGroup(); // NOLINT
#endif
    /**
     * @symbol
     * ??0TaskGroup\@\@QEAA\@AEAVWorkerPool\@\@AEAVScheduler\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TaskGroup(class WorkerPool&, class Scheduler&, std::string); // NOLINT
    /**
     * @symbol ?disableOwnerThreadChecks\@TaskGroup\@\@QEAAXXZ
     */
    MCAPI void disableOwnerThreadChecks(); // NOLINT
    /**
     * @symbol ?flush\@TaskGroup\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void flush(class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?getName\@TaskGroup\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> getName() const; // NOLINT
    /**
     * @symbol ?getScheduler\@TaskGroup\@\@QEAAAEAVScheduler\@\@XZ
     */
    MCAPI class Scheduler& getScheduler(); // NOLINT
    /**
     * @symbol ?isEmpty\@TaskGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?pause\@TaskGroup\@\@QEAAXXZ
     */
    MCAPI void pause(); // NOLINT
    /**
     * @symbol
     * ?queue\@TaskGroup\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queue(class std::basic_string_view<char, struct std::char_traits<char>>, class std::function<class TaskResult(void)>&&, class std::function<void(void)>&&); // NOLINT
    /**
     * @symbol
     * ?queueSync\@TaskGroup\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueSync(class std::basic_string_view<char, struct std::char_traits<char>>, class std::function<class TaskResult(void)>&&); // NOLINT
    /**
     * @symbol ?sync_DEPRECATED_ASK_TOMMO\@TaskGroup\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void sync_DEPRECATED_ASK_TOMMO(class std::function<void(void)>); // NOLINT
    /**
     * @symbol
     * ?queueChildSync_DEPRECATED\@TaskGroup\@\@SA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult(void)>&&); // NOLINT
    /**
     * @symbol
     * ?queueChild_DEPRECATED\@TaskGroup\@\@SA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueChild_DEPRECATED(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult(void)>&&, class std::function<void(void)>&&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_forAllTasks\@TaskGroup\@\@AEAAXAEAV?$UniqueLock\@Vmutex\@std\@\@\@Threading\@Bedrock\@\@V?$function\@$$A6AXAEBV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    _forAllTasks(class Bedrock::Threading::UniqueLock<class std::mutex>&, class std::function<void(class std::shared_ptr<class BackgroundTaskBase> const&)>); // NOLINT
    /**
     * @symbol ?_isEmptyInternal\@TaskGroup\@\@AEBA_NXZ
     */
    MCAPI bool _isEmptyInternal() const; // NOLINT
    /**
     * @symbol ?_queueInternal\@TaskGroup\@\@AEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void _queueInternal(class std::shared_ptr<class BackgroundTaskBase>); // NOLINT
    /**
     * @symbol ?getCurrentTaskGroup\@TaskGroup\@\@CAPEAVIBackgroundTaskOwner\@\@XZ
     */
    MCAPI static class IBackgroundTaskOwner* getCurrentTaskGroup(); // NOLINT

private:
};

/**
 * @file  TaskGroup.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~TaskGroup();
    /**
     * @hash   1511263348
     * @vftbl  1
     * @symbol ?queue@TaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @hash   25558471
     * @vftbl  2
     * @symbol ?queueSync@TaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @hash   1482031345
     * @vftbl  3
     * @symbol ?taskRegister@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     */
    virtual void taskRegister(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @hash   -2042542154
     * @vftbl  4
     * @symbol ?requeueTask@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
     */
    virtual void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @hash   -1870602886
     * @vftbl  5
     * @symbol ?getState@TaskGroup@@UEBA?AW4TaskGroupState@@XZ
     */
    virtual enum TaskGroupState getState() const;
    /**
     * @hash   1347011895
     * @vftbl  6
     * @symbol ?processCoroutines@TaskGroup@@UEAAXXZ
     */
    virtual void processCoroutines();
    /**
     * @hash   -1538065375
     * @vftbl  7
     * @symbol ?taskComplete@TaskGroup@@UEAAXV?$not_null@PEAVBackgroundTaskBase@@@gsl@@@Z
     */
    virtual void taskComplete(class gsl::not_null<class BackgroundTaskBase *>);
    /**
     * @hash   -32700187
     * @symbol ??0TaskGroup@@QEAA@AEAVWorkerPool@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI TaskGroup(class WorkerPool &, class Scheduler &, std::string);
    /**
     * @hash   -909818189
     * @symbol ?disableOwnerThreadChecks@TaskGroup@@QEAAXXZ
     */
    MCAPI void disableOwnerThreadChecks();
    /**
     * @hash   63647212
     * @symbol ?flush@TaskGroup@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void flush(class std::function<void (void)>);
    /**
     * @hash   1343773792
     * @symbol ?getName@TaskGroup@@QEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    MCAPI class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @hash   1409843482
     * @symbol ?getScheduler@TaskGroup@@QEAAAEAVScheduler@@XZ
     */
    MCAPI class Scheduler & getScheduler();
    /**
     * @hash   -1954225990
     * @symbol ?isEmpty@TaskGroup@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   1135687169
     * @symbol ?pause@TaskGroup@@QEAAXXZ
     */
    MCAPI void pause();
    /**
     * @hash   1114933671
     * @symbol ?queue@TaskGroup@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @hash   482057570
     * @symbol ?queueSync@TaskGroup@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&);
    /**
     * @hash   -1141936692
     * @symbol ?sync_DEPRECATED_ASK_TOMMO@TaskGroup@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void sync_DEPRECATED_ASK_TOMMO(class std::function<void (void)>);
    /**
     * @hash   -407998489
     * @symbol ?queueChildSync_DEPRECATED@TaskGroup@@SA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @hash   1877180636
     * @symbol ?queueChild_DEPRECATED@TaskGroup@@SA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);

//private:
    /**
     * @hash   -2059526426
     * @symbol ?_forAllTasks@TaskGroup@@AEAAXAEAV?$UniqueLock@Vmutex@std@@@Threading@Bedrock@@V?$function@$$A6AXAEBV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z@std@@@Z
     */
    MCAPI void _forAllTasks(class Bedrock::Threading::UniqueLock<class std::mutex> &, class std::function<void (class std::shared_ptr<class BackgroundTaskBase> const &)>);
    /**
     * @hash   -976918724
     * @symbol ?_isEmptyInternal@TaskGroup@@AEBA_NXZ
     */
    MCAPI bool _isEmptyInternal() const;
    /**
     * @hash   -1910083899
     * @symbol ?_queueInternal@TaskGroup@@AEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     */
    MCAPI void _queueInternal(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @hash   881432500
     * @symbol ?getCurrentTaskGroup@TaskGroup@@CAPEAVIBackgroundTaskOwner@@XZ
     */
    MCAPI static class IBackgroundTaskOwner * getCurrentTaskGroup();

private:

};
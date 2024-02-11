#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/UniqueLock.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"
#include "mc/enums/TaskGroupState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class TaskGroup {
public:
    // prevent constructor by default
    TaskGroup& operator=(TaskGroup const&);
    TaskGroup(TaskGroup const&);
    TaskGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TaskGroup@@UEAA@XZ
    virtual ~TaskGroup();

    // vIndex: 1, symbol:
    // ?queue@TaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(
        struct TaskStartInfoEx<void> const& startInfo,
        std::function<class TaskResult()>&& task,
        std::function<void()>&&             callback
    );

    // vIndex: 2, symbol:
    // ?queueSync@TaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueSync(struct TaskStartInfoEx<void> const& startInfo, std::function<class TaskResult()>&& task);

    // vIndex: 3, symbol: ?taskRegister@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
    virtual void taskRegister(std::shared_ptr<class BackgroundTaskBase> task);

    // vIndex: 4, symbol: ?requeueTask@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
    virtual void requeueTask(std::shared_ptr<class BackgroundTaskBase> task, bool queueImmediate);

    // vIndex: 5, symbol: ?getState@TaskGroup@@UEBA?AW4TaskGroupState@@XZ
    virtual ::TaskGroupState getState() const;

    // vIndex: 6, symbol: ?processCoroutines@TaskGroup@@UEAAXXZ
    virtual void processCoroutines();

    // vIndex: 7, symbol: ?taskComplete@TaskGroup@@UEAAXV?$not_null@PEAVBackgroundTaskBase@@@gsl@@@Z
    virtual void taskComplete(gsl::not_null<class BackgroundTaskBase*> task);

    // symbol:
    // ??0TaskGroup@@QEAA@AEAVWorkerPool@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI TaskGroup(class WorkerPool& workers, class Scheduler& context, std::string name);

    // symbol: ?disableOwnerThreadChecks@TaskGroup@@QEAAXXZ
    MCAPI void disableOwnerThreadChecks();

    // symbol: ?flush@TaskGroup@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void flush(std::function<void()> waitFn);

    // symbol: ?getName@TaskGroup@@QEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    MCAPI std::string_view getName() const;

    // symbol: ?getScheduler@TaskGroup@@QEAAAEAVScheduler@@XZ
    MCAPI class Scheduler& getScheduler();

    // symbol: ?isEmpty@TaskGroup@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?pause@TaskGroup@@QEAAXXZ
    MCAPI void pause();

    // symbol:
    // ?queue@TaskGroup@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queue(std::string_view name, std::function<class TaskResult()>&& task, std::function<void()>&& callback);

    // symbol:
    // ?queueSync@TaskGroup@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queueSync(std::string_view name, std::function<class TaskResult()>&& task);

    // symbol: ?sync_DEPRECATED_ASK_TOMMO@TaskGroup@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void sync_DEPRECATED_ASK_TOMMO(std::function<void()> waitFn);

    // symbol:
    // ?queueChildSync_DEPRECATED@TaskGroup@@SA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
    MCAPI static std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const& startInfo, std::function<class TaskResult()>&& task);

    // symbol:
    // ?queueChild_DEPRECATED@TaskGroup@@SA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
    MCAPI static std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(
        struct TaskStartInfoEx<void> const& startInfo,
        std::function<class TaskResult()>&& task,
        std::function<void()>&&             callback
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_forAllTasks@TaskGroup@@AEAAXAEAV?$UniqueLock@VMutex@Threading@Bedrock@@@Threading@Bedrock@@V?$function@$$A6AXAEBV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z@std@@@Z
    MCAPI void _forAllTasks(
        class Bedrock::Threading::UniqueLock<class Bedrock::Threading::Mutex>& lock,
        std::function<void(std::shared_ptr<class BackgroundTaskBase> const&)>  callback
    );

    // symbol: ?_isEmptyInternal@TaskGroup@@AEBA_NXZ
    MCAPI bool _isEmptyInternal() const;

    // symbol: ?_queueInternal@TaskGroup@@AEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
    MCAPI void _queueInternal(std::shared_ptr<class BackgroundTaskBase> bgtask);

    // symbol: ?getCurrentTaskGroup@TaskGroup@@CAPEAVIBackgroundTaskOwner@@XZ
    MCAPI static class IBackgroundTaskOwner* getCurrentTaskGroup();

    // NOLINTEND
};

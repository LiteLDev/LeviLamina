#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"
#include "mc/platform/threading/UniqueLock.h"

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
    // vIndex: 0
    virtual ~TaskGroup();

    // vIndex: 1
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(
        struct TaskStartInfoEx<void> const& startInfo,
        std::function<class TaskResult()>&& task,
        std::function<void()>&&             callback
    );

    // vIndex: 2
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueSync(struct TaskStartInfoEx<void> const& startInfo, std::function<class TaskResult()>&& task);

    // vIndex: 3
    virtual void taskRegister(std::shared_ptr<class BackgroundTaskBase> task);

    // vIndex: 4
    virtual void requeueTask(std::shared_ptr<class BackgroundTaskBase> task, bool queueImmediate);

    // vIndex: 5
    virtual ::TaskGroupState getState() const;

    // vIndex: 6
    virtual void processCoroutines();

    // vIndex: 7
    virtual void taskComplete(gsl::not_null<class BackgroundTaskBase*> task);

    MCAPI TaskGroup(class WorkerPool& workers, class Scheduler& context, std::string name);

    MCAPI void disableOwnerThreadChecks();

    MCAPI void flush(std::function<void()> waitFn);

    MCAPI std::string_view getName() const;

    MCAPI class Scheduler& getScheduler();

    MCAPI bool isEmpty() const;

    MCAPI void pause();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queue(std::string_view name, std::function<class TaskResult()>&& task, std::function<void()>&& callback);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queueSync(std::string_view name, std::function<class TaskResult()>&& task);

    MCAPI void sync_DEPRECATED_ASK_TOMMO(std::function<void()> waitFn);

    MCAPI static std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const& startInfo, std::function<class TaskResult()>&& task);

    MCAPI static std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(
        struct TaskStartInfoEx<void> const& startInfo,
        std::function<class TaskResult()>&& task,
        std::function<void()>&&             callback
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _forAllTasks(
        class Bedrock::Threading::UniqueLock<class Bedrock::Threading::Mutex>& lock,
        std::function<void(std::shared_ptr<class BackgroundTaskBase> const&)>  callback
    );

    MCAPI bool _isEmptyInternal() const;

    MCAPI void _queueInternal(std::shared_ptr<class BackgroundTaskBase> bgtask);

    MCAPI static class IBackgroundTaskOwner* getCurrentTaskGroup();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class WorkerPool& workers, class Scheduler& context, std::string name);

    MCAPI void dtor$();

    MCAPI ::TaskGroupState getState$() const;

    MCAPI void processCoroutines$();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue$(
        struct TaskStartInfoEx<void> const& startInfo,
        std::function<class TaskResult()>&& task,
        std::function<void()>&&             callback
    );

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queueSync$(struct TaskStartInfoEx<void> const& startInfo, std::function<class TaskResult()>&& task);

    MCAPI void requeueTask$(std::shared_ptr<class BackgroundTaskBase> task, bool queueImmediate);

    MCAPI void taskComplete$(gsl::not_null<class BackgroundTaskBase*> task);

    MCAPI void taskRegister$(std::shared_ptr<class BackgroundTaskBase> task);

    // NOLINTEND
};

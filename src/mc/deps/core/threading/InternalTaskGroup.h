#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"

class InternalTaskGroup : public ::IBackgroundTaskOwner {
public:
    // prevent constructor by default
    InternalTaskGroup& operator=(InternalTaskGroup const&);
    InternalTaskGroup(InternalTaskGroup const&);
    InternalTaskGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InternalTaskGroup() = default;

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
    virtual void taskRegister(std::shared_ptr<class BackgroundTaskBase>);

    // vIndex: 4
    virtual void requeueTask(std::shared_ptr<class BackgroundTaskBase>, bool);

    // vIndex: 5
    virtual ::TaskGroupState getState() const;

    // vIndex: 6
    virtual void processCoroutines();

    // vIndex: 7
    virtual void taskComplete(gsl::not_null<class BackgroundTaskBase*> task);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::TaskGroupState getState$() const;

    MCAPI void processCoroutines$();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue$(
        struct TaskStartInfoEx<void> const& startInfo,
        std::function<class TaskResult()>&& task,
        std::function<void()>&&             callback
    );

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          queueSync$(struct TaskStartInfoEx<void> const& startInfo, std::function<class TaskResult()>&& task);

    MCAPI void requeueTask$(std::shared_ptr<class BackgroundTaskBase>, bool);

    MCAPI void taskComplete$(gsl::not_null<class BackgroundTaskBase*> task);

    MCAPI void taskRegister$(std::shared_ptr<class BackgroundTaskBase>);

    // NOLINTEND
};

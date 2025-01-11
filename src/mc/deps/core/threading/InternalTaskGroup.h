#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class TaskResult;
// clang-format on

class InternalTaskGroup : public ::IBackgroundTaskOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queue(
        ::TaskStartInfoEx<void> const&                startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    ) /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queueSync(
        ::TaskStartInfoEx<void> const&                startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task
    ) /*override*/;

    // vIndex: 3
    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase>) /*override*/;

    // vIndex: 4
    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase>, bool) /*override*/;

    // vIndex: 5
    virtual ::TaskGroupState getState() const /*override*/;

    // vIndex: 6
    virtual void processCoroutines() /*override*/;

    // vIndex: 7
    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*> task) /*override*/;

    // vIndex: 0
    virtual ~InternalTaskGroup() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> $queue(
        ::TaskStartInfoEx<void> const&                startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $queueSync(::TaskStartInfoEx<void> const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task);

    MCAPI void $taskRegister(::std::shared_ptr<::BackgroundTaskBase>);

    MCAPI void $requeueTask(::std::shared_ptr<::BackgroundTaskBase>, bool);

    MCAPI ::TaskGroupState $getState() const;

    MCAPI void $processCoroutines();

    MCAPI void $taskComplete(::gsl::not_null<::BackgroundTaskBase*> task);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

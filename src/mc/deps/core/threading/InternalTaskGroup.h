#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class TaskResult;
struct TaskStartInfo;
// clang-format on

class InternalTaskGroup : public ::IBackgroundTaskOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&, ::std::function<void()>&&) /*override*/
        ;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&) /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&, ::std::function<void()>&&);

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&);

    MCNAPI void $taskRegister(::std::shared_ptr<::BackgroundTaskBase>);

    MCNAPI void $requeueTask(::std::shared_ptr<::BackgroundTaskBase>, bool);

    MCNAPI ::TaskGroupState $getState() const;

    MCNAPI void $processCoroutines();

    MCNAPI void $taskComplete(::gsl::not_null<::BackgroundTaskBase*> task);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

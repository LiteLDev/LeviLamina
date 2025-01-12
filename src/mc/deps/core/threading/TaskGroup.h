#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class Scheduler;
class TaskResult;
class WorkerPool;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class TaskGroup : public ::IBackgroundTaskOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka60b44;
    ::ll::UntypedStorage<8, 24> mUnk52e5c4;
    ::ll::UntypedStorage<8, 32> mUnkb19a11;
    ::ll::UntypedStorage<1, 1>  mUnk10d96b;
    ::ll::UntypedStorage<8, 80> mUnk77531a;
    ::ll::UntypedStorage<4, 4>  mUnk10adf7;
    ::ll::UntypedStorage<8, 16> mUnk5e5b8e;
    ::ll::UntypedStorage<8, 8>  mUnk5bad41;
    ::ll::UntypedStorage<8, 16> mUnkfe21d9;
    ::ll::UntypedStorage<8, 16> mUnke12816;
    ::ll::UntypedStorage<8, 16> mUnk71fca4;
    ::ll::UntypedStorage<8, 80> mUnk6a91ad;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskGroup& operator=(TaskGroup const&);
    TaskGroup(TaskGroup const&);
    TaskGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TaskGroup() /*override*/;

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
    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase> task) /*override*/;

    // vIndex: 4
    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate) /*override*/;

    // vIndex: 5
    virtual ::TaskGroupState getState() const /*override*/;

    // vIndex: 6
    virtual void processCoroutines() /*override*/;

    // vIndex: 7
    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*> task) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TaskGroup(::WorkerPool& workers, ::Scheduler& context, ::std::string name);

    MCAPI void _forAllTasks(
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>&        lock,
        ::std::function<void(::std::shared_ptr<::BackgroundTaskBase> const&)> callback
    );

    MCAPI void _queueInternal(::std::shared_ptr<::BackgroundTaskBase> bgtask);

    MCAPI void disableOwnerThreadChecks();

    MCAPI void flush(::std::function<void()> waitFn);

    MCAPI ::std::string_view getName() const;

    MCFOLD ::Scheduler& getScheduler();

    MCAPI bool isEmpty() const;

    MCAPI void pause();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queue(
        ::std::string_view                            name,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    queueSync(::std::string_view name, ::brstd::move_only_function<::TaskResult()>&& task);

    MCAPI void sync_DEPRECATED_ASK_TOMMO(::std::function<void()> waitFn);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::IBackgroundTaskOwner* getCurrentTaskGroup();

    MCAPI static ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queueChildSync_DEPRECATED(
        ::TaskStartInfoEx<void> const&                startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task
    );

    MCAPI static ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(
        ::TaskStartInfoEx<void> const&                startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorkerPool& workers, ::Scheduler& context, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCAPI void $taskRegister(::std::shared_ptr<::BackgroundTaskBase> task);

    MCAPI void $requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);

    MCFOLD ::TaskGroupState $getState() const;

    MCAPI void $processCoroutines();

    MCAPI void $taskComplete(::gsl::not_null<::BackgroundTaskBase*> task);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

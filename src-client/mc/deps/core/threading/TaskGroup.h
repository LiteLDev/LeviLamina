#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskResult;
struct BackgroundTaskBase;
struct TaskStartInfo;
struct WorkerPool;
// clang-format on

class TaskGroup : public ::IBackgroundTaskOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Scheduler>>  mScheduler;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::WorkerPool>> mWorkers;
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<1, 1, bool>                                      mCheckOwnerThread;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>              mLock;
    ::ll::TypedStorage<4, 4, ::std::atomic<::TaskGroupState>>           mState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mTasks;
    ::ll::TypedStorage<8, 8, uint64>                                    mTaskCount;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mEnumCurr;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mEnumNext;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>        mResumeTaskHandle;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>              mResumeTaskMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    ) /*override*/;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<void> queueSync_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task
    ) /*override*/;

    // vIndex: 0
    virtual ~TaskGroup() /*override*/;

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

    // vIndex: 8
    virtual bool _workerPoolIsAsync() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TaskGroup(::WorkerPool& workers, ::Scheduler& context, ::std::string name);

    MCAPI void _doWorkUntil(::Bedrock::Threading::SharedAsync<void> task, ::std::promise<void>* workStarted);

    MCAPI void _forAllTasks(
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>&        lock,
        ::std::function<void(::std::shared_ptr<::BackgroundTaskBase> const&)> callback
    );

    MCAPI void _queueInternal(::std::shared_ptr<::BackgroundTaskBase> bgtask);

    MCAPI uint64 count() const;

    MCAPI void flush(::std::function<void()> waitFn);

    MCAPI bool isEmpty() const;

    MCAPI void kick(uint count);

    MCAPI void resume();

    MCAPI void sync_DEPRECATED_ASK_TOMMO(::std::function<void()> waitFn);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::IBackgroundTaskOwner* getCurrentTaskGroup();
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
    MCAPI ::Bedrock::Threading::Async<void> $queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );

    MCAPI ::Bedrock::Threading::Async<void>
    $queueSync_DEPRECATED(::TaskStartInfo const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task);

    MCAPI void $taskRegister(::std::shared_ptr<::BackgroundTaskBase> task);

    MCAPI void $requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);

    MCFOLD ::TaskGroupState $getState() const;

    MCAPI void $processCoroutines();

    MCAPI void $taskComplete(::gsl::not_null<::BackgroundTaskBase*> task);

    MCAPI bool $_workerPoolIsAsync() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

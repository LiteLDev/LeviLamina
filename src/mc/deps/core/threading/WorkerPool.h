#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/BackgroundTaskQueue.h"
#include "mc/deps/core/threading/BackgroundWorkerPerfInfo.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/threading/OSThreadPriority.h"
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class BackgroundWorker;
class Scheduler;
// clang-format on

class WorkerPool : public ::Bedrock::EnableNonOwnerReferences {
public:
    // WorkerPool inner types define
    using PendingJobQueue =
        ::MovePriorityQueue<::std::shared_ptr<::BackgroundTaskBase>, ::BackgroundTaskBase::PendingComparer>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                            mAsync;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BackgroundWorker>>> mWorkers;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mName;
    ::ll::TypedStorage<8, 64, ::BackgroundWorkerPerfInfo>                           mPerfInfo;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>               mLastPerfInfoUpdate;
    ::ll::TypedStorage<8, 8, ::Scheduler*>                                          mOwnerScheduler;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                         mSuspendLock;
    ::ll::TypedStorage<4, 4, ::Bedrock::Threading::OSThreadPriority>                mPoolPriority;
    ::ll::TypedStorage<4, 4, float>                                                 mMinBacklogDurationSeconds;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                       mPendingWorkQueueLock;
    ::ll::TypedStorage<
        8,
        24,
        ::MovePriorityQueue<::std::shared_ptr<::BackgroundTaskBase>, ::BackgroundTaskBase::PendingComparer>>
                                                                      mPendingWorkQueue;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextPendingWorkTime;
    ::ll::TypedStorage<8, 360, ::BackgroundTaskQueue>                 mTaskQueue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkerPool() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::std::thread::id> getThreadIds() const;

    MCAPI void kick(uint64 count);
#endif

    MCAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _registerPool(::WorkerPool& pool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::brstd::flat_set<::WorkerPool*, ::std::less<::WorkerPool*>, ::std::vector<::WorkerPool*>>&
    sAllPools();

    MCAPI static ::std::mutex& sAllPoolsMutex();
    // NOLINTEND
};

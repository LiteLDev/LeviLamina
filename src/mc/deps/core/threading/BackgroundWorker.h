#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/BackgroundTaskQueue.h"
#include "mc/deps/core/threading/ITaskExecutionContext.h"
#include "mc/deps/core/threading/ResetEventObj.h"
#include "mc/deps/core/threading/SPSCQueue.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/threading/OSThreadPriority.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class WorkerPool;
struct RunTaskOptions;
// clang-format on

class BackgroundWorker : public ::ITaskExecutionContext {
public:
    // BackgroundWorker inner types define
    enum class RunOneResult : int {
        NoTasks      = 0,
        TaskExecuted = 1,
        Retry        = 2,
    };

    enum class State : int {
        Initializing = 0,
        Off          = 1,
        Running      = 2,
    };

    using SortingJobQueue =
        ::MovePriorityQueue<::std::shared_ptr<::BackgroundTaskBase>, ::BackgroundTaskBase::PriorityComparer>;

    using TaskPipe = ::SPSCQueue<::std::shared_ptr<::BackgroundTaskBase>, 512>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                               mAsync;
    ::ll::TypedStorage<4, 4, ::Bedrock::Threading::OSThreadPriority>   mPriority;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                 mCoreAffinity;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                     mIdealCore;
    ::ll::TypedStorage<8, 32, ::std::string>                           mName;
    ::ll::TypedStorage<1, 1, ::Core::Profile::ThreadFrameType>         mFrameType;
    ::ll::TypedStorage<8, 16, ::std::thread>                           mThread;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                        mWorkerThreadID;
    ::ll::TypedStorage<4, 4, ::std::atomic<::BackgroundWorker::State>> mState;
    ::ll::TypedStorage<8, 160, ::ResetEventObj>                        mResetEvent;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                      mIdle;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>  mIdleSinceTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>> mCurrentTask;
    ::ll::TypedStorage<8, 8, ::WorkerPool&>                            mWorkerPool;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>               mMaxSpinlockDuration;
    ::ll::TypedStorage<8, 360, ::BackgroundTaskQueue>                  mTaskQueue;
    // NOLINTEND

public:
    static ::BackgroundWorker* getLocal() { return gLocalWorkerMappingSingleton(); }

public:
    // prevent constructor by default
    BackgroundWorker& operator=(BackgroundWorker const&);
    BackgroundWorker(BackgroundWorker const&);
    BackgroundWorker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BackgroundWorker() /*override*/ = default;

    virtual bool isAsync() const /*override*/;

    virtual bool canTaskRunAgain() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BackgroundWorker(
        ::std::string_view                            name,
        ::Core::Profile::ThreadFrameType              frameType,
        bool                                          async,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64> const                 coreAffinity,
        ::std::optional<int> const                    idealCore,
        ::WorkerPool&                                 workerPool
    );

    MCAPI bool _processNextTask(::RunTaskOptions const& options);

    MCAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task);

    MCAPI void requestStop(bool wait);

    MCAPI void start();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BackgroundWorker*& gLocalWorkerMappingSingleton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view                            name,
        ::Core::Profile::ThreadFrameType              frameType,
        bool                                          async,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64> const                 coreAffinity,
        ::std::optional<int> const                    idealCore,
        ::WorkerPool&                                 workerPool
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isAsync() const;

    MCAPI bool $canTaskRunAgain() const;


    // NOLINTEND
};

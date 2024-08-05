#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/ITaskExecutionContext.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

class BackgroundWorker : public ::ITaskExecutionContext {
public:
    // BackgroundWorker inner types define
    enum class RunOneResult {};

public:
    // prevent constructor by default
    BackgroundWorker& operator=(BackgroundWorker const&);
    BackgroundWorker(BackgroundWorker const&);
    BackgroundWorker();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BackgroundWorker();

    // vIndex: 1
    virtual bool isAsync() const;

    // vIndex: 2
    virtual bool canTaskRunAgain() const;

    MCAPI BackgroundWorker(
        std::string                                       name,
        bool                                              async,
        class Bedrock::Threading::OSThreadPriority const& priority,
        std::optional<uint64>                             coreAffinity,
        std::optional<int>                                idealCore,
        class WorkerPool&                                 workerPool,
        bool                                              suppressProfiling
    );

    MCAPI uint64 getApproximateTaskCount() const;

    MCAPI std::thread::id getThreadId() const;

    MCAPI bool isIdle() const;

    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase> task);

    MCAPI void requestStop(bool wait);

    MCAPI void start();

    MCAPI void wake();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _processNextTask();

    MCAPI ::BackgroundWorker::RunOneResult _runOneTask();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BackgroundWorker* gLocalWorkerMappingSingleton;

    // NOLINTEND
};

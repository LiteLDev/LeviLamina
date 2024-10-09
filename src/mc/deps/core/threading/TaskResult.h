#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

class TaskResult {
public:
    // prevent constructor by default
    TaskResult& operator=(TaskResult const&);
    TaskResult(TaskResult const&);

public:
    // NOLINTBEGIN
    MCAPI TaskResult();

    MCAPI std::chrono::steady_clock::time_point getRunAtTime() const;

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> getWaitingOperation() const;

    MCAPI bool hasDelay() const;

    MCAPI bool isDone() const;

    MCAPI bool isWaiting() const;

    MCAPI bool isWaitingOperationLinked() const;

    MCAPI ~TaskResult();

    MCAPI static class TaskResult requeueAfter(std::chrono::nanoseconds requeueDelay);

    MCAPI static class TaskResult const Done;

    MCAPI static class TaskResult const Requeue;

    // NOLINTEND
};

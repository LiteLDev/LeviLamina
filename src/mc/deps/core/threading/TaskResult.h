#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

class TaskResult {
public:
    // prevent constructor by default
    TaskResult& operator=(TaskResult const&);
    TaskResult(TaskResult const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TaskResult@@QEAA@XZ
    MCAPI TaskResult();

    // symbol:
    // ?getRunAtTime@TaskResult@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ
    MCAPI std::chrono::steady_clock::time_point getRunAtTime() const;

    // symbol: ?getWaitingOperation@TaskResult@@QEBA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@XZ
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> getWaitingOperation() const;

    // symbol: ?hasDelay@TaskResult@@QEBA_NXZ
    MCAPI bool hasDelay() const;

    // symbol: ?isDone@TaskResult@@QEBA_NXZ
    MCAPI bool isDone() const;

    // symbol: ?isWaiting@TaskResult@@QEBA_NXZ
    MCAPI bool isWaiting() const;

    // symbol: ?isWaitingOperationLinked@TaskResult@@QEBA_NXZ
    MCAPI bool isWaitingOperationLinked() const;

    // symbol: ??1TaskResult@@QEAA@XZ
    MCAPI ~TaskResult();

    // symbol: ?requeueAfter@TaskResult@@SA?AV1@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    MCAPI static class TaskResult requeueAfter(std::chrono::nanoseconds requeueDelay);

    // symbol: ?Done@TaskResult@@2V1@B
    MCAPI static class TaskResult const Done;

    // symbol: ?Requeue@TaskResult@@2V1@B
    MCAPI static class TaskResult const Requeue;

    // NOLINTEND
};

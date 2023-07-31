#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskResult {

public:
    // prevent constructor by default
    TaskResult& operator=(TaskResult const&) = delete;
    TaskResult(TaskResult const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0TaskResult\@\@QEAA\@XZ
     */
    MCAPI TaskResult();
    /**
     * @symbol ?hasDelay\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool hasDelay() const;
    /**
     * @symbol ?isDone\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @symbol ?isWaiting\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool isWaiting() const;
    /**
     * @symbol ??1TaskResult\@\@QEAA\@XZ
     */
    MCAPI ~TaskResult();
    /**
     * @symbol
     * ?requeueAfter\@TaskResult\@\@SA?AV1\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI static class TaskResult requeueAfter(std::chrono::nanoseconds);
    /**
     * @symbol ?Done\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Done;
    /**
     * @symbol ?Requeue\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Requeue;
    // NOLINTEND
};

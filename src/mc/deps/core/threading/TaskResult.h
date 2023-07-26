#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskResult {

public:
    // prevent constructor by default
    TaskResult& operator=(TaskResult const&) = delete;
    TaskResult(TaskResult const&)            = delete;

public:
    /**
     * @symbol ??0TaskResult\@\@QEAA\@XZ
     */
    MCAPI TaskResult(); // NOLINT
    /**
     * @symbol ?hasDelay\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool hasDelay() const; // NOLINT
    /**
     * @symbol ?isDone\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const; // NOLINT
    /**
     * @symbol ?isWaiting\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool isWaiting() const; // NOLINT
    /**
     * @symbol ??1TaskResult\@\@QEAA\@XZ
     */
    MCAPI ~TaskResult(); // NOLINT
    /**
     * @symbol
     * ?requeueAfter\@TaskResult\@\@SA?AV1\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI static class TaskResult
        requeueAfter(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>); // NOLINT
    /**
     * @symbol ?Done\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Done; // NOLINT
    /**
     * @symbol ?Requeue\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Requeue; // NOLINT
};

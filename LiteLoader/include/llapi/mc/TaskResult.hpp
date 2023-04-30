/**
 * @file  TaskResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskResult.
 *
 */
class TaskResult {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKRESULT
public:
    class TaskResult& operator=(class TaskResult const &) = delete;
    TaskResult(class TaskResult const &) = delete;
#endif

public:
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
     * @symbol ?Done\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Done;
    /**
     * @symbol ?Requeue\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Requeue;
    /**
     * @symbol ?requeueAfter\@TaskResult\@\@SA?AV1\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI static class TaskResult requeueAfter(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

};

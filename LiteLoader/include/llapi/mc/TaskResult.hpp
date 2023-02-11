/**
 * @file  TaskResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

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
     * @hash   723531902
     * @symbol  ??0TaskResult\@\@QEAA\@XZ
     */
    MCAPI TaskResult();
    /**
     * @hash   177211215
     * @symbol  ?getRunAtTime\@TaskResult\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getRunAtTime() const;
    /**
     * @hash   1200249760
     * @symbol  ?getWaitingOperation\@TaskResult\@\@QEBA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> getWaitingOperation() const;
    /**
     * @hash   1737460076
     * @symbol  ?hasDelay\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool hasDelay() const;
    /**
     * @hash   1227149842
     * @symbol  ?isDone\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @hash   -1789121134
     * @symbol  ?isWaiting\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool isWaiting() const;
    /**
     * @hash   -1272512764
     * @symbol  ?isWaitingOperationLinked\@TaskResult\@\@QEBA_NXZ
     */
    MCAPI bool isWaitingOperationLinked() const;
    /**
     * @hash   -1096580100
     * @symbol  ??1TaskResult\@\@QEAA\@XZ
     */
    MCAPI ~TaskResult();
    /**
     * @hash   1321935616
     * @symbol  ?Done\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Done;
    /**
     * @hash   1128339318
     * @symbol  ?Requeue\@TaskResult\@\@2V1\@B
     */
    MCAPI static class TaskResult const Requeue;
    /**
     * @hash   -43915079
     * @symbol  ?requeueAfter\@TaskResult\@\@SA?AV1\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI static class TaskResult requeueAfter(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

};
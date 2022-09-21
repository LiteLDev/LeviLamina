/**
 * @file  MC/TaskResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -28477506
     * @symbol ??0TaskResult@@QEAA@XZ
     */
    MCAPI TaskResult();
    /**
     * @hash   44254943
     * @symbol ?getRunAtTime@TaskResult@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getRunAtTime() const;
    /**
     * @hash   448240352
     * @symbol ?getWaitingOperation@TaskResult@@QEBA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> getWaitingOperation() const;
    /**
     * @hash   985450668
     * @symbol ?hasDelay@TaskResult@@QEBA_NXZ
     */
    MCAPI bool hasDelay() const;
    /**
     * @hash   1095269890
     * @symbol ?isDone@TaskResult@@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @hash   -1152646990
     * @symbol ?isWaiting@TaskResult@@QEBA_NXZ
     */
    MCAPI bool isWaiting() const;
    /**
     * @hash   -1544837100
     * @symbol ?isWaitingOperationLinked@TaskResult@@QEBA_NXZ
     */
    MCAPI bool isWaitingOperationLinked() const;
    /**
     * @hash   -1203120404
     * @symbol ??1TaskResult@@QEAA@XZ
     */
    MCAPI ~TaskResult();
    /**
     * @hash   228194608
     * @symbol ?Done@TaskResult@@2V1@B
     */
    MCAPI static class TaskResult const Done;
    /**
     * @hash   311135670
     * @symbol ?Requeue@TaskResult@@2V1@B
     */
    MCAPI static class TaskResult const Requeue;
    /**
     * @hash   -795924487
     * @symbol ?requeueAfter@TaskResult@@SA?AV1@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
     */
    MCAPI static class TaskResult requeueAfter(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

};
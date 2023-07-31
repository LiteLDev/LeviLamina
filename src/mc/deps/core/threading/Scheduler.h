#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Scheduler {

public:
    // prevent constructor by default
    Scheduler& operator=(Scheduler const&) = delete;
    Scheduler(Scheduler const&)            = delete;
    Scheduler()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Scheduler\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@Z
     */
    MCAPI Scheduler(std::string, unsigned int);
    /**
     * @symbol ?changeThread\@Scheduler\@\@QEAAXVid\@thread\@std\@\@\@Z
     */
    MCAPI void changeThread(std::thread::id);
    /**
     * @symbol ?getCoroutinePool\@Scheduler\@\@QEAAAEAVWorkerPool\@\@XZ
     */
    MCAPI class WorkerPool& getCoroutinePool();
    /**
     * @symbol
     * ?processCoroutines\@Scheduler\@\@QEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@0\@Z
     */
    MCAPI void processCoroutines(std::chrono::nanoseconds, std::chrono::nanoseconds);
    /**
     * @symbol ?queueCallback\@Scheduler\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void queueCallback(std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?setTargetFPS\@Scheduler\@\@QEAAXI\@Z
     */
    MCAPI void setTargetFPS(unsigned int);
    /**
     * @symbol ?AVERAGE_TASK_TOLERANCE\@Scheduler\@\@2MB
     */
    MCAPI static float const AVERAGE_TASK_TOLERANCE;
    // NOLINTEND
};

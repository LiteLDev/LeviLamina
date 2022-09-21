/**
 * @file  MC/Scheduler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Scheduler.
 *
 */
class Scheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULER
public:
    class Scheduler& operator=(class Scheduler const &) = delete;
    Scheduler(class Scheduler const &) = delete;
    Scheduler() = delete;
#endif

public:
    /**
     * @hash   -2040477939
     * @symbol ??0Scheduler@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
     */
    MCAPI Scheduler(std::string, unsigned int);
    /**
     * @hash   65902060
     * @symbol ?changeThread@Scheduler@@QEAAXVid@thread@std@@@Z
     */
    MCAPI void changeThread(class std::thread::id);
    /**
     * @hash   628719972
     * @symbol ?getCoroutinePool@Scheduler@@QEAAAEAVWorkerPool@@XZ
     */
    MCAPI class WorkerPool & getCoroutinePool();
    /**
     * @hash   -1641411068
     * @symbol ?processCoroutines@Scheduler@@QEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@0@Z
     */
    MCAPI void processCoroutines(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @hash   -627638211
     * @symbol ?queueCallback@Scheduler@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     */
    MCAPI void queueCallback(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @hash   643673446
     * @symbol ?setTargetFPS@Scheduler@@QEAAXI@Z
     */
    MCAPI void setTargetFPS(unsigned int);
    /**
     * @hash   1230582957
     * @symbol ?AVERAGE_TASK_TOLERANCE@Scheduler@@2MB
     */
    MCAPI static float const AVERAGE_TASK_TOLERANCE;

};
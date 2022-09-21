/**
 * @file  MC/BackgroundTaskQueue.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BackgroundTaskQueue.
 *
 */
class BackgroundTaskQueue {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKQUEUE
public:
    class BackgroundTaskQueue& operator=(class BackgroundTaskQueue const &) = delete;
    BackgroundTaskQueue(class BackgroundTaskQueue const &) = delete;
#endif

public:
    /**
     * @hash   -157135430
     * @symbol ??0BackgroundTaskQueue@@QEAA@XZ
     */
    MCAPI BackgroundTaskQueue();
    /**
     * @hash   1784571325
     * @symbol ?flush@BackgroundTaskQueue@@QEAAXXZ
     */
    MCAPI void flush();
    /**
     * @hash   1269201405
     * @symbol ?getApproximateTaskCount@BackgroundTaskQueue@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    /**
     * @hash   1947743498
     * @symbol ?getNextItemPriority@BackgroundTaskQueue@@QEAAHXZ
     */
    MCAPI int getNextItemPriority();
    /**
     * @hash   1179200778
     * @symbol ?queue@BackgroundTaskQueue@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @hash   1641316045
     * @symbol ?resortPriorityQueue@BackgroundTaskQueue@@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @hash   -998188590
     * @symbol ?tryPop@BackgroundTaskQueue@@QEAA?AV?$shared_ptr@VBackgroundTaskBase@@@std@@H@Z
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int);
    /**
     * @hash   1744443770
     * @symbol ??1BackgroundTaskQueue@@QEAA@XZ
     */
    MCAPI ~BackgroundTaskQueue();

//private:
    /**
     * @hash   -167590093
     * @symbol ?_fetchAllAvailableTasks@BackgroundTaskQueue@@AEAA_NXZ
     */
    MCAPI bool _fetchAllAvailableTasks();

private:

};
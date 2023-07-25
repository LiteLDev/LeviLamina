#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackgroundTaskQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKQUEUE
public:
    BackgroundTaskQueue& operator=(BackgroundTaskQueue const&) = delete;
    BackgroundTaskQueue(BackgroundTaskQueue const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BackgroundTaskQueue\@\@QEAA\@XZ
     */
    MCAPI BackgroundTaskQueue();
    /**
     * @symbol ?flush\@BackgroundTaskQueue\@\@QEAAXXZ
     */
    MCAPI void flush();
    /**
     * @symbol ?getApproximateTaskCount\@BackgroundTaskQueue\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    /**
     * @symbol ?queue\@BackgroundTaskQueue\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @symbol ?resortPriorityQueue\@BackgroundTaskQueue\@\@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @symbol ?tryPop\@BackgroundTaskQueue\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@H\@Z
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int);
    /**
     * @symbol ??1BackgroundTaskQueue\@\@QEAA\@XZ
     */
    MCAPI ~BackgroundTaskQueue();

    // private:
    /**
     * @symbol ?_fetchAllAvailableTasks\@BackgroundTaskQueue\@\@AEAA_NXZ
     */
    MCAPI bool _fetchAllAvailableTasks();

private:
};

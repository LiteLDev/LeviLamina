#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackgroundTaskQueue {

public:
    // prevent constructor by default
    BackgroundTaskQueue& operator=(BackgroundTaskQueue const&) = delete;
    BackgroundTaskQueue(BackgroundTaskQueue const&)            = delete;

public:
    /**
     * @symbol ??0BackgroundTaskQueue\@\@QEAA\@XZ
     */
    MCAPI BackgroundTaskQueue(); // NOLINT
    /**
     * @symbol ?flush\@BackgroundTaskQueue\@\@QEAAXXZ
     */
    MCAPI void flush(); // NOLINT
    /**
     * @symbol ?getApproximateTaskCount\@BackgroundTaskQueue\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getApproximateTaskCount() const; // NOLINT
    /**
     * @symbol ?queue\@BackgroundTaskQueue\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool); // NOLINT
    /**
     * @symbol ?resortPriorityQueue\@BackgroundTaskQueue\@\@QEAAXXZ
     */
    MCAPI void resortPriorityQueue(); // NOLINT
    /**
     * @symbol ?tryPop\@BackgroundTaskQueue\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@H\@Z
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int); // NOLINT
    /**
     * @symbol ??1BackgroundTaskQueue\@\@QEAA\@XZ
     */
    MCAPI ~BackgroundTaskQueue(); // NOLINT

    // private:
    /**
     * @symbol ?_fetchAllAvailableTasks\@BackgroundTaskQueue\@\@AEAA_NXZ
     */
    MCAPI bool _fetchAllAvailableTasks(); // NOLINT

private:
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackgroundTaskQueue {
public:
    // prevent constructor by default
    BackgroundTaskQueue& operator=(BackgroundTaskQueue const&);
    BackgroundTaskQueue(BackgroundTaskQueue const&);

public:
    // NOLINTBEGIN
    MCAPI BackgroundTaskQueue();

    MCAPI void flush();

    MCAPI uint64 getApproximateTaskCount() const;

    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase> task, bool queueImmediate);

    MCAPI void resortPriorityQueue();

    MCAPI std::shared_ptr<class BackgroundTaskBase> tryPop(int minPriority);

    MCAPI ~BackgroundTaskQueue();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _fetchAllAvailableTasks();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

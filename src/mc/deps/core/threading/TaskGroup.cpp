#include "mc/deps/core/threading/TaskGroup.h"

#include "mc/common/Globals.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/BackgroundWorker.h"
#include "mc/deps/core/threading/InternalTaskGroup.h"

IBackgroundTaskOwner* TaskGroup::getCurrentTaskGroup() {
    BackgroundWorker* worker = BackgroundWorker::getLocal();
    if (!worker) {
        return nullptr;
    }
    auto task = worker->mCurrentTask;
    // a task is orphaned when it belongs to the internal task group instead of a real TaskGroup.
    if (!task || task->isOrphaned()) {
        return nullptr;
    }
    return task->mGroup;
}

#include "ll/api/schedule/Scheduler.h"

#include <atomic>
#include <chrono>
#include <mutex>

#include "ll/api/base/Containers.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/thread/ServerThreadExecuter.h"
#include "ll/api/thread/ThreadPoolExecuter.h"

namespace ll::schedule {
struct Scheduler::Impl {
    std::shared_ptr<thread::TaskExecuter const>               worker;
    ConcurrentDenseMap<Task::Id, thread::TaskExecuter::SchId> tasks;
    std::atomic_size_t                                        workingCount{0};
    std::atomic_bool                                          done{true};

    void startWork() {
        if (++workingCount == 1) {
            done = false;
        }
    }
    void endWork() {
        if (--workingCount == 0) {
            done = true;
            done.notify_all();
        }
    }
    std::shared_ptr<Task> addTaskImpl(std::shared_ptr<Task> task) {
        if (task->isCancelled()) {
            return nullptr;
        }
        auto time = task->getNextTime();
        if (!time) {
            return nullptr;
        }
        if (tasks.modify_if(task->getId(), [&](auto& pair) {
                startWork();
                pair.second = worker->addTaskAfter(
                    [&, task] {
                        if (!task->isCancelled()) {
                            if (task->nextAfterCall()) {
                                task->call();
                                addTaskImpl(task);
                            } else {
                                addTaskImpl(task);
                                task->call();
                            }
                        }
                        endWork();
                    },
                    *time
                );
            })) {
            return task;
        }
        return nullptr;
    }

    Impl(std::shared_ptr<thread::TaskExecuter const> pool) : worker(std::move(pool)) {}
    ~Impl() { done.wait(false); }
};

Scheduler::~Scheduler()                               = default;
Scheduler::Scheduler(Scheduler&&) noexcept            = default;
Scheduler& Scheduler::operator=(Scheduler&&) noexcept = default;

Scheduler::Scheduler(std::shared_ptr<thread::TaskExecuter const> pool)
: impl(std::make_unique<Impl>(std::move(pool))) {}

Scheduler Scheduler::fromDefaultServerThread() {
    return Scheduler{thread::ServerThreadExecuter::getDefault().shared_from_this()};
}
Scheduler Scheduler::fromDefaultThreadPool() {
    return Scheduler{thread::ThreadPoolExecuter::getDefault().shared_from_this()};
}
std::shared_ptr<Task> Scheduler::addTask(std::shared_ptr<Task> task) {
    if (impl->tasks.try_emplace(task->getId(), 0).second) {
        return impl->addTaskImpl(std::move(task));
    }
    return nullptr;
}
bool Scheduler::remove(Task::Id id) {
    return impl->tasks.erase_if(id, [&](auto& pair) {
        if (impl->worker->removeFromSch(pair.second)) {
            impl->endWork();
        }
        return true;
    });
}

void Scheduler::clear() {
    erase_if(impl->tasks, [&](auto& pair) {
        if (impl->worker->removeFromSch(pair.second)) {
            impl->endWork();
        }
        return true;
    });
    impl->done.wait(false);
}
} // namespace ll::schedule

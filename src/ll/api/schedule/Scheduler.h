#pragma once

#include <memory>

#include "ll/api/schedule/Task.h"

namespace ll::schedule {
class Scheduler {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLNDAPI explicit Scheduler(std::shared_ptr<thread::TaskExecuter const> pool);

    LLNDAPI static Scheduler fromDefaultServerThread();
    LLNDAPI static Scheduler fromDefaultThreadPool();

    LLAPI            Scheduler(Scheduler&&) noexcept;
    LLAPI Scheduler& operator=(Scheduler&&) noexcept;

    Scheduler(Scheduler const&)            = delete;
    Scheduler& operator=(Scheduler const&) = delete;

    LLAPI ~Scheduler();

    LLAPI std::shared_ptr<Task> addTask(std::shared_ptr<Task> task);

    template <class T, class... Args>
        requires(std::derived_from<T, Task>)
    std::shared_ptr<Task> add(Args&&... args) {
        return addTask(std::make_shared<T>(std::forward<Args>(args)...));
    }

    LLAPI void clear();

    LLAPI bool remove(Task::Id id);

    bool remove(std::shared_ptr<Task> const& task) {
        if (!task) return false;
        return remove(task->getId());
    }
};
} // namespace ll::schedule

#pragma once

#include <atomic>
#include <chrono>
#include <map>
#include <memory>
#include <mutex>
#include <thread>

#include "ll/api/base/StdInt.h"
#include "ll/api/chrono/GameChrono.h"
#include "ll/api/schedule/Task.h"
#include "ll/api/thread/InterruptableSleep.h"
#include "ll/api/thread/ThreadPool.h"
#include "ll/api/thread/TickSyncSleep.h"
#include "ll/api/thread/TickSyncTaskPool.h"

namespace ll::schedule {

template <class Clock>
struct SleeperType {
    using type = ll::thread::InterruptableSleep;
};

template <>
struct SleeperType<ll::chrono::ServerClock> {
    using type = ll::thread::TickSyncSleep<ll::chrono::ServerClock>;
};

template <>
struct SleeperType<ll::chrono::GameTickClock> {
    using type = ll::thread::TickSyncSleep<ll::chrono::GameTickClock>;
};

template <
    concepts::Require<std::chrono::is_clock> Clock,
    class Pool    = ll::thread::ThreadPool,
    class Sleeper = SleeperType<Clock>::type>
class Scheduler;

using ServerTimeAsyncScheduler = Scheduler<ll::chrono::ServerClock>;
using GameTickAsyncScheduler   = Scheduler<ll::chrono::GameTickClock>;
using SystemTimeScheduler      = Scheduler<std::chrono::system_clock>;

using ServerTimeScheduler = Scheduler<ll::chrono::ServerClock, ll::thread::TickSyncTaskPool>;
using GameTickScheduler   = Scheduler<ll::chrono::GameTickClock, ll::thread::TickSyncTaskPool>;

template <concepts::Require<std::chrono::is_clock> Clock, class Pool, class Sleeper>
class Scheduler {
private:
    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;
    using task_ptr   = std::shared_ptr<Task<Clock>>;
    using tasks_type = std::multimap<time_point, task_ptr>;

    std::recursive_mutex mutex;
    tasks_type           tasks;
    std::atomic<bool>    done;
    Sleeper              sleeper;
    Pool                 workers;
    std::thread          manager;

    task_ptr addTask(task_ptr t) {
        if (t->isCancelled()) {
            return t;
        }

        auto time = t->getFirstTime();
        if (!time) {
            return t;
        }
        {
            std::lock_guard l{mutex};
            tasks.emplace(*time, t);
            sleeper.interrupt();
        }
        return t;
    }

    void manageTasks() {
        std::lock_guard l{mutex};
        auto            end = tasks.upper_bound(Clock::now());
        if (end == tasks.begin()) {
            return;
        }
        tasks_type temp;

        for (auto i = tasks.begin(); i != end; ++i) {
            auto& task = i->second;
            if (task->isCancelled()) {
                continue;
            }
            if (task->interval()) {
                workers.addTask([this, task] {
                    try {
                        task->call();
                    } catch (...) {
                        detail::printScheduleError(*task);
                    }
                    addTask(task);
                });
            } else {
                workers.addTask([task] {
                    try {
                        task->call();
                    } catch (...) {
                        detail::printScheduleError(*task);
                    }
                });
                if (task->isCancelled()) {
                    continue;
                }
                auto time = task->getNextTime();
                if (time) {
                    temp.emplace(*time, std::move(task));
                }
            }
        }
        tasks.erase(tasks.begin(), end);

        for (auto& task : temp) tasks.emplace(task.first, std::move(task.second));
    }

public:
    Scheduler(Scheduler&&)                 = delete;
    Scheduler(Scheduler const&)            = delete;
    Scheduler& operator=(Scheduler&&)      = delete;
    Scheduler& operator=(Scheduler const&) = delete;

    template <class... Args>
    explicit Scheduler(Args&&... args) : done(false),
                                         workers(std::forward<Args>(args)...) {
        manager = std::thread([this] {
            while (!done) {
                if (tasks.empty()) {
                    sleeper.sleep();
                } else {
                    sleeper.sleepUntil(tasks.begin()->first);
                }
                manageTasks();
            }
        });
    }

    ~Scheduler() {
        done = true;
        sleeper.interrupt();
        manager.join();
    }

    template <template <class> class T, class... Args>
        requires(std::derived_from<T<Clock>, Task<Clock>>)
    task_ptr add(Args&&... args) {
        return addTask(std::make_shared<T<Clock>>(std::forward<Args>(args)...));
    }

    bool remove(task_ptr const& task) {
        std::lock_guard l{mutex};
        return std::erase_if(tasks, [&](auto& t) { return t.second == task; });
    }

    bool remove(uint64 id) {
        std::lock_guard l{mutex};
        return std::erase_if(tasks, [&](auto& t) { return t.second->getId() == id; });
    }

    void clear() {
        std::lock_guard l{mutex};
        tasks.clear();
    }
};
} // namespace ll::schedule

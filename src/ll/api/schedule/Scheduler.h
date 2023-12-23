#pragma once

#include <chrono>
#include <map>
#include <ranges>

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
struct SleeperType<ll::chrono::GameTimeClock> {
    using type = ll::thread::TickSyncSleep<ll::chrono::GameTimeClock>;
};

template <class Clock, class Pool = ll::thread::ThreadPool, class Sleeper = SleeperType<Clock>::type>
class Scheduler;

using GameTickAsyncScheduler = Scheduler<ll::chrono::ServerClock>;
using GameTimeAsyncScheduler = Scheduler<ll::chrono::GameTimeClock>;
using SystemTimeScheduler    = Scheduler<std::chrono::system_clock>;

using GameTickScheduler = Scheduler<ll::chrono::ServerClock, ll::thread::TickSyncTaskPool>;
using GameTimeScheduler = Scheduler<ll::chrono::GameTimeClock, ll::thread::TickSyncTaskPool>;

template <class Clock, class Pool, class Sleeper>
class Scheduler {
private:
    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;
    using task_ptr   = std::shared_ptr<Task<Clock>>;
    using tasks_type = std::multimap<time_point, task_ptr>;

    tasks_type        tasks;
    std::atomic<bool> done;
    std::mutex        mutex;
    Sleeper           sleeper;
    Pool              workers;
    std::thread       manager;

    task_ptr addTask(task_ptr t) {
        if (t->cancelled) {
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
            if (task->cancelled) {
                continue;
            }
            if (task->interval) {
                workers.addTask([this, task] {
                    try {
                        task->f();
                    } catch (...) {
                        detail::printScheduleError();
                    }
                    addTask(task);
                });
            } else {
                workers.addTask([task] {
                    try {
                        task->f();
                    } catch (...) {
                        detail::printScheduleError();
                    }
                });
                if (task->cancelled) {
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
    task_ptr add(Args&&... args) {
        return addTask(std::make_shared<T<Clock>>(std::forward<Args>(args)...));
    }

    bool remove(task_ptr const& task) {
        std::lock_guard l{mutex};
        return std::erase_if(tasks, [&](auto& t) { return t == task; });
    }

    bool remove(uint64 id) {
        std::lock_guard l{mutex};
        return std::erase_if(tasks, [&](auto& t) { return t.id == id; });
    }
};
} // namespace ll::schedule

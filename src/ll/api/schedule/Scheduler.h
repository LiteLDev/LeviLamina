#pragma once

#include "ll/api/chrono/TickSyncSleep.h"
#include "ll/api/schedule/Task.h"
#include "ll/api/thread/InterruptableSleep.h"
#include "ll/api/thread/ThreadPool.h"
#include <chrono>
#include <map>
#include <ranges>

namespace ll::schedule {

template <class Clock>
struct SleeperType {
    using Type = ll::thread::InterruptableSleep;
};

template <>
struct SleeperType<ll::gamechrono::ServerClock> {
    using Type = ll::gamechrono::TickSyncSleep<ll::gamechrono::ServerClock>;
};

template <>
struct SleeperType<ll::gamechrono::GameTimeClock> {
    using Type = ll::gamechrono::TickSyncSleep<ll::gamechrono::GameTimeClock>;
};

template <class Clock, class Sleeper = SleeperType<Clock>::Type>
class Scheduler;

using GameTickScheduler = Scheduler<ll::gamechrono::ServerClock>;
using GameTimeScheduler = Scheduler<ll::gamechrono::GameTimeClock>;

using SystemTimeScheduler = Scheduler<std::chrono::system_clock>;

template <class Clock, class Sleeper>
class Scheduler {
private:
    using TimePoint = typename Clock::time_point;
    using Duration  = typename Clock::duration;
    using TaskPtr   = std::shared_ptr<Task<Clock>>;
    using TaskType  = std::multimap<TimePoint, TaskPtr>;

    TaskType               tasks;
    std::atomic<bool>      done;
    std::mutex             mutex;
    Sleeper                sleeper;
    ll::thread::ThreadPool threads;

    std::weak_ptr<Task<Clock>> addTask(TaskPtr t) {
        std::weak_ptr<Task<Clock>> res = t;
        if (t->cancelled) { return res; }

        auto time = t->getNextTime();
        if (time >= TimePoint::max()) { return res; }

        std::lock_guard l{mutex};
        tasks.emplace(time, std::move(t));
        sleeper.interrupt();
        return res;
    }

    void manageTasks() {
        std::lock_guard l{mutex};
        auto            end = tasks.upper_bound(Clock::now());
        if (end == tasks.begin()) { return; }
        TaskType temp;

        for (auto i = tasks.begin(); i != end; ++i) {
            auto& task = i->second;
            if (task->cancelled) { continue; }
            if (task->interval) {
                threads.addTask([this, task] {
                    task->f();
                    addTask(task);
                });
            } else {
                threads.addTask([task] { task->f(); });
                if (task->cancelled) { continue; }
                auto time = task->getNextTime();
                if (time < TimePoint::max()) { temp.emplace(time, std::move(task)); }
            }
        }
        tasks.erase(tasks.begin(), end);

        for (auto& task : temp) tasks.emplace(task.first, std::move(task.second));
    }

public:
    Scheduler(const Scheduler&)                = delete;
    Scheduler(Scheduler&&) noexcept            = delete;
    Scheduler& operator=(const Scheduler&)     = delete;
    Scheduler& operator=(Scheduler&&) noexcept = delete;

    explicit Scheduler(int maxThreads = 1) : done(false), threads(std::max<int>(1, maxThreads) + 1) {
        threads.addTask([this] {
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
    }

    template <template <class> class T, class... Args>
    std::weak_ptr<Task<Clock>> add(Args&&... args) {
        return addTask(std::make_shared<T<Clock>>(std::forward<Args>(args)...));
    }

    bool remove(uint64 id) {
        std::lock_guard l{mutex};
        for (auto i = tasks.begin(), end = tasks.end(); i != end; i++) {
            if (i->second->id == id) {
                tasks.erase(i);
                return true;
            }
        }
        return false;
    }
};
} // namespace ll::schedule

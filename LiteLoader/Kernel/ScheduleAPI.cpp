#include <ScheduleAPI.h>
#include <atomic>
#include <deque>
#include <map>
#include <mutex>
#include <thread>
#include <LoggerAPI.h>
using std::function;

namespace Schedule
{
    LIAPI tick_t _tick;

    static std::multimap<tick_t, TaskBase> tasks;
    static std::deque<function<void()>> next_run;
    static std::atomic_flag cas_main = {};
    static std::atomic_flag cas_nextrun = {};

    inline volatile int lock_owner;
    inline static int getTID() {
        auto tid = std::this_thread::get_id();
        return *(int*)&tid;
    }
    inline volatile bool __lock_main() {
        int myid = getTID();
        if (myid == lock_owner)
            return false;
        while (cas_main.test_and_set())
            std::this_thread::yield();
        lock_owner = myid;
        return true;
    }
    inline volatile void __unlock_main() {
        lock_owner = 0;
        cas_main.clear();
    }
    struct LockGuard {
        bool locked_by_me;
        LockGuard() { locked_by_me = __lock_main(); }
        ~LockGuard() {
            if (locked_by_me)
                __unlock_main();
        }
    };

    LIAPI bool cancel(taskid_t id) {
        LockGuard gd;
        for (auto it = tasks.begin(); it != tasks.end(); ++it) {
            if (it->second.taskid == id) {
                tasks.erase(it);
                return true;
            }
        }
        return false;
    }

    LIAPI taskid_t schedule(TaskBase&& task) {
        auto id = task.taskid;
        LockGuard gd;
        tasks.emplace(task.schedule_time, std::forward<TaskBase>(task));
        return id;
    }

    LIAPI void scheduleNext(function<void()>&& fn) {
        while (cas_nextrun.test_and_set(std::memory_order_acquire))
            std::this_thread::yield();
        next_run.emplace_back(std::forward<function<void()>>(fn));
        cas_nextrun.clear(std::memory_order_release);
    }

    inline static void nextrun()
    {
        if (next_run.empty())
            return;

        while (cas_nextrun.test_and_set())
            std::this_thread::yield();

        try {
            while (!next_run.empty()) {
                next_run.front()();
                next_run.pop_front();
            }
        }
        catch (const std::exception &e) {
            Logger::Error("Exception occurred at nextTask!");
            Logger::Error("{}", e.what());
        }
        catch (const seh_exception &e) {
            Logger::Error("SEH exception occurred at nextTask!");
            Logger::Error("{}", e.what());
        }
        catch (...) {
            Logger::Error("Exception occurred at nextTask!");
        }
        cas_nextrun.clear();
    }

    inline static void tick() {
        nextrun();
        _tick++;
        if (_tick % 10 != 0)
            return;
        ticknow++;

        LockGuard gd;
        auto it = tasks.begin();
        auto end = tasks.end();
        try {
            for (; it != end;) {
                if (ticknow >= it->first) {
                    it->second.cb();
                    if (it->second.interval != 0) {
                        it->second.schedule_time = ticknow + it->second.interval;
                        tasks.emplace(it->second.schedule_time, std::move(it->second));
                    }
                    tasks.erase(it++);
                }
                else {
                    break;
                }
            }
        }
        catch (const std::exception &e) {
            Logger::Error("Exception occurred in task!");
            Logger::Error("{}", e.what());
        }
        catch (const seh_exception &e) {
            Logger::Error("SEH exception occurred in task!");
            Logger::Error("{}", e.what());
        }
        catch (...) {
            Logger::Error("Exception occurred in task!");
        }
    }
}

THook(void, "?tick@Level@@UEAAXXZ", class Level* lv)
{
    original(lv);
    Schedule::tick();
}
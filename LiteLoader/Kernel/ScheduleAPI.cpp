#include <LoggerAPI.h>
#include <ScheduleAPI.h>
#include <atomic>
#include <deque>
#include <map>
#include <mutex>
#include <thread>
using std::function;

namespace Schedule {
LIAPI tick_t _tick;

static std::multimap<tick_t, TaskBase> tasks;
static std::deque<function<void()>> next_run;
static std::atomic_flag cas_main = {};
static std::atomic_flag cas_next_run = {};

inline volatile int lock_owner;
inline static int getTID() {
    auto tid = std::this_thread::get_id();
    return *(int*)&tid;
}
inline volatile bool _lock_main() {
    int myID = getTID();
    if (myID == lock_owner)
        return false;
    while (cas_main.test_and_set())
        std::this_thread::yield();
    lock_owner = myID;
    return true;
}
inline volatile void _unlock_main() {
    lock_owner = 0;
    cas_main.clear();
}
struct LockGuard {
    bool locked_by_me;
    LockGuard() {
        locked_by_me = _lock_main();
    }
    ~LockGuard() {
        if (locked_by_me)
            _unlock_main();
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
    while (cas_next_run.test_and_set(std::memory_order_acquire))
        std::this_thread::yield();
    next_run.emplace_back(std::forward<function<void()>>(fn));
    cas_next_run.clear(std::memory_order_release);
}

inline static void nextRun() {
    if (next_run.empty())
        return;

    while (cas_next_run.test_and_set())
        std::this_thread::yield();

    try {
        while (!next_run.empty()) {
            next_run.front()();
            next_run.pop_front();
        }
    } catch (const seh_exception& e) {
        logger.error("SEH exception occurred at nextTask!");
        logger.error("{}", e.what());
    } catch (const std::exception& e) {
        logger.error("Exception occurred at nextTask!");
        logger.error("{}", e.what());
    } catch (...) {
        logger.error("Exception occurred at nextTask!");
    }
    cas_next_run.clear();
}

inline static void tick() {
    nextRun();
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
            } else {
                break;
            }
        }
    } catch (const seh_exception& e) {
        logger.error("SEH exception occurred in task!");
        logger.error("{}", e.what());
    } catch (const std::exception& e) {
        logger.error("Exception occurred in task!");
        logger.error("{}", e.what());
    } catch (...) {
        logger.error("Exception occurred in task!");
    }
}
} // namespace Schedule

THook(void, "?tick@Level@@UEAAXXZ", class Level* lv) {
    original(lv);
    Schedule::tick();
}
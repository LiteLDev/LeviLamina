#pragma once

#include <chrono>
#include <mutex>
#include <variant>
#include <vector>

#include "ll/api/chrono/GameChrono.h"

namespace ll::thread {

template <class Clock>
class TickSyncSleep;
namespace detail {
LLETAPI std::recursive_mutex listMutex;
LLETAPI std::atomic_size_t tickListSize;
LLETAPI                    std::vector<std::variant<
    std::reference_wrapper<TickSyncSleep<chrono::ServerClock>>,
    std::reference_wrapper<TickSyncSleep<chrono::GameTickClock>>>>
                           tickList;
LLAPI void                 notify();
}; // namespace detail

template <class Clock>
class TickSyncSleep {
    bool                    interrupted{false};
    std::mutex              mutex;
    std::condition_variable cv;
    size_t                  id;

public:
    TickSyncSleep(TickSyncSleep&&)                 = delete;
    TickSyncSleep(TickSyncSleep const&)            = delete;
    TickSyncSleep& operator=(TickSyncSleep&&)      = delete;
    TickSyncSleep& operator=(TickSyncSleep const&) = delete;

    using clock_type = Clock;

    Clock::time_point timepoint;

    enum class State {
        None,
        Sleep,
        SleepFor,
        SleepUntil,
    } state{State::None};

    TickSyncSleep() {
        using namespace detail;
        std::lock_guard lock(listMutex);
        id = tickList.size();
        tickList.emplace_back(std::ref(*this));
        ++tickListSize;
        notify();
    }

    ~TickSyncSleep() {
        using namespace detail;
        std::lock_guard lock(listMutex);
        state = State::None;
        std::swap(tickList[id], tickList.back());
        tickList.pop_back();
        --tickListSize;
    }

    void sleepFor(Clock::duration duration) {
        std::unique_lock lock{mutex};
        this->timepoint = Clock::now() + duration;
        state           = State::SleepFor;
        cv.wait(lock, [this] { return interrupted; });
        interrupted = false;
    }

    void sleepUntil(Clock::time_point time) {
        std::unique_lock lock{mutex};
        this->timepoint = time;
        state           = State::SleepUntil;
        cv.wait(lock, [this] { return interrupted; });
        interrupted = false;
    }

    void sleep() {
        std::unique_lock lock{mutex};
        state = State::Sleep;
        cv.wait(lock, [this] { return interrupted; });
        interrupted = false;
    }

    void interrupt() {
        std::lock_guard lock(mutex);
        state       = State::None;
        interrupted = true;
        cv.notify_one();
    }
};
} // namespace ll::thread

#pragma once

#include <atomic>
#include <condition_variable>
#include <cstddef>
#include <functional>
#include <mutex>
#include <optional>
#include <utility>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/chrono/GameChrono.h"

namespace ll::thread {

class ServerTickSyncSleepBase {
    struct Impl;
    std::unique_ptr<Impl> impl;

protected:
    LLAPI std::unique_lock<std::mutex> lock();

    LLAPI void sleepImpl(std::unique_lock<std::mutex>&);
    LLAPI void interruptImpl();

    virtual void check() = 0;

public:
    ServerTickSyncSleepBase(ServerTickSyncSleepBase&&)                 = delete;
    ServerTickSyncSleepBase(ServerTickSyncSleepBase const&)            = delete;
    ServerTickSyncSleepBase& operator=(ServerTickSyncSleepBase&&)      = delete;
    ServerTickSyncSleepBase& operator=(ServerTickSyncSleepBase const&) = delete;

    LLAPI ServerTickSyncSleepBase();
    LLAPI virtual ~ServerTickSyncSleepBase();
};

template <class Clock>
class ServerTickSyncSleep : public ServerTickSyncSleepBase {
    void check() override {
        if (!timepoint) return;
        if (Clock::now() >= *timepoint) {
            interrupt();
        }
    }

public:
    using clock_type = Clock;

    std::optional<typename Clock::time_point> timepoint;

    ServerTickSyncSleep()          = default;
    virtual ~ServerTickSyncSleep() = default;

    void sleepFor(Clock::duration duration) {
        std::unique_lock l{lock()};
        timepoint = Clock::now() + duration;
        sleepImpl(l);
    }

    void sleepUntil(Clock::time_point time) {
        std::unique_lock l{lock()};
        timepoint = time;
        sleepImpl(l);
    }

    void sleep() {
        std::unique_lock l{lock()};
        timepoint = std::nullopt;
        sleepImpl(l);
    }

    void interrupt() {
        std::unique_lock l{lock()};
        timepoint = std::nullopt;
        interruptImpl();
    }
};
} // namespace ll::thread

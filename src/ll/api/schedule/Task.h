#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <chrono>
#include <functional>
#include <string_view>

namespace ll::schedule {
inline namespace task {
LLETAPI std::atomic_ullong TaskId;

template <class Clock>
class Task {
public:
    using TimePoint = typename Clock::time_point;
    using Duration  = typename Clock::duration;

    std::function<void()> const f;
    bool const                  interval;
    bool                        cancelled{false};
    uint64                      id;

    Task(std::function<void()> const& f, bool interval = false) : f(f), interval(interval), id(TaskId++) {}

    inline void cancel() { cancelled = true; }

    virtual TimePoint getNextTime() = 0;

    virtual ~Task() = default;
};

template <class Clock>
class RepeatTask : public Task<Clock> {
private:
    using TimePoint = typename Clock::time_point;
    using Duration  = typename Clock::duration;
    TimePoint      time;
    Duration const duration;
    size_t         count;
    bool const     forever;

public:
    template <class R, class P>
    RepeatTask(std::chrono::duration<R, P> duration, std::function<void()> const& f, size_t count = 0)
    : Task<Clock>(f, false),
      time(Clock::now()),
      duration(std::chrono::duration_cast<Duration>(duration)),
      count(count),
      forever(count == 0) {}

    TimePoint getNextTime() override {
        if (!forever) {
            if (count > 0) {
                count--;
            } else {
                return TimePoint::max();
            }
        }
        auto res  = time;
        time     += duration;
        return res;
    }
};

template <class Clock>
class IntervalTask : public Task<Clock> {
private:
    using TimePoint = typename Clock::time_point;
    using Duration  = typename Clock::duration;
    bool           first;
    Duration const duration;
    size_t         count;
    bool const     forever;

public:
    template <class R, class P>
    IntervalTask(std::chrono::duration<R, P> duration, std::function<void()> const& f, size_t count = 0)
    : Task<Clock>(f, true),
      first(true),
      duration(std::chrono::duration_cast<Duration>(duration)),
      count(count),
      forever(count == 0) {}

    TimePoint getNextTime() override {
        if (!forever) {
            if (count > 0) {
                count--;
            } else {
                return TimePoint::max();
            }
        }
        if (first) {
            first = false;
            return Clock::now();
        }
        return Clock::now() + duration;
    }
};

LLNDAPI std::chrono::system_clock::time_point parseTime(std::string const&);

template <class Clock>
class DelayTask : public Task<Clock> {
private:
    using TimePoint = typename Clock::time_point;
    using Duration  = typename Clock::duration;
    TimePoint const time;
    bool            finished;

public:
    DelayTask(TimePoint time, std::function<void()> const& f) : Task<Clock>(f, false), time(time), finished(false) {}

    template <class R, class P>
    DelayTask(std::chrono::duration<R, P> duration, std::function<void()> const& f)
    : DelayTask<Clock>(Clock::now() + std::chrono::duration_cast<Duration>(duration), f) {}

    DelayTask(std::string const& timestr, std::function<void()> const& f)
        requires(std::is_same_v<Clock, std::chrono::system_clock>)
    : DelayTask<Clock>(parseTime(timestr), f) {}

    TimePoint getNextTime() override {
        if (finished) {
            return TimePoint::max();
        }
        finished = true;
        return time;
    }
};
} // namespace task
namespace detail {
LLAPI void printScheduleError() noexcept;
}
} // namespace ll::schedule
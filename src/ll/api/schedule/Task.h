#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <chrono>
#include <functional>
#include <optional>
#include <string_view>

namespace ll::schedule {
inline namespace task {
LLETAPI std::atomic_ullong taskId;

template <class Clock>
class Task {
public:
    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;

    std::function<void()> const f;
    bool const                  interval;
    bool                        cancelled{false};
    uint64                      id;

    Task(std::function<void()> const& f, bool interval = false) : f(f), interval(interval), id(taskId++) {}

    inline void cancel() { cancelled = true; }

    virtual std::optional<time_point> getFirstTime() { return getNextTime(); }

    virtual std::optional<time_point> getNextTime() = 0;

    virtual ~Task() = default;
};

template <class Clock>
class RepeatTask : public Task<Clock> {
private:
    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;
    time_point     time;
    duration const dur;
    size_t         count;
    bool const     forever;

public:
    template <class R, class P>
    RepeatTask(std::chrono::duration<R, P> dur, std::function<void()> const& f, size_t count = 0)
    : Task<Clock>(f),
      time(Clock::now()),
      dur(std::chrono::duration_cast<duration>(dur)),
      count(count),
      forever(count == 0) {}

    std::optional<time_point> getNextTime() override {
        if (!forever) {
            if (count > 0) {
                count--;
            } else {
                return std::nullopt;
            }
        }
        auto res  = time;
        time     += dur;
        return res;
    }
};

template <class Clock>
class IntervalTask : public Task<Clock> {
private:
    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;
    bool           first;
    duration const dur;
    size_t         count;
    bool const     forever;

public:
    template <class R, class P>
    IntervalTask(std::chrono::duration<R, P> dur, std::function<void()> const& f, size_t count = 0)
    : Task<Clock>(f, true),
      first(true),
      dur(std::chrono::duration_cast<duration>(dur)),
      count(count),
      forever(count == 0) {}

    std::optional<time_point> getNextTime() override {
        if (!forever) {
            if (count > 0) {
                count--;
            } else {
                return std::nullopt;
            }
        }
        if (first) {
            first = false;
            return Clock::now();
        }
        return Clock::now() + dur;
    }
};

LLNDAPI std::chrono::system_clock::time_point parseTime(std::string const&);

template <class Clock>
class DelayTask : public Task<Clock> {
private:
    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;
    time_point const time;

public:
    DelayTask(time_point time, std::function<void()> const& f) : Task<Clock>(f), time(time) {}

    template <class R, class P>
    DelayTask(std::chrono::duration<R, P> dur, std::function<void()> const& f)
    : DelayTask<Clock>(Clock::now() + std::chrono::duration_cast<duration>(dur), f) {}

    DelayTask(std::string const& timestr, std::function<void()> const& f)
        requires(std::is_same_v<Clock, std::chrono::system_clock>)
    : DelayTask<Clock>(parseTime(timestr), f) {}

    std::optional<time_point> getFirstTime() override { return time; }

    std::optional<time_point> getNextTime() override { return std::nullopt; }
};
} // namespace task
namespace detail {
LLAPI void printScheduleError() noexcept;
}
} // namespace ll::schedule

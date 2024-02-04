#pragma once

#include <chrono>
#include <functional>
#include <optional>
#include <string_view>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/plugin/NativePlugin.h"

namespace ll::schedule {
inline namespace task {
LLETAPI std::atomic_ullong taskId;

template <class Clock>
class Task {
    uint64                id;
    std::function<void()> fn;
    bool                  mInterval;
    bool                  mCancelled{false};

public:
    std::weak_ptr<plugin::Plugin> pluginPtr;

    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;

    Task(
        std::function<void()>         fn,
        bool                          interval,
        std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()
    )
    : id(taskId++),
      fn(std::move(fn)),
      mInterval(interval),
      pluginPtr(std::move(plugin)) {}

    constexpr void call() { fn(); }

    [[nodiscard]] constexpr bool interval() { return mInterval; }

    [[nodiscard]] constexpr bool isCancelled() { return mCancelled; }

    constexpr void setCancelled(bool cancelled) { mCancelled = cancelled; }

    constexpr void cancel() { setCancelled(true); }

    [[nodiscard]] constexpr uint64 getId() const { return id; }

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
    RepeatTask(
        std::chrono::duration<R, P>   dur,
        std::function<void()>         fn,
        size_t                        count  = 0,
        std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()
    )
    : Task<Clock>(std::move(fn), false, std::move(plugin)),
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
    IntervalTask(
        std::chrono::duration<R, P>   dur,
        std::function<void()>         fn,
        size_t                        count  = 0,
        std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()
    )
    : Task<Clock>(std::move(fn), true, std::move(plugin)),
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

LLNDAPI std::chrono::system_clock::time_point parseTime(std::string_view);

template <class Clock>
class DelayTask : public Task<Clock> {
private:
    using time_point = typename Clock::time_point;
    using duration   = typename Clock::duration;
    time_point const time;

public:
    DelayTask(
        time_point                    time,
        std::function<void()>         fn,
        std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()
    )
    : Task<Clock>(std::move(fn), false, std::move(plugin)),
      time(time) {}

    template <class R, class P>
    DelayTask(
        std::chrono::duration<R, P>   dur,
        std::function<void()>         fn,
        std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()
    )
    : DelayTask<Clock>(Clock::now() + std::chrono::duration_cast<duration>(dur), std::move(fn), std::move(plugin)) {}

    DelayTask(
        std::string_view              timestr,
        std::function<void()>         fn,
        std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()
    )
        requires(std::is_same_v<Clock, std::chrono::system_clock>)
    : DelayTask<Clock>(parseTime(timestr), std::move(fn), std::move(plugin)) {}

    std::optional<time_point> getFirstTime() override { return time; }

    std::optional<time_point> getNextTime() override { return std::nullopt; }
};
} // namespace task
namespace detail {
LLAPI void printScheduleError() noexcept;
}
} // namespace ll::schedule

#pragma once

#include <atomic>
#include <chrono>
#include <cstddef>
#include <functional>
#include <memory>
#include <optional>
#include <string_view>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/NativeMod.h"
#include "ll/api/thread/TaskExecutor.h"


namespace ll::schedule {
inline namespace task {
class Task;
}
namespace detail {
LLAPI void   printScheduleError(Task&) noexcept;
LLAPI uint64 nextTaskId() noexcept;
LLNDAPI std::chrono::system_clock::time_point parseTime(std::string_view);
} // namespace detail
} // namespace ll::schedule

namespace ll::schedule::inline task {
class Task {
public:
    using Id = uint64;

private:
    Id                    id;
    std::function<void()> fn;
    bool                  isNextAfterCall;
    bool                  cancelled{false};

public:
    std::weak_ptr<mod::Mod> modPtr;

    using Duration = thread::TaskExecutor::Duration;

    Task(std::function<void()> fn, bool isNextAfterCall, std::weak_ptr<mod::Mod> mod = mod::NativeMod::current())
    : id(detail::nextTaskId()),
      fn(std::move(fn)),
      isNextAfterCall(isNextAfterCall),
      modPtr(std::move(mod)) {}

    void call() noexcept {
        try {
            fn();
        } catch (...) {
            detail::printScheduleError(*this);
        }
    }

    [[nodiscard]] constexpr bool nextAfterCall() noexcept { return isNextAfterCall; }

    [[nodiscard]] constexpr bool isCancelled() noexcept { return cancelled; }

    constexpr void setCancelled(bool cancel) noexcept { cancelled = cancel; }

    constexpr void cancel() noexcept { setCancelled(true); }

    [[nodiscard]] constexpr Id getId() const noexcept { return id; }

    virtual ~Task() = default;

    virtual std::optional<Duration> getNextTime() = 0;
};

template <class Clock>
class RepeatTask : public Task {
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
        std::chrono::duration<R, P> dur,
        std::function<void()>       fn,
        size_t                      count = 0,
        std::weak_ptr<mod::Mod>     mod   = mod::NativeMod::current()
    )
    : Task(std::move(fn), false, std::move(mod)),
      time(Clock::now()),
      dur(std::chrono::duration_cast<duration>(dur)),
      count(count),
      forever(count == 0) {}

    std::optional<Duration> getNextTime() override {
        if (!forever) {
            if (count > 0) {
                count--;
            } else {
                return std::nullopt;
            }
        }
        auto res  = time;
        time     += dur;
        return res - Clock::now();
    }
};

class IntervalTask : public Task {
private:
    Duration const dur;
    size_t         count;
    bool const     forever;

    bool first{true};

public:
    template <class R, class P>
    IntervalTask(
        std::chrono::duration<R, P> dur,
        std::function<void()>       fn,
        size_t                      count = 0,
        std::weak_ptr<mod::Mod>     mod   = mod::NativeMod::current()
    )
    : Task(std::move(fn), true, std::move(mod)),
      dur(std::chrono::duration_cast<Duration>(dur)),
      count(count - 1),
      forever(count == 0) {}

    std::optional<Duration> getNextTime() override {
        if (first) {
            first = false;
            return Duration{0};
        }
        if (!forever) {
            if (count > 0) {
                count--;
            } else {
                return std::nullopt;
            }
        }
        return dur;
    }
};

class DelayTask : public Task {
private:
    Duration const dur;

    bool first{true};

public:
    template <class C, class D>
    DelayTask(
        std::chrono::time_point<C, D> time,
        std::function<void()>         fn,
        std::weak_ptr<mod::Mod>       mod = mod::NativeMod::current()
    )
    : DelayTask(time - C::now(), std::move(fn), std::move(mod)) {}

    template <class R, class P>
    DelayTask(
        std::chrono::duration<R, P> dur,
        std::function<void()>       fn,
        std::weak_ptr<mod::Mod>     mod = mod::NativeMod::current()
    )
    : Task(std::move(fn), false, std::move(mod)),
      dur(std::chrono::duration_cast<Duration>(dur)) {}

    DelayTask(
        std::string_view        timestr,
        std::function<void()>   fn,
        std::weak_ptr<mod::Mod> mod = mod::NativeMod::current()
    )
    : DelayTask(detail::parseTime(timestr), std::move(fn), std::move(mod)) {}

    std::optional<Duration> getNextTime() override {
        if (first) {
            first = false;
            return dur;
        }
        return std::nullopt;
    }
};
} // namespace ll::schedule::inline task

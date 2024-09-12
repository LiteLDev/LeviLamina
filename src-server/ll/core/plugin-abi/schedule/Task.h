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

    virtual std::optional<size_t> getNextTime() = 0;
};
} // namespace ll::schedule::inline task

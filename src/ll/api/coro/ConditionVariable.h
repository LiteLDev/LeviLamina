#pragma once

#include <chrono>
#include <coroutine>
#include <functional>
#include <limits>
#include <memory>
#include <mutex>
#include <optional>
#include <type_traits>
#include <variant>

#include "ll/api/base/CompilerPredefine.h"
#include "ll/api/coro/Executor.h"
#include "ll/api/data/IntrusiveList.h"

namespace ll::coro {
class ConditionVariable {
    struct Waiter : data::IntrusiveListNode<> {
        ConditionVariable& cv;
        bool (*pred)(Waiter&);
        ExecutorRef                                exec{};
        std::coroutine_handle<>                    handle;
        std::shared_ptr<data::CancellableCallback> timer;
        bool                                       fired{};
        bool                                       result{true};

        Waiter(ConditionVariable& cv, bool (*pred)(Waiter&)) noexcept : cv(cv), pred(pred) {}

        ~Waiter() {
            if (is_linked()) {
                std::lock_guard lock{cv.mutex};
                unlink();
                if (timer) timer->cancel();
            }
        }

        bool satisfied() { return pred && pred(*this); }

        void onTimeout() {
            std::unique_lock lock{cv.mutex};
            bool             linked = is_linked();
            if (linked) unlink();
            fired  = true;
            result = satisfied();
            lock.unlock();
            if (linked) handle.resume();
        }

        bool suspend(std::coroutine_handle<> h, std::optional<Duration> dur) {
            handle = h;
            if (dur) timer = exec->executeAfter([this] { onTimeout(); }, *dur);
            std::lock_guard lock{cv.mutex};
            if (fired) return false;
            if (satisfied() && (!timer || timer->cancel())) return false;
            cv.waiters.push_back(*this);
            return true;
        }
    };

    template <class Pred>
    class Awaiter : Waiter {
        static constexpr bool hasPred = !std::is_same_v<Pred, std::monostate>;

        std::optional<Duration>   dur;
        LL_NO_UNIQUE_ADDRESS Pred pred;

        static bool test(Waiter& w) {
            if constexpr (hasPred) return std::invoke(static_cast<Awaiter&>(w).pred);
            else return false;
        }

    public:
        Awaiter(ConditionVariable& cv, Pred pred, std::optional<Duration> dur)
        : Waiter(cv, hasPred ? &test : nullptr),
          dur(dur),
          pred(std::move(pred)) {}

        void setExecutor(ExecutorRef ex) { this->exec = ex; }

        bool await_ready() {
            if (this->satisfied()) return true;
            if (!dur || *dur > Duration{0}) return false;
            this->result = false;
            return true;
        }
        bool await_suspend(std::coroutine_handle<> h) { return this->suspend(h, dur); }
        bool await_resume() const noexcept { return this->result; }
    };

    std::mutex                  mutex;
    data::IntrusiveList<Waiter> waiters;

    template <class Pred>
    auto make(Pred&& pred, std::optional<Duration> dur = {}) {
        return Awaiter<std::decay_t<Pred>>{*this, std::forward<Pred>(pred), dur};
    }

    size_t notify(size_t limit, bool inplace) {
        data::IntrusiveList<Waiter> woken;
        size_t                      count = 0;
        {
            std::lock_guard lock{mutex};
            for (auto it = waiters.begin(); it != waiters.end() && count < limit;) {
                auto& w = *it;
                ++it;
                if (w.pred && !w.pred(w)) continue;
                if (w.timer && !w.timer->cancel()) continue;
                woken.push_back(w);
                ++count;
            }
        }
        while (!woken.empty()) {
            auto& w = woken.front();
            woken.pop_front();
            if (inplace) w.handle.resume();
            else w.exec->execute(w.handle);
        }
        return count;
    }

public:
    ConditionVariable() = default;

    ConditionVariable(ConditionVariable const&)            = delete;
    ConditionVariable& operator=(ConditionVariable const&) = delete;

    [[nodiscard]] auto wait() { return make(std::monostate{}); }

    template <std::predicate Pred>
    [[nodiscard]] auto wait(Pred&& pred) {
        return make(std::forward<Pred>(pred));
    }

    template <class R, class P>
    [[nodiscard]] auto waitFor(std::chrono::duration<R, P> dur) {
        return make(std::monostate{}, std::chrono::duration_cast<Duration>(dur));
    }

    template <class R, class P, std::predicate Pred>
    [[nodiscard]] auto waitFor(std::chrono::duration<R, P> dur, Pred&& pred) {
        return make(std::forward<Pred>(pred), std::chrono::duration_cast<Duration>(dur));
    }

    template <class C, class D, class... Pred>
    [[nodiscard]] auto waitUntil(std::chrono::time_point<C, D> time, Pred&&... pred) {
        return waitFor(time - C::now(), std::forward<Pred>(pred)...);
    }

    bool notifyOne(bool inplace = false) { return notify(1, inplace) != 0; }

    size_t notifyAll(bool inplace = false) { return notify(std::numeric_limits<size_t>::max(), inplace); }
};
} // namespace ll::coro

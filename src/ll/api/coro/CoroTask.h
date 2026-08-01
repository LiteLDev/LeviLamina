#pragma once

#include <semaphore>

#include "ll/api/coro/Collect.h"
#include "ll/api/coro/CoroPromise.h"
#include "ll/api/coro/CoroTaskAwaiter.h"

namespace ll::coro {

class ViaContinuation {
public:
    struct promise_type {
        constexpr ViaContinuation get_return_object() noexcept {
            return ViaContinuation{std::coroutine_handle<promise_type>::from_promise(*this)};
        }
        constexpr std::suspend_always initial_suspend() noexcept { return {}; }
        constexpr std::suspend_never  final_suspend() noexcept { return {}; }
        constexpr void                return_void() noexcept {}
        [[noreturn]] void             unhandled_exception() noexcept { std::terminate(); }
    };

    using Handle = std::coroutine_handle<promise_type>;

    ViaContinuation(ViaContinuation const&)            = delete;
    ViaContinuation& operator=(ViaContinuation const&) = delete;

    constexpr explicit ViaContinuation(Handle h) noexcept : handle(h) {}
    constexpr ViaContinuation(ViaContinuation&& other) noexcept : handle(std::exchange(other.handle, nullptr)) {}

    constexpr ~ViaContinuation() {
        if (handle) {
            std::exchange(handle, nullptr).destroy();
        }
    }

    constexpr std::coroutine_handle<> get() const noexcept { return handle; }
    constexpr void                    release() noexcept { handle = nullptr; }

private:
    Handle handle;
};

template <class T = void>
class CoroTask {
public:
    using promise_type = CoroPromise<T>;
    using Handle       = std::coroutine_handle<promise_type>;

    using Result = T;

    using ExpectedResult = typename CoroPromise<T>::ExpectedResult;

    friend promise_type;

private:
    Handle handle;

    constexpr explicit CoroTask(Handle h) noexcept : handle(h) {}

    using AwaiterBase = CoroTaskAwaiter<T>;

public:
    struct ExpectedAwaiter : public AwaiterBase {
        constexpr void setExecutor(ExecutorRef ex) { AwaiterBase::handle.promise().exec = ex; }
        constexpr ExpectedAwaiter(Handle h) : AwaiterBase(h) {}
        constexpr ExpectedResult await_resume() noexcept { return AwaiterBase::getResult(); }
    };

    struct ValueAwaiter : public AwaiterBase {
        constexpr ValueAwaiter(Handle h) : AwaiterBase(h) {}
        constexpr T await_resume() {
            if constexpr (std::is_same_v<T, ExpectedResult>) {
                return AwaiterBase::getResult();
            } else {
                return AwaiterBase::getResult().value();
            }
        }
    };

    struct ViaAwaiter : public ValueAwaiter {
        constexpr ViaAwaiter(Handle h, NonNullExecutorRef executor) : ValueAwaiter(h) {
            AwaiterBase::handle.promise().exec = executor;
        }

        template <std::derived_from<CoroPromiseBase> P>
        void await_suspend(std::coroutine_handle<P> continuation) {
            auto resumeCaller = [](NonNullExecutorRef      executor,
                                   std::coroutine_handle<> continuation) -> ViaContinuation {
                executor.execute(continuation);
                co_return;
            }(continuation.promise().exec.value(), continuation);
            auto& promise  = AwaiterBase::handle.promise();
            promise.handle = resumeCaller.get();
            promise.local  = continuation.promise().local;
            promise.exec->execute(AwaiterBase::handle);
            resumeCaller.release();
        }
    };

private:
    struct Launcher {
        struct promise_type : public CoroPromiseBase {
            constexpr ExpectedAwaiter&&  await_transform(ExpectedAwaiter&& a) { return std::move(a); }
            constexpr std::suspend_never initial_suspend() noexcept { return {}; }
            constexpr std::suspend_never final_suspend() noexcept { return {}; }
            constexpr void               return_void() noexcept {}
            constexpr void               unhandled_exception() { std::rethrow_exception(std::current_exception()); }
            constexpr Launcher           get_return_object() noexcept { return {}; }
        };
    };

public:
    CoroTask(CoroTask const&)            = delete;
    CoroTask& operator=(CoroTask const&) = delete;

    CoroTask(CoroTask&& other) noexcept : handle(std::exchange(other.handle, nullptr)) {}

    constexpr ~CoroTask() {
        if (handle) {
            std::exchange(handle, nullptr).destroy();
        }
    }

    constexpr void setExecutor(ExecutorRef ex) { handle.promise().exec = ex; }

    constexpr ExecutorRef getExecutor() { return handle.promise().exec; }

    bool done() const { return !handle || handle.done(); }

    auto operator co_await() { return ValueAwaiter(std::exchange(handle, nullptr)); }

    auto via(NonNullExecutorRef executor) { return ViaAwaiter(std::exchange(handle, nullptr), executor); }

    auto tryGet() { return ExpectedAwaiter(std::exchange(handle, nullptr)); }

    template <std::invocable<ExpectedResult> F>
    void launch(NonNullExecutorRef executor, F&& callback) noexcept try {
        setExecutor(executor);
        [](CoroTask lazy, std::decay_t<F> cb) -> Launcher {
            std::invoke(cb, co_await lazy.tryGet());
        }(std::move(*this), std::forward<F>(callback));
    } catch (...) {
        std::invoke(std::forward<F>(callback), makeExceptionError());
    }
    void launch(NonNullExecutorRef executor) noexcept {
        launch(executor, [](auto&&) {});
    }
    ExpectedResult syncLaunch(NonNullExecutorRef executor) noexcept {
        ExpectedResult        value;
        std::binary_semaphore cond{0};
        launch(executor, [&](ExpectedResult&& result) {
            value = std::move(result);
            cond.release();
        });
        cond.acquire();
        return value;
    }
};

template <class T>
constexpr CoroTask<T> CoroPromise<T>::get_return_object() noexcept {
    return CoroTask<T>(CoroTask<T>::Handle::from_promise(*this));
}
constexpr CoroTask<void> CoroPromise<void>::get_return_object() noexcept {
    return CoroTask<void>(CoroTask<void>::Handle::from_promise(*this));
}
template <class T, class Alloc>
inline auto collectAll(std::vector<CoroTask<T>, Alloc>&& tasks) {
    return CollectAllAwaiter<std::vector<CoroTask<T>, Alloc>>(std::move(tasks));
}
template <typename... Ts>
inline auto collectAll(CoroTask<Ts>... tasks)
    requires(sizeof...(Ts) > 0)
{
    return CollectAllTupleAwaiter<CoroTask, Ts...>(std::move(tasks)...);
}
template <class F, class... Args>
    requires(traits::is_specialization_of_v<std::invoke_result_t<F, Args...>, CoroTask>)
auto keepThis(F f, Args... args) -> std::invoke_result_t<F, Args...> {
    co_return co_await std::invoke(f, std::move(args)...);
}

} // namespace ll::coro

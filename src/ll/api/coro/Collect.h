#pragma once

#include <atomic>

#include "ll/api/coro/CoroPromise.h"

namespace ll::coro {

template <class Container>
struct CollectAllAwaiter {
public:
    using ExpectedResult = typename Container::value_type::ExpectedResult;

    using allocator_type =
        typename std::allocator_traits<typename Container::allocator_type>::template rebind_alloc<ExpectedResult>;

private:
    std::coroutine_handle<>                     handle;
    Container                                   tasks;
    std::vector<ExpectedResult, allocator_type> results;
    std::atomic_size_t                          counter;

public:
    CollectAllAwaiter(const CollectAllAwaiter&)            = delete;
    CollectAllAwaiter& operator=(const CollectAllAwaiter&) = delete;

    constexpr CollectAllAwaiter(Container&& input)
    : tasks(std::move(input)),
      results(tasks.get_allocator()),
      counter(tasks.size()) {
        results.resize(tasks.size());
    }
    constexpr CollectAllAwaiter(CollectAllAwaiter&&) = default;

    constexpr bool await_ready() const noexcept { return tasks.empty(); }

    template <std::derived_from<CoroPromiseBase> P>
    void await_suspend(std::coroutine_handle<P> h) {
        handle                  = h;
        NonNullExecutorRef exec = h.promise().exec;
        for (size_t i = 0; i < tasks.size(); ++i) {
            tasks[i].launch(exec, [this, i](auto&& res) {
                try {
                    results[i] = std::move(res);
                } catch (...) {}
                if (--counter == 0) {
                    handle.resume();
                }
            });
        }
    }

    constexpr auto await_resume() { return std::move(results); }
};
template <template <class> class T, class... Ts>
class CollectAllTupleAwaiter {
public:
    using Input  = std::tuple<T<Ts>...>;
    using Result = std::tuple<typename T<Ts>::ExpectedResult...>;

private:
    std::coroutine_handle<> handle;
    std::atomic_size_t      counter{sizeof...(Ts)};
    Input                   tasks;
    Result                  results;

public:
    CollectAllTupleAwaiter(const CollectAllTupleAwaiter&)            = delete;
    CollectAllTupleAwaiter& operator=(const CollectAllTupleAwaiter&) = delete;

    constexpr CollectAllTupleAwaiter(T<Ts>&&... in) : tasks(std::move(in)...) {}
    constexpr CollectAllTupleAwaiter(Input&& in) : tasks(std::move(in)) {}
    constexpr CollectAllTupleAwaiter(CollectAllTupleAwaiter&&) = default;

    constexpr bool await_ready() const noexcept { return sizeof...(Ts) == 0; }

    template <std::derived_from<CoroPromiseBase> P>
    void await_suspend(std::coroutine_handle<P> h) {
        handle                  = h;
        NonNullExecutorRef exec = h.promise().exec;
        [&]<size_t... I>(std::index_sequence<I...>) {
            (
                [&](auto& task, auto& result) {
                    task.launch(exec, [this, &result](auto&& res) {
                        try {
                            result = std::move(res);
                        } catch (...) {}
                        if (--counter == 0) {
                            handle.resume();
                        }
                    });
                }(std::get<I>(tasks), std::get<I>(results)),
                ...
            );
        }(std::index_sequence_for<Ts...>());
    }

    constexpr auto await_resume() { return std::move(results); }
};
} // namespace ll::coro

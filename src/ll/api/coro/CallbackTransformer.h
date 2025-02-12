#pragma once

#include <coroutine>
#include <optional>
#include <semaphore>

#include "ll/api/coro/Executor.h"

namespace ll::coro {
template <class T>
class CallbackTransformer {
    using ValueStorage = std::conditional_t<std::is_lvalue_reference_v<T>, std::add_pointer_t<T>, std::optional<T>>;
    struct Data {
        ExecutorRef             exec;
        std::coroutine_handle<> handle;
        ValueStorage            value{};
        std::binary_semaphore   sem{0};
        std::atomic_bool        finished{false};

        void reset() {
            if constexpr (std::is_lvalue_reference_v<T>) {
                value = nullptr;
            } else {
                value.reset();
            }
        }
        void execute() {
            if (auto h = exchange(handle, nullptr)) {
                exec->execute(h);
            }
        }
    };

    std::shared_ptr<Data> data;

public:
    class ValueSetter {
        std::shared_ptr<Data> data;

    public:
        explicit ValueSetter(CallbackTransformer const& t) : data(t.data) {}

        ValueSetter(ValueSetter const&)            = delete;
        ValueSetter& operator=(ValueSetter const&) = delete;
        ValueSetter(ValueSetter&&)                 = default;
        ValueSetter& operator=(ValueSetter&&)      = default;

        bool finished() const { return data->finished; }
        void finish() const { data->finished.store(true); }

        template <class... Args>
            requires(!std::is_lvalue_reference_v<T>)
        constexpr void emplace(Args&&... args) const {
            data->sem.acquire();
            data->value.emplace(std::forward<Args>(args)...);
            data->execute();
        }

        constexpr void emplace(T& t) const
            requires(std::is_lvalue_reference_v<T>)
        {
            data->sem.acquire();
            data->value = std::addressof(t);
            data->execute();
        }

        ~ValueSetter() {
            if (data) {
                finish();
                data->execute();
            }
        }
    };

    class Iterator {
        std::shared_ptr<Data> data;

        class IncAwaiter {
            Iterator& iter;

        public:
            IncAwaiter(Iterator& iter) : iter(iter) {}

            constexpr bool await_ready() const noexcept { return iter.data == nullptr || iter.data->finished; }
            void           await_suspend(std::coroutine_handle<> handle) {
                iter.data->handle = handle;
                iter.data->reset();
                iter.data->sem.release();
            }
            constexpr Iterator& await_resume() const noexcept {
                if (iter.data && iter.data->finished && !iter.data->value) {
                    iter.data.reset();
                }
                return iter;
            }
        };

    public:
        Iterator() = default;
        explicit Iterator(CallbackTransformer const& t) : data(t.data) {}

        Iterator(Iterator const&)            = delete;
        Iterator& operator=(Iterator const&) = delete;
        Iterator(Iterator&&)                 = default;
        Iterator& operator=(Iterator&&)      = default;

        [[nodiscard]] IncAwaiter operator++() { return IncAwaiter{*this}; }

        [[nodiscard]] bool operator==(Iterator const& other) const noexcept { return data == other.data; }

        [[nodiscard]] bool operator==(std::nullptr_t) const noexcept { return data == nullptr; }

        [[nodiscard]] operator bool() const noexcept { return data != nullptr; }

        [[nodiscard]] T&& operator*() const noexcept { return static_cast<T&&>(*data->value); }

        [[nodiscard]] std::add_pointer_t<T> operator->() const noexcept { return std::addressof(*data->value); }

        ~Iterator() {
            if (data) {
                data->finished.store(true);
                data->sem.release();
            }
        }
    };

    CallbackTransformer() : data(std::make_shared<Data>()) {}

    CallbackTransformer(CallbackTransformer const&)            = delete;
    CallbackTransformer& operator=(CallbackTransformer const&) = delete;
    CallbackTransformer(CallbackTransformer&&)                 = default;
    CallbackTransformer& operator=(CallbackTransformer&&)      = default;

    ValueSetter getValueSetter() const { return ValueSetter{*this}; }

    [[nodiscard]] Iterator end() noexcept { return {}; }

    [[nodiscard]] auto begin() noexcept {
        class BeginAwaiter {
            CallbackTransformer& ct;

        public:
            BeginAwaiter(CallbackTransformer& ct) : ct(ct) {}

            constexpr bool await_ready() const noexcept { return ct.data->finished; }
            void           await_suspend(std::coroutine_handle<> handle) {
                ct.data->handle = handle;
                ct.data->sem.release();
            }
            constexpr Iterator await_resume() const noexcept {
                if (ct.data->finished && !ct.data->value) {
                    return {};
                }
                return Iterator{ct};
            }
            constexpr void setExecutor(ExecutorRef ex) { ct.data->exec = ex; }
        };
        return BeginAwaiter{*this};
    }

    ~CallbackTransformer() {
        if (data) {
            data->finished.store(true);
            data->execute();
        }
    }
};
} // namespace ll::coro

#pragma once

#include <concepts>
#include <coroutine>
#include <cstddef>
#include <exception>
#include <type_traits>

namespace ll::coro {

template <class T>
struct Generator {
    using value     = std::remove_cvref_t<T>;
    using reference = T&&;
    using yielded   = std::conditional_t<std::is_reference_v<reference>, reference, reference const&>;


    struct promise_type {
        std::add_pointer_t<yielded> ptr;
        std::exception_ptr          exception;

        Generator get_return_object() noexcept { return Generator{*this}; }

        std::suspend_always initial_suspend() noexcept { return {}; }

        std::suspend_always final_suspend() noexcept { return {}; }

        void unhandled_exception() noexcept { exception = std::current_exception(); }

        void rethrow() {
            if (exception) {
                std::rethrow_exception(exception);
            }
        }
        std::suspend_always yield_value(yielded val) noexcept {
            ptr = std::addressof(val);
            return {};
        }
        auto yield_value(std::remove_reference_t<yielded> const& lval)
            requires std::is_rvalue_reference_v<yielded>
                  && std::constructible_from<std::remove_cvref_t<yielded>, std::remove_reference_t<yielded> const&>
        {
            struct YieldCopied {
                std::remove_cvref_t<yielded> storage;
                constexpr YieldCopied(std::remove_reference_t<yielded> const& v) : storage(v) {}
                constexpr bool await_ready() const noexcept { return false; }
                constexpr void await_suspend(std::coroutine_handle<promise_type> h) noexcept {
                    h.promise().ptr = std::addressof(storage);
                }
                constexpr void await_resume() const noexcept {}
            };
            return YieldCopied{lval};
        }
        void return_void() noexcept {}

        template <class U>
        U&& await_transform(U&&) = delete;
    };

    struct iterator {
        using iterator_category = std::input_iterator_tag;
        using difference_type   = ptrdiff_t;
        using value_type        = value;
        using reference         = reference;
        using pointer           = std::add_pointer_t<yielded>;

        std::coroutine_handle<promise_type> handle = nullptr;

        iterator() = default;
        explicit iterator(std::coroutine_handle<promise_type> handle) noexcept : handle(handle) {}

        iterator& operator++() {
            handle.resume();
            if (handle.done()) {
                std::exchange(handle, nullptr).promise().rethrow();
            }

            return *this;
        }

        void operator++(int) { ++*this; }

        [[nodiscard]] bool operator==(iterator const& other) const noexcept { return handle == other.handle; }

        [[nodiscard]] bool operator!=(iterator const& other) const noexcept { return !(*this == other); }

        [[nodiscard]] reference operator*() const noexcept { return static_cast<reference>(*handle.promise().ptr); }

        [[nodiscard]] pointer operator->() const noexcept { return handle.promise().ptr; }
    };
    [[nodiscard]] iterator begin() {
        if (handle) {
            handle.resume();
            if (handle.done()) {
                handle.promise().rethrow();
                return {};
            }
        }
        return iterator{handle};
    }

    [[nodiscard]] iterator end() noexcept { return {}; }

    constexpr Generator(Generator&& other) noexcept : handle(std::exchange(other.handle, nullptr)) {}

    constexpr ~Generator() {
        if (handle) {
            handle.destroy();
        }
    }
    constexpr Generator() = default;

    Generator& operator=(Generator&& other) noexcept {
        std::swap(other.handle, handle);
        return *this;
    }

private:
    constexpr explicit Generator(promise_type& promise) noexcept
    : handle(std::coroutine_handle<promise_type>::from_promise(promise)) {}

    std::coroutine_handle<promise_type> handle = nullptr;
};
} // namespace ll::coro

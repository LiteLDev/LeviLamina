#pragma once

#include <concepts>
#include <coroutine>
#include <cstddef>
#include <cstdint>
#include <exception>
#include <functional>
#include <iterator>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"

namespace ll::coro {

template <class Range>
    requires concepts::RangeLoopable<Range>
struct ElementsOf {
    static constexpr bool useRef = std::is_lvalue_reference_v<Range&&>;
    using Stored =
        std::conditional_t<useRef, std::reference_wrapper<std::remove_reference_t<Range>>, std::remove_cvref_t<Range>>;

    Stored range;

    constexpr explicit ElementsOf(
        Range&& range_
    ) noexcept(std::is_nothrow_constructible_v<Stored, decltype(std::forward<Range>(range_))>)
    : range(makeStored(std::forward<Range>(range_))) {}

    [[nodiscard]] constexpr decltype(auto) get() & noexcept {
        if constexpr (useRef) {
            return range.get();
        } else {
            return (range);
        }
    }

    [[nodiscard]] constexpr decltype(auto) get() const& noexcept {
        if constexpr (useRef) {
            return range.get();
        } else {
            return (range);
        }
    }

    [[nodiscard]] constexpr decltype(auto) get() && noexcept {
        if constexpr (useRef) {
            return range.get();
        } else {
            return std::move(range);
        }
    }

private:
    [[nodiscard]] static constexpr Stored makeStored(Range&& range_) {
        if constexpr (useRef) {
            return std::ref(range_);
        } else {
            return std::forward<Range>(range_);
        }
    }
};

template <class Range>
ElementsOf(Range&&) -> ElementsOf<Range&&>;

template <class T>
struct Generator {
    using value     = std::remove_cvref_t<T>;
    using reference = T&&;
    using yielded   = reference;


    struct promise_type {
        struct NestInfo {
            std::exception_ptr                  exception;
            std::coroutine_handle<promise_type> parent;
            std::coroutine_handle<promise_type> root;
        };

        struct YieldNested {
            NestInfo  nestedInfo{};
            Generator nested;

            explicit YieldNested(Generator&& nested_) noexcept : nested(std::move(nested_)) {}

            [[nodiscard]] bool await_ready() const noexcept { return !nested.handle; }

            std::coroutine_handle<promise_type> await_suspend(std::coroutine_handle<promise_type> h) noexcept {
                auto nestedHandle = nested.handle;
                nestedInfo.parent = h;
                if (auto* info = h.promise().tryGetNestInfo()) {
                    nestedInfo.root = info->root;
                } else {
                    nestedInfo.root = h;
                }

                nestedInfo.root.promise().setTop(nestedHandle);
                nestedHandle.promise().setNestInfo(std::addressof(nestedInfo));
                return nestedHandle;
            }

            void await_resume() {
                if (nestedInfo.exception) {
                    std::rethrow_exception(nestedInfo.exception);
                }
            }
        };

        std::add_pointer_t<yielded> ptr = nullptr;
        uintptr_t                   data =
            reinterpret_cast<uintptr_t>(std::coroutine_handle<promise_type>::from_promise(*this).address());

        struct FinalAwaiter {
            constexpr bool await_ready() const noexcept { return false; }

            constexpr std::coroutine_handle<> await_suspend(std::coroutine_handle<promise_type> h) noexcept {
                if (auto* info = h.promise().tryGetNestInfo()) {
                    info->root.promise().setTop(info->parent);
                    return info->parent;
                }

                return std::noop_coroutine();
            }

            constexpr void await_resume() const noexcept {}
        };

        Generator get_return_object() noexcept { return Generator{*this}; }

        std::suspend_always initial_suspend() noexcept { return {}; }

        FinalAwaiter final_suspend() noexcept { return {}; }

        void unhandled_exception() {
            if (auto* info = tryGetNestInfo()) {
                info->exception = std::current_exception();
            } else {
                throw;
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

        template <class U>
        auto yield_value(ElementsOf<Generator<U>> elements)
            requires std::same_as<typename Generator<U>::yielded, yielded>
        {
            return YieldNested{std::move(elements).get()};
        }

        template <class U>
        auto yield_value(ElementsOf<Generator<U>&> elements)
            requires std::same_as<typename Generator<U>::yielded, yielded>
        {
            return YieldNested{std::move(elements).get()};
        }

        template <class Range>
        auto yield_value(ElementsOf<Range> elements) {
            return YieldNested{Generator::makeElementGenerator(std::move(elements).get())};
        }
        void return_void() noexcept {}

        template <class U>
        U&& await_transform(U&&) = delete;

    private:
        [[nodiscard]] NestInfo* tryGetNestInfo() const noexcept {
            if ((data & 1U) != 0) {
                return reinterpret_cast<NestInfo*>(data ^ 1U);
            }

            return nullptr;
        }

        [[nodiscard]] std::coroutine_handle<promise_type> getTop() const noexcept {
            return std::coroutine_handle<promise_type>::from_address(reinterpret_cast<void*>(data));
        }

        void setNestInfo(NestInfo* info) noexcept { data = reinterpret_cast<uintptr_t>(info) | 1U; }

        void setTop(std::coroutine_handle<promise_type> top) noexcept {
            data = reinterpret_cast<uintptr_t>(top.address());
        }

        friend struct iterator;
        friend struct FinalAwaiter;
    };

    struct iterator {
        using iterator_category = std::input_iterator_tag;
        using difference_type   = ptrdiff_t;
        using value_type        = Generator::value;
        using reference         = Generator::reference;
        using pointer           = std::add_pointer_t<yielded>;

        std::coroutine_handle<promise_type> handle = nullptr;

        iterator() = default;
        explicit iterator(std::coroutine_handle<promise_type> handle) noexcept : handle(handle) {}

        iterator& operator++() {
            handle.promise().getTop().resume();
            if (handle.done()) {
                handle = nullptr;
            }

            return *this;
        }

        void operator++(int) { ++*this; }

        [[nodiscard]] bool operator==(iterator const& other) const noexcept { return handle == other.handle; }

        [[nodiscard]] reference operator*() const noexcept {
            return static_cast<reference>(*handle.promise().getTop().promise().ptr);
        }

        [[nodiscard]] pointer operator->() const noexcept { return handle.promise().getTop().promise().ptr; }
    };
    [[nodiscard]] iterator begin() {
        if (handle) {
            handle.resume();
            if (handle.done()) {
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
    template <class>
    friend struct Generator;

    constexpr explicit Generator(promise_type& promise) noexcept
    : handle(std::coroutine_handle<promise_type>::from_promise(promise)) {}

    template <class Range>
        requires concepts::RangeLoopable<Range>
    static Generator makeElementGenerator(Range&& range) {
        for (auto&& element : range) {
            co_yield element;
        }
    }

    std::coroutine_handle<promise_type> handle = nullptr;
};
} // namespace ll::coro

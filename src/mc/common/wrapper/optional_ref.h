#pragma once

#include <optional>
#include <stdexcept>
#include <type_traits>

#include "ll/api/base/Macro.h"

template <typename T>
    requires(!std::is_reference_v<T>)
class optional_ref {
private:
    T* mPtr = nullptr;
    // NOLINTBEGIN
public:
    [[nodiscard]] constexpr optional_ref() noexcept = default;

    [[nodiscard]] constexpr optional_ref(std::nullopt_t) noexcept {}

    [[nodiscard]] constexpr optional_ref(std::nullptr_t) noexcept {}

    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(std::optional<U>& o) : mPtr(o ? &*o : nullptr) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(U* p) : mPtr(p) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(U& r) : mPtr(std::addressof(r)) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(U const& r) : mPtr(std::addressof(r)) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(const std::optional<U>& o) : mPtr(o ? &*o : nullptr) {}

    template <typename U = T>
    [[nodiscard]] constexpr optional_ref(optional_ref<std::remove_const_t<U>> rhs)
        requires(std::is_const_v<U>)
    : mPtr(rhs.as_ptr()) {}

    [[nodiscard]] constexpr optional_ref(optional_ref&&) noexcept = default;

    LL_CLANG_CEXPR optional_ref& operator=(optional_ref&&) noexcept = default;

    [[nodiscard]] constexpr optional_ref(optional_ref const&) noexcept = default;

    LL_CLANG_CEXPR optional_ref& operator=(optional_ref const&) noexcept = default;

    [[nodiscard]] constexpr explicit operator bool() const noexcept { return mPtr != nullptr; }

    [[nodiscard]] constexpr bool has_value() const noexcept { return mPtr != nullptr; }

    [[nodiscard]] constexpr T* as_ptr() const noexcept { return mPtr; }

    [[nodiscard]] constexpr T& get() const {
        if (!has_value()) {
            throw std::runtime_error{"bad optional_ref access"};
        }
        return *mPtr;
    }

    [[nodiscard]] constexpr T& value() const { return get(); }
    [[nodiscard]] constexpr T& operator*() const { return get(); }
    [[nodiscard]] constexpr T* operator->() const { return &get(); }
    [[nodiscard]] constexpr    operator T&() const { return get(); }
    [[nodiscard]] constexpr    operator T*() const { return &get(); }
    [[nodiscard]] constexpr decltype(auto) operator[](int index) const { return get()[index]; }

    template <class U>
    [[nodiscard]] constexpr T& value_or(U& right) const& {
        if (has_value()) {
            return *mPtr;
        }
        return static_cast<T&>(right);
    }

    template <class U>
    [[nodiscard]] constexpr T value_or(U&& right) const {
        if (has_value()) {
            return *mPtr;
        }
        return std::forward<U>(right);
    }

    template <typename U = std::decay_t<T>>
        requires(std::is_constructible_v<U, T>)
    [[nodiscard]] constexpr std::optional<U> copy_as_optional() const {
        return mPtr ? std::optional<U>(*mPtr) : std::nullopt;
    }

    template <class... Types>
    constexpr auto operator()(Types&&... args) const
        noexcept(noexcept(std::invoke(*mPtr, static_cast<Types&&>(args)...)))
            -> decltype(std::invoke(*mPtr, static_cast<Types&&>(args)...)) {
        return std::invoke(*mPtr, static_cast<Types&&>(args)...);
    }

    [[nodiscard]] decltype(auto) begin() { return get().begin(); }

    [[nodiscard]] decltype(auto) cbegin() const { return get().cbegin(); }

    [[nodiscard]] decltype(auto) rbegin() { return get().rbegin(); }

    [[nodiscard]] decltype(auto) crbegin() const { return get().crbegin(); }

    [[nodiscard]] decltype(auto) end() { return get().end(); }

    [[nodiscard]] decltype(auto) cend() const { return get().cend(); }

    [[nodiscard]] decltype(auto) rend() { return get().rend(); }

    [[nodiscard]] decltype(auto) crend() const { return get().crend(); }
};
// NOLINTEND
template <typename T>
optional_ref(T const&) -> optional_ref<const T>;

template <typename T>
optional_ref(T&) -> optional_ref<T>;

template <typename T>
optional_ref(std::optional<T> const&) -> optional_ref<const T>;

template <typename T>
optional_ref(std::optional<T>&) -> optional_ref<T>;

template <typename T>
optional_ref(T*) -> optional_ref<T>;

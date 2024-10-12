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
    [[nodiscard]] constexpr optional_ref(std::optional<U>& o) noexcept : mPtr(o ? std::addressof(*o) : nullptr) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(U* p) noexcept : mPtr(p) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(U& r) noexcept : mPtr(std::addressof(r)) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(U const& r) noexcept : mPtr(std::addressof(r)) {}


    template <class U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(const std::optional<U>& o) noexcept : mPtr(o ? &*o : nullptr) {}

    template <typename U>
        requires(std::is_convertible_v<U*, T*>)
    [[nodiscard]] constexpr optional_ref(optional_ref<U> rhs) noexcept : mPtr(rhs.as_ptr()) {}

    [[nodiscard]] constexpr optional_ref(optional_ref&&) noexcept = default;

    LL_MAY_CONSTEXPR optional_ref& operator=(optional_ref&&) noexcept = default;

    [[nodiscard]] constexpr optional_ref(optional_ref const&) noexcept = default;

    LL_MAY_CONSTEXPR optional_ref& operator=(optional_ref const&) noexcept = default;

    [[nodiscard]] constexpr explicit operator bool() const noexcept { return mPtr != nullptr; }

    [[nodiscard]] constexpr bool has_value() const noexcept { return mPtr != nullptr; }

    [[nodiscard]] constexpr T* as_ptr() const noexcept { return mPtr; }

    [[nodiscard]] constexpr T& value() const {
        if (!has_value()) {
            throw std::bad_optional_access{};
        }
        return *mPtr;
    }

    [[nodiscard]] constexpr T& get() const { return value(); }
    [[nodiscard]] constexpr T& operator*() const noexcept { return *as_ptr(); }
    [[nodiscard]] constexpr T* operator->() const noexcept { return as_ptr(); }

    [[nodiscard]] constexpr operator T&() const { return value(); }
    [[nodiscard]] constexpr operator T*() const noexcept { return as_ptr(); }

    template <class U>
    [[nodiscard]] constexpr T& value_or(U& right) const& {
        if (has_value()) {
            return *mPtr;
        }
        return static_cast<T&>(right);
    }

    template <class U>
    [[nodiscard]] constexpr T value_or(U&& right) const&& {
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
    constexpr decltype(auto) operator()(Types&&... args) const
        noexcept(noexcept(std::invoke(value(), static_cast<Types&&>(args)...))) {
        return (std::invoke(value(), static_cast<Types&&>(args)...));
    }
    template <class Arg>
    [[nodiscard]] constexpr decltype(auto) operator[](Arg&& index) const {
        return (value()[std::forward<Arg>(index)]);
    }
    [[nodiscard]] constexpr decltype(auto) end() const { return (value().end()); }
    [[nodiscard]] constexpr decltype(auto) begin() const { return (value().begin()); }
    [[nodiscard]] constexpr decltype(auto) cend() const { return (value().cend()); }
    [[nodiscard]] constexpr decltype(auto) cbegin() const { return (value().cbegin()); }
    [[nodiscard]] constexpr decltype(auto) rend() const { return (value().rend()); }
    [[nodiscard]] constexpr decltype(auto) rbegin() const { return (value().rbegin()); }
    [[nodiscard]] constexpr decltype(auto) crend() const { return (value().crend()); }
    [[nodiscard]] constexpr decltype(auto) crbegin() const { return (value().crbegin()); }

#if LL_HAS_CXX23
    template <class Fn>
    constexpr auto and_then(Fn&& fn) const {
        using Ret = std::invoke_result_t<Fn, T&>;
        if (has_value()) {
            return std::invoke(std::forward<Fn>(fn), static_cast<T&>(*mPtr));
        } else {
            return std::remove_cvref_t<Ret>{};
        }
    }
    template <class Fn>
    constexpr auto transform(Fn&& fn) const {
        using Ret = std::invoke_result_t<Fn, T&>;
        if constexpr (std::is_lvalue_reference_v<Ret> || std::is_pointer_v<Ret>) {
            using UnwrapT = std::remove_pointer_t<std::remove_reference_t<Ret>>;
            if (has_value()) {
                return optional_ref<UnwrapT>{std::invoke(std::forward<Fn>(fn), static_cast<T&>(*mPtr))};
            } else {
                return optional_ref<UnwrapT>{};
            }
        } else {
            using UnwrapT = std::remove_cv_t<Ret>;
            if (has_value()) {
                return std::optional<UnwrapT>{
                    ll::internal::stdOptionalConstructFromInvokeTag{},
                    std::forward<Fn>(fn),
                    static_cast<T&>(*mPtr)
                };
            } else {
                return std::optional<UnwrapT>{};
            }
        }
    }
    template <std::invocable<> Fn>
    constexpr auto or_else(Fn&& fn) const -> std::invoke_result_t<Fn> {
        if (has_value()) {
            return *this;
        } else {
            return std::invoke(std::forward<Fn>(fn));
        }
    }
#endif // LL_HAS_CXX23
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

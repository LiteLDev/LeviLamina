#pragma once

#include <optional>
#include <stdexcept>

template <typename T>
class optional_ref {
private:
    T* const mPtr = nullptr;

    static_assert(!std::is_reference_v<T>, "T must not be a reference type (use a pointer?)");

    template <typename U>
    static constexpr bool IsCompatibleV =
        std::is_same_v<std::decay_t<T>, std::decay_t<U>> && std::is_convertible_v<U*, T*>;
    // NOLINTBEGIN
public:
    [[nodiscard]] constexpr optional_ref() noexcept = default;

    [[nodiscard]] constexpr optional_ref(std::nullopt_t) noexcept {}

    [[nodiscard]] constexpr optional_ref(std::nullptr_t) noexcept {}

    template <typename U>
    [[nodiscard]] constexpr optional_ref(std::optional<U>& o)
        requires(IsCompatibleV<U>)
    : mPtr(o ? &*o : nullptr) {}

    template <typename U>
    [[nodiscard]] constexpr optional_ref(U* p)
        requires(IsCompatibleV<U>)
    : mPtr(p) {}

    template <typename U>
    [[nodiscard]] constexpr optional_ref(U& r)
        requires(IsCompatibleV<U>)
    : mPtr(std::addressof(r)) {}

    template <typename U>
    [[nodiscard]] constexpr optional_ref(const U& r)
        requires(IsCompatibleV<U>)
    : mPtr(std::addressof(r)) {}

    template <typename U>
    [[nodiscard]] constexpr optional_ref(const std::optional<U>& o)
        requires(std::is_const_v<T> && IsCompatibleV<U>)
    : mPtr(o ? &*o : nullptr) {}


    template <typename U = T>
    [[nodiscard]] constexpr optional_ref(optional_ref<std::remove_const_t<U>> rhs)
        requires(std::is_const_v<U>)
    : mPtr(rhs.as_ptr()) {}

    [[nodiscard]] constexpr optional_ref(optional_ref const&) = default;

    optional_ref& operator=(optional_ref const& other) = delete;

    [[nodiscard]] constexpr explicit operator bool() const noexcept { return mPtr != nullptr; }

    [[nodiscard]] constexpr bool has_value() const noexcept { return mPtr != nullptr; }

    [[nodiscard]] constexpr T* as_ptr() const noexcept { return mPtr; }

    [[nodiscard]] constexpr T* operator->() const {
        if (!has_value()) { throw std::runtime_error{"bas optional_ref access"}; }
        return mPtr;
    }
    [[nodiscard]] constexpr T& get() const {
        if (!has_value()) { throw std::runtime_error{"bas optional_ref access"}; }
        return *mPtr;
    }

    [[nodiscard]] constexpr T& value() const { return get(); }

    [[nodiscard]] constexpr T& operator*() const { return get(); }

    template <class T2>
    [[nodiscard]] constexpr std::remove_cv_t<T> const& value_or(T2&& right) const&
        requires(std::is_convertible_v<T const&, std::remove_cv_t<T>> && std::is_convertible_v<T2, T>)
    {
        if (has_value()) { return static_cast<T const&>(*mPtr); }
        return static_cast<std::remove_cv_t<T>>(std::forward<T2>(right));
    }

    [[nodiscard]] constexpr operator T&() const {
        if (!has_value()) { throw std::runtime_error{"bas optional_ref access"}; }
        return *mPtr;
    }

    template <typename U = std::decay_t<T>>
    [[nodiscard]] constexpr std::optional<U> copy_as_optional() const
        requires(std::is_constructible_v<U, T>)
    {
        return mPtr ? std::optional<U>(*mPtr) : std::nullopt;
    }

    template <class... Types>
    constexpr auto operator()(Types&&... args) const
        noexcept(noexcept(std::invoke(*mPtr, static_cast<Types&&>(args)...)))
            -> decltype(std::invoke(*mPtr, static_cast<Types&&>(args)...)) {
        return std::invoke(*mPtr, static_cast<Types&&>(args)...);
    }
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

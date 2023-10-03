#pragma once

#include <optional>

template <typename T>
class optional_ref {
private:
    T* const ptr_ = nullptr;

    static_assert(!std::is_reference_v<T>, "T must not be a reference type (use a pointer?)");

    template <typename U>
    static constexpr bool IsCompatibleV =
        std::is_same_v<std::decay_t<T>, std::decay_t<U>> && std::is_convertible_v<U*, T*>;
    // NOLINTBEGIN
public:
    constexpr optional_ref() noexcept = default;

    constexpr optional_ref(std::nullopt_t) noexcept {}

    constexpr optional_ref(std::nullptr_t) noexcept {}

    // template <typename U>
    //     requires(IsCompatibleV<U>)
    // constexpr optional_ref(std::optional<U> const& o)
    //     requires(std::is_const_v<T>)
    // : ptr_(o ? &*o : nullptr) {}

    template <typename U>
        requires(IsCompatibleV<U>)
    constexpr optional_ref(std::optional<U>& o) : ptr_(o ? &*o : nullptr) {}

    template <typename U>
        requires(IsCompatibleV<U>)
    constexpr optional_ref(U* p) : ptr_(p) {}

    // template <typename U>
    //     requires(IsCompatibleV<U>)
    // constexpr optional_ref(U const& r) : ptr_(std::addressof(r)) {}

    template <typename U>
        requires(IsCompatibleV<U>)
    constexpr optional_ref(U& r) : ptr_(std::addressof(r)) {}

    template <typename U = T>
        requires(std::is_const_v<U>)
    constexpr optional_ref(optional_ref<std::remove_const_t<U>> rhs) : ptr_(rhs.as_ptr()) {}

    constexpr optional_ref(optional_ref const&) = default;

    optional_ref& operator=(optional_ref const&) = delete;

    [[nodiscard]] constexpr explicit operator bool() const noexcept { return ptr_ != nullptr; }

    [[nodiscard]] constexpr bool has_value() const noexcept { return ptr_ != nullptr; }

    [[nodiscard]] constexpr T* as_ptr() const noexcept { return ptr_; }

    constexpr T* operator->() const {
        if (!has_value()) {
            throw std::bad_optional_access{};
        }
        return ptr_;
    }
    [[nodiscard]] constexpr T& get() const {
        if (!has_value()) {
            throw std::bad_optional_access{};
        }
        return *ptr_;
    }

    [[nodiscard]] constexpr T& value() const { return get(); }

    [[nodiscard]] constexpr T& operator*() const { return get(); }

    template <class T2>
    [[nodiscard]] constexpr std::remove_cv_t<T> value_or(T2&& right) const&
        requires(std::is_convertible_v<T const&, std::remove_cv_t<T>> && std::is_convertible_v<T2, T>)
    {
        if (has_value()) {
            return static_cast<T const&>(*ptr_);
        }
        return static_cast<std::remove_cv_t<T>>(std::forward<T2>(right));
    }

    [[nodiscard]] constexpr operator T&() const {
        if (!has_value()) {
            throw std::bad_optional_access{};
        }
        return *ptr_;
    }

    template <typename U = std::decay_t<T>>
        requires(std::is_constructible_v<U, T>)
    [[nodiscard]] constexpr std::optional<U> copy_as_optional() const {
        return ptr_ ? std::optional<U>(*ptr_) : std::nullopt;
    }

    template <class... Types>
    constexpr auto operator()(Types&&... args) const
        noexcept(noexcept(std::invoke(*ptr_, static_cast<Types&&>(args)...)))
            -> decltype(std::invoke(*ptr_, static_cast<Types&&>(args)...)) {
        return std::invoke(*ptr_, static_cast<Types&&>(args)...);
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

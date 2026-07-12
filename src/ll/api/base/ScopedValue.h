#pragma once

#include <type_traits>
#include <utility>

namespace ll {

template <class T>
class [[nodiscard]] ScopedValue {
public:
    explicit ScopedValue(T& value, T replacement) noexcept(
        std::is_nothrow_move_constructible_v<T> && std::is_nothrow_move_assignable_v<T>
    )
    : mValue(value),
      mPrevious(std::exchange(value, std::move(replacement))) {}

    ~ScopedValue() noexcept(std::is_nothrow_move_assignable_v<T>) { mValue = std::move(mPrevious); }

    ScopedValue(ScopedValue const&)            = delete;
    ScopedValue& operator=(ScopedValue const&) = delete;
    ScopedValue(ScopedValue&&)                 = delete;
    ScopedValue& operator=(ScopedValue&&)      = delete;

private:
    T& mValue;
    T  mPrevious;
};

template <class T, class U>
ScopedValue(T&, U&&) -> ScopedValue<T>;

} // namespace ll

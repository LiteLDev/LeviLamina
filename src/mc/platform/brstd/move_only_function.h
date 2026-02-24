#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include <type_traits>

namespace brstd {

template <typename T0>
class move_only_function {
public:
    move_only_function() noexcept = default;
    move_only_function(std::nullptr_t) noexcept {}
    move_only_function(move_only_function&&) noexcept            = default;
    move_only_function& operator=(move_only_function&&) noexcept = default;
    move_only_function(move_only_function const&)                = delete;
    move_only_function& operator=(move_only_function const&)     = delete;

    template <typename F, typename = std::enable_if_t<!std::is_same_v<std::decay_t<F>, move_only_function>>>
    move_only_function(F&&) noexcept : mHasValue(true) {}

    template <typename F, typename = std::enable_if_t<!std::is_same_v<std::decay_t<F>, move_only_function>>>
    move_only_function& operator=(F&&) noexcept {
        mHasValue = true;
        return *this;
    }

    move_only_function& operator=(std::nullptr_t) noexcept {
        mHasValue = false;
        return *this;
    }

    explicit operator bool() const noexcept { return mHasValue; }
    bool     operator==(std::nullptr_t) const noexcept { return !mHasValue; }
    bool     operator!=(std::nullptr_t) const noexcept { return mHasValue; }

private:
    bool mHasValue{false};
};

template <typename T0>
bool operator==(std::nullptr_t, move_only_function<T0> const& fn) noexcept {
    return fn == nullptr;
}

template <typename T0>
bool operator!=(std::nullptr_t, move_only_function<T0> const& fn) noexcept {
    return fn != nullptr;
}

} // namespace brstd

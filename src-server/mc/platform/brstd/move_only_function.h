#pragma once

#include "mc/platform/brstd/detail/function_invoke.h"

namespace brstd {

template <class Signature>
class move_only_function
: public detail::function::function_invoke<detail::function::DerivedType::MoveOnly, Signature> {
    using base = detail::function::function_invoke<detail::function::DerivedType::MoveOnly, Signature>;

public:
    using base::base;
    using base::operator();
    move_only_function(move_only_function&&) noexcept            = default;
    move_only_function& operator=(move_only_function&&) noexcept = default;
    move_only_function(move_only_function const&)                = delete;
    move_only_function& operator=(move_only_function const&)     = delete;
    template <class F>
        requires std::is_constructible_v<move_only_function, F>
    move_only_function& operator=(F&& f) {
        *this = move_only_function{std::forward<F>(f)};
        return *this;
    }
    friend void swap(move_only_function& f1, move_only_function& f2) noexcept { f1.swap(f2); }
};
} // namespace brstd

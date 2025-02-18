#pragma once

#include "mc/platform/brstd/detail/function.h"

namespace brstd {

template <class Signature>
class copyable_function : public detail::function::function_invoke<detail::function::DerivedType::Copyable, Signature> {
    using base = detail::function::function_invoke<detail::function::DerivedType::Copyable, Signature>;

public:
    using base::base;
    using base::operator();
    copyable_function(copyable_function&&) noexcept            = default;
    copyable_function& operator=(copyable_function&&) noexcept = default;
    copyable_function(copyable_function const&)                = default;
    copyable_function& operator=(copyable_function const&)     = default;
    template <class F>
        requires std::is_constructible_v<copyable_function, F>
    copyable_function& operator=(F&& f) {
        *this = copyable_function{std::forward<F>(f)};
        return *this;
    }
    friend void swap(copyable_function& f1, copyable_function& f2) noexcept { f1.swap(f2); }
};
} // namespace brstd

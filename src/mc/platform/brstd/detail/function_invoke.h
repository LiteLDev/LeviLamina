#pragma once

#include <functional>

#include "ll/api/base/TypeTraits.h"
#include "mc/platform/brstd/detail/DerivedType.h"
#include "mc/platform/brstd/detail/function_invoke_base.h"

namespace brstd::detail::function {

template <DerivedType Type, class Signature>
class function_invoke : public function_invoke_base<Type, Signature> {
    using base = function_invoke_base<Type, Signature>;

    template <class Fn>
    static constexpr bool enable_one_arg_constructor =
        !(std::is_same_v<std::remove_cvref_t<Fn>, function_invoke>
          || std::is_base_of_v<function_invoke, std::remove_cvref_t<Fn>>)
        && !ll::traits::is_specialization_of_v<std::remove_cvref_t<Fn>, std::in_place_type_t>
        && base::template is_callable_from<std::decay_t<Fn>>;

    template <class Fn, class... Xs>
    static constexpr bool enable_in_place_constructor =
        std::is_constructible_v<std::decay_t<Fn>, Xs...> && base::template is_callable_from<std::decay_t<Fn>>;

    template <class Fn, class U, class... Xs>
    static constexpr bool enable_in_place_list_constructor =
        std::is_constructible_v<std::decay_t<Fn>, std::initializer_list<U>&, Xs...>
        && base::template is_callable_from<std::decay_t<Fn>>;

public:
    function_invoke() = default;
    function_invoke(std::nullptr_t) : function_invoke() {}
    template <class F>
        requires enable_one_arg_constructor<F>
    function_invoke(F&& f) {
        using Fn = std::decay_t<F>;
        static_assert(std::is_constructible_v<Fn, F>);
        if constexpr (std::is_member_pointer_v<Fn> || std::is_pointer_v<Fn> || requires(F e) {
                          { e == nullptr } -> std::same_as<bool>;
                      }) {
            if (f == nullptr) {
                this->construct_empty();
                return;
            }
        }
        using FnInvQuals = base::template FnInvQuals<Fn>;
        this->template construct_target<Fn, FnInvQuals>(std::forward<F>(f));
    }

    template <class F, class... Xs>
        requires enable_in_place_constructor<F, Xs...>
    explicit function_invoke(std::in_place_type_t<F>, Xs&&... args) {
        using Fn = std::decay_t<F>;
        static_assert(std::is_same_v<Fn, F>);
        using FnInvQuals = base::template FnInvQuals<Fn>;
        this->template construct_target<Fn, FnInvQuals>(std::forward<Xs>(args)...);
    }

    template <class F, class U, class... Xs>
        requires enable_in_place_list_constructor<F, U, Xs...>
    explicit function_invoke(std::in_place_type_t<F>, std::initializer_list<U> l, Xs&&... args) {
        using Fn = std::decay_t<F>;
        static_assert(std::is_same_v<Fn, F>);
        using FnInvQuals = base::template FnInvQuals<Fn>;
        this->template construct_target<Fn, FnInvQuals>(l, std::forward<Xs>(args)...);
    }

public:
    void swap(function_invoke& other) {
        function_invoke tmp = std::move(other);
        other               = std::move(*this);
        *this               = std::move(tmp);
    }
};

} // namespace brstd::detail::function

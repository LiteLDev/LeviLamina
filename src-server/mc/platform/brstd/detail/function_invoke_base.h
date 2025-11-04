#pragma once

#include <functional>

#include "mc/platform/brstd/detail/DerivedType.h"
#include "mc/platform/brstd/detail/function_base.h"
#include "mc/platform/brstd/detail/function_base_impl.h"

namespace brstd::detail::function {

template <DerivedType Type, class Signature>
class function_invoke_base;

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...)>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from =
        std::is_invocable_r_v<Return, Fn, Xs...> && std::is_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) &>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) & { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) &&>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) && { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from =
        std::is_invocable_r_v<Return, Fn const, Xs...> && std::is_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const&>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const& { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const&&>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn const, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const&& { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from =
        std::is_nothrow_invocable_r_v<Return, Fn, Xs...> && std::is_nothrow_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) noexcept { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) & noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) & noexcept { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) && noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) && noexcept { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn const, Xs...>
                                          && std::is_nothrow_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const noexcept {
        return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...);
    }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const & noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const& noexcept {
        return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...);
    }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const && noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn const, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const&& noexcept {
        return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...);
    }
};

} // namespace brstd::detail::function

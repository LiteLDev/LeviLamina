#pragma once

#include <any>
#include <array>
#include <functional>
#include <span>

#include "ll/api/base/Containers.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/Meta.h"

namespace ll::data {
class AnyFunctionDataBase {
protected:
    template <class Arg>
    static auto getArg(std::any& any
    ) -> std::conditional_t<std::is_reference_v<Arg>, Arg, std::add_lvalue_reference_t<Arg>> {
        using Ret   = std::conditional_t<std::is_reference_v<Arg>, Arg, std::add_lvalue_reference_t<Arg>>;
        using Decay = std::decay_t<Arg>;
        using Wrap  = std::remove_cvref_t<Arg>;
        if constexpr (std::is_const_v<std::remove_reference_t<Arg>>) {
            if (auto* res = std::any_cast<std::reference_wrapper<std::add_const_t<Wrap>>>(&any)) {
                return static_cast<Ret>(res->get());
            }
        }
        if (auto* res = std::any_cast<std::reference_wrapper<Wrap>>(&any)) {
            return static_cast<Ret>(res->get());
        }
        return static_cast<Ret>(std::any_cast<std::add_lvalue_reference_t<std::decay_t<Arg>>>(any));
    }

public:
    virtual ~AnyFunctionDataBase() = default;

    virtual std::any invoke(std::span<std::any>) = 0;

    virtual std::unique_ptr<AnyFunctionDataBase> clone() const = 0;
};
template <class Fn, class Ret, class... Args>
class AnyFunctionData : public AnyFunctionDataBase {
    Fn fn;

    template <std::size_t... I>
    std::any invokeImpl(std::span<std::any> args, std::index_sequence<I...>) {
        if constexpr (std::is_void_v<Ret>) {
            (void)fn(getArg<Args>(args[I])...);
            return {};
        } else {
            return std::make_any<Ret>(fn(getArg<Args>(args[I])...));
        }
    }

public:
    AnyFunctionData(Fn fn) : fn(std::move(fn)) {}

    ~AnyFunctionData() override = default;

    std::any invoke(std::span<std::any> args) override { return invokeImpl(args, std::index_sequence_for<Args...>{}); }

    std::unique_ptr<AnyFunctionDataBase> clone() const override { return std::make_unique<AnyFunctionData>(*this); }
};
class AnyFunction {
    mutable Polymorphic<AnyFunctionDataBase> data;

public:
    AnyFunction()  = default;
    ~AnyFunction() = default;
    
    AnyFunction(AnyFunction const&)            = default;
    AnyFunction& operator=(AnyFunction const&) = default;
    AnyFunction(AnyFunction&&)                 = default;
    AnyFunction& operator=(AAnyFunctio&&)      = default;

    AnyFunction(std::nullptr_t) {}

    template <class Ret, class... Args>
    AnyFunction(std::function<Ret(Args...)> fn)
    : data(makePolymorphic<AnyFunctionData<std::function<Ret(Args...)>, Ret, Args...>>(std::move(fn))) {}

    template <class Fn, class Ret, class... Args>
    AnyFunction(std::in_place_type_t<Ret(Args...)>, Fn&& fn)
    : data(makePolymorphic<AnyFunctionData<std::decay_t<Fn>, Ret, Args...>>(std::forward<Fn>(fn))) {}

    template <class Fn>
    AnyFunction(Fn&& fn)
    : AnyFunction(std::in_place_type<traits::function_signature_t<std::remove_cvref_t<Fn>>>, std::forward<Fn>(fn)) {}

    std::any invoke(std::span<std::any> args) const { return data->invoke(args); }

    template <class... Args>
    std::any operator()(Args&&... args) const {
        auto arr =
            std::array<std::any, sizeof...(Args)>{std::make_any<std::decay_t<Args>>(std::forward<Args>(args))...};
        return invoke(arr);
    }

    explicit operator bool() const noexcept { return static_cast<bool>(data); }
};
} // namespace ll::data

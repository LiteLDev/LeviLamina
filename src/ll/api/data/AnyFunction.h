#pragma once

#include <any>
#include <array>
#include <concepts>
#include <functional>
#include <span>

#include "ll/api/base/Macro.h"
#include "ll/api/base/TypeTraits.h"
#include "ll/api/data/AnyObjBase.h"

namespace ll::data {
class AnyFunctionObjBase : public AnyObjBase {
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
    static constexpr inline size_t anyFnSizeNumPtrs = 8;
    static constexpr inline size_t smallObjSize     = ((anyFnSizeNumPtrs - 1) * sizeof(void*));

    virtual AnyFunctionObjBase* copy(void* to) const        = 0;
    virtual AnyFunctionObjBase* move(void* to) noexcept     = 0;
    virtual void                tidy() noexcept             = 0;
    virtual std::any            invoke(std::span<std::any>) = 0;
};
template <class Fn, class Ret, class... Args>
class AnyFunctionObj : public AnyFunctionObjBase {
    Fn fn;

    template <std::size_t... I>
    std::any invokeImpl(std::span<std::any> args, std::index_sequence<I...>) {
        if constexpr (std::is_void_v<Ret>) {
            (void)std::invoke(std::forward<decltype(fn)>(fn), getArg<Args>(args[I])...);
            return {};
        } else {
            return std::make_any<Ret>(std::invoke(std::forward<decltype(fn)>(fn), getArg<Args>(args[I])...));
        }
    }

public:
    static constexpr inline bool nothrowMove = std::is_nothrow_move_constructible_v<Fn>;

    template <class T>
        requires(!std::is_same_v<T, AnyFunctionObj>)
    constexpr explicit AnyFunctionObj(T&& fn) : fn(std::forward<T>(fn)) {}

    std::any invoke(std::span<std::any> args) override { return invokeImpl(args, std::index_sequence_for<Args...>{}); }

    template <class F>
    static constexpr AnyFunctionObjBase* construct(void* to, F&& f) {
        return constructImpl<AnyFunctionObj>(to, std::forward<F>(f));
    }

    AnyFunctionObjBase* copy(void* to) const override { return constructImpl<AnyFunctionObj>(to, fn); }
    AnyFunctionObjBase* move(void* to) noexcept override { return constructImpl<AnyFunctionObj>(to, std::move(fn)); }
    void                tidy() noexcept override { destroyImpl<AnyFunctionObj>(this); }
};
class AnyFunction {
    AnyFunctionObjBase* dataPtr{};
    union {
        std::max_align_t dummy;
        char             soo[AnyFunctionObjBase::smallObjSize];
    };

    constexpr bool isLarge() const noexcept { return dataPtr != static_cast<const void*>(&soo); }

    constexpr bool hasValue() const noexcept { return dataPtr; }

    void tidy() noexcept {
        if (hasValue()) {
            dataPtr->tidy();
            dataPtr = nullptr;
        }
    }
    void copy(AnyFunction const& other) {
        if (other.hasValue()) {
            dataPtr = other.dataPtr->copy(&soo);
        }
    }
    void move(AnyFunction&& other) noexcept {
        if (other.hasValue()) {
            if (other.isLarge()) {
                dataPtr       = other.dataPtr;
                other.dataPtr = nullptr;
            } else {
                dataPtr = other.dataPtr->move(&soo);
                other.tidy();
            }
        }
    }

public:
    AnyFunction() = default;
    AnyFunction(std::nullptr_t) {}
    ~AnyFunction() { tidy(); }

    AnyFunction(AnyFunction const& other) { copy(other); }
    AnyFunction(AnyFunction&& other) noexcept { move(std::move(other)); }

    AnyFunction& operator=(AnyFunction const& other) {
        if (this != std::addressof(other)) {
            tidy();
            copy(other);
        }
        return *this;
    }
    AnyFunction& operator=(AnyFunction&& other) noexcept {
        if (this != std::addressof(other)) {
            tidy();
            move(std::move(other));
        }
        return *this;
    }
    void swap(AnyFunction& other) noexcept {
        if (isLarge() && other.isLarge()) {
            std::swap(dataPtr, other.dataPtr);
        } else {
            AnyFunction temp;
            temp.move(std::move(*this));
            move(std::move(other));
            other.move(std::move(temp));
        }
    }

    template <class Fn, class Ret, class... Args>
        requires(std::invocable<Fn, Args...>)
    AnyFunction(std::in_place_type_t<Ret(Args...)>, Fn&& fn) {
        if constexpr (std::is_pointer_v<Fn> || traits::is_specialization_of_v<Fn, std::function>
                      || std::is_member_pointer_v<Fn>) {
            if (!fn) {
                return;
            }
        }
        dataPtr = AnyFunctionObj<std::decay_t<Fn>, Ret, Args...>::construct(&soo, std::forward<Fn>(fn));
    }

    template <class Fn>
    AnyFunction(Fn&& fn)
    : AnyFunction(std::in_place_type<typename traits::function_traits<Fn>::common_type>, std::forward<Fn>(fn)) {}

    std::any invoke(std::span<std::any> args) const { return dataPtr->invoke(args); }

    template <class... Args>
    std::any operator()(Args&&... args) const {
        auto arr =
            std::array<std::any, sizeof...(Args)>{std::make_any<std::decay_t<Args>>(std::forward<Args>(args))...};
        return invoke(arr);
    }
    constexpr explicit operator bool() const noexcept { return hasValue(); }
};
[[nodiscard]] inline bool operator==(AnyFunction const& other, std::nullptr_t) noexcept { return !other; }

inline void swap(AnyFunction& l, AnyFunction& r) noexcept { l.swap(r); }

} // namespace ll::data

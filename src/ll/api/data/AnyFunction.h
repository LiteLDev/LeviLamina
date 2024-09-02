#pragma once

#include <any>
#include <array>
#include <concepts>
#include <functional>
#include <span>

#include "ll/api/base/Macro.h"
#include "ll/api/base/TypeTraits.h"
#include "ll/api/data/AnyBase.h"

namespace ll::data {
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4265)
#endif
class AnyFunctionDataBase : public AnyBase {
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
    virtual AnyFunctionDataBase* copy(void* to) const        = 0;
    virtual AnyFunctionDataBase* move(void* to) noexcept     = 0;
    virtual void                 tidy() noexcept             = 0;
    virtual std::any             invoke(std::span<std::any>) = 0;
};
template <class Fn, class Ret, class... Args>
class AnyFunctionData : public AnyFunctionDataBase {
    Fn fn;

    using Self = AnyFunctionData;

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
    static constexpr inline bool nothrowMove = std::is_nothrow_move_constructible_v<Fn>;

    template <class Fn>
        requires(!std::is_same_v<Fn, AnyFunctionData>)
    explicit AnyFunctionData(Fn&& fn) : fn(std::forward<Fn>(fn)) {}

    std::any invoke(std::span<std::any> args) override { return invokeImpl(args, std::index_sequence_for<Args...>{}); }

    template <class Fn>
    static AnyFunctionDataBase* construct(void* to, Fn&& v) {
        if constexpr (isLarge<Self>) {
            return ::new Self(std::forward<Fn>(v));
        } else {
            return ::new (to) Self(std::forward<Fn>(v));
        }
    }

    AnyFunctionDataBase* copy(void* to) const override {
        if constexpr (isLarge<Self>) {
            return ::new Self(fn);
        } else {
            return ::new (to) Self(fn);
        }
    }
    AnyFunctionDataBase* move(void* to) noexcept override {
        if constexpr (isLarge<Self>) {
            return nullptr;
        } else {
            return ::new (to) Self(std::move(fn));
        }
    }
    void tidy() noexcept override {
        if constexpr (isLarge<Self>) {
            delete this;
        } else {
            this->~Self();
        }
    }
};
#ifdef _MSC_VER
#pragma warning(pop)
#endif

class alignas(std::max_align_t) AnyFunction {
    AnyFunctionDataBase* dataPtr{};
    char                 soo[AnyBase::smallObjectSize];

    bool isLarge() const noexcept { return dataPtr != static_cast<const void*>(&soo); }

    void tidy() noexcept {
        if (dataPtr) {
            dataPtr->tidy();
            dataPtr = nullptr;
        }
    }
    void resetCopy(AnyFunction const& other) {
        if (other) {
            dataPtr = other.dataPtr->copy(&soo);
        }
    }
    void resetMove(AnyFunction&& other) noexcept {
        if (other) {
            if (other.isLarge()) {
                dataPtr       = other.dataPtr;
                other.dataPtr = nullptr;
            } else {
                dataPtr = other.dataPtr->move(&soo);
                other.tidy();
            }
        }
    }
    template <class Fn, class Ret, class... Args>
    void reset(Fn&& fn) {
        if constexpr (std::is_pointer_v<Fn> || traits::is_specialization_of_v<Fn, std::function>
                      || std::is_member_pointer_v<Fn>) {
            if (!fn) {
                return;
            }
        }
        dataPtr = AnyFunctionData<std::decay_t<Fn>, Ret, Args...>::construct(&soo, std::forward<Fn>(fn));
    }

public:
    AnyFunction() = default;
    AnyFunction(std::nullptr_t) {}
    ~AnyFunction() { tidy(); }

    AnyFunction(AnyFunction const& other) { resetCopy(other); }
    AnyFunction(AnyFunction&& other) noexcept { resetMove(std::move(other)); }

    AnyFunction& operator=(AnyFunction const& other) {
        if (this != std::addressof(other)) {
            tidy();
            resetCopy(other);
        }
        return *this;
    }
    AnyFunction& operator=(AnyFunction&& other) noexcept {
        if (this != std::addressof(other)) {
            tidy();
            resetMove(std::move(other));
        }
        return *this;
    }
    void swap(AnyFunction& other) noexcept {
        if (isLarge() && other.isLarge()) {
            std::swap(dataPtr, other.dataPtr);
        } else {
            AnyFunction temp;
            temp.resetMove(std::move(*this));
            resetMove(std::move(other));
            other.resetMove(std::move(temp));
        }
    }

    template <class Fn, class Ret, class... Args>
        requires(std::invocable<Fn, Args...>)
    AnyFunction(std::in_place_type_t<Ret(Args...)>, Fn&& fn) {
        reset<Fn, Ret, Args...>(std::forward<Fn>(fn));
    }

    template <class Fn>
    AnyFunction(Fn&& fn)
    : AnyFunction(std::in_place_type<traits::function_signature_t<std::remove_cvref_t<Fn>>>, std::forward<Fn>(fn)) {}

    std::any invoke(std::span<std::any> args) const { return dataPtr->invoke(args); }

    template <class... Args>
    std::any operator()(Args&&... args) const {
        auto arr =
            std::array<std::any, sizeof...(Args)>{std::make_any<std::decay_t<Args>>(std::forward<Args>(args))...};
        return invoke(arr);
    }
    explicit operator bool() const noexcept { return dataPtr; }
};
[[nodiscard]] inline bool operator==(AnyFunction const& other, std::nullptr_t) noexcept { return !other; }

inline void swap(AnyFunction& l, AnyFunction& r) noexcept { l.swap(r); }

} // namespace ll::data

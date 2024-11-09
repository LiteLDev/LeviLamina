#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>

#include "ll/api/memory/Memory.h"

namespace ll::memory {
class ClosureBase {
public:
    static constexpr size_t jitSize = 48;
    struct PackedSelf {
        char         jitfn[jitSize];
        ClosureBase* self;
    };
    DualMapping          storage{};
    LLNDAPI static void* getClosureData();
    LLNDAPI              ClosureBase(void const* impl);

    ClosureBase(ClosureBase&&)                 = delete;
    ClosureBase(ClosureBase const&)            = delete;
    ClosureBase& operator=(ClosureBase&&)      = delete;
    ClosureBase& operator=(ClosureBase const&) = delete;
};

template <class... Args>
class NativeClosure {
    static_assert(sizeof...(Args) < 0, "NativeClosure only accepts function types as template arguments.");
};

template <class Ret, class... Args>
class NativeClosure<Ret(Args...)> : private ClosureBase {
    static inline Ret closureImpl(Args... args) {
        auto& self = *static_cast<NativeClosure*>(reinterpret_cast<PackedSelf*>(getClosureData())->self);
        return (self.func)(self.data, std::forward<Args>(args)...);
    }

public:
    using origin  = Ret(uintptr_t, Args...);
    using closure = Ret(Args...);

    uintptr_t data;
    origin*   func;

    [[nodiscard]] NativeClosure(origin* func, uintptr_t data) : ClosureBase(closureImpl), func(func), data(data) {}

    [[nodiscard]] closure* get() const { return reinterpret_cast<closure*>(storage.executable()); }
};
template <class Ret, class... Args>
NativeClosure(Ret (*)(uintptr_t, Args...), uintptr_t) -> NativeClosure<Ret(Args...)>;

template <class... Args>
class FunctionalClosure {
    static_assert(sizeof...(Args) < 0, "FunctionalClosure only accepts function types as template arguments.");
};
template <class Ret, class... Args>
class FunctionalClosure<Ret(Args...)> : private ClosureBase {
    static inline Ret closureImpl(Args... args) {
        auto& self = *static_cast<FunctionalClosure*>(reinterpret_cast<PackedSelf*>(getClosureData())->self);
        return (self.func)(std::forward<Args>(args)...);
    }

public:
    using closure = Ret(Args...);

    std::function<closure> func;

    [[nodiscard]] FunctionalClosure(std::function<closure> func) : ClosureBase(closureImpl), func(std::move(func)) {}

    [[nodiscard]] closure* get() const { return reinterpret_cast<closure*>(storage.executable()); }
};
template <class Ret, class... Args>
FunctionalClosure(Ret (*)(Args...)) -> FunctionalClosure<Ret(Args...)>;
template <class T>
FunctionalClosure(std::function<T>) -> FunctionalClosure<T>;
} // namespace ll::memory

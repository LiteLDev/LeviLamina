#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>

#include "ll/api/memory/Memory.h"

namespace ll::memory {
namespace detail {
static constexpr size_t closureMagicNumber = 0x58ffffbffdffffafull;

LLAPI size_t getVolatileOffset(void*);
LLAPI void   initNativeClosure(void* self, void* impl, size_t offset);
LLAPI void   releaseNativeClosure(void* self);
} // namespace detail

//                The principle of NativeClosure
//--------------------------------------------------------------
// | First we need an impl function as the actual            |
// | implementation, and put a volatile variable at the      |
// | beginning of the function, so that the compiler will    |
// | theoretically push the value of this variable at the    |
// | beginning. We set it to a value that should not appear  |
// | in The number in the assembly, and then find the offset |
// | of this number from the beginning of the function       |
// | pointer in the constructor of each closure, then        |
// | allocate a small piece of memory, copy the Prologue of  |
// | the function itself, but replace the value of that      |
// | variable with what we want Incoming data.               |
//--------------------------------------------------------------
// |from compiler|        <copy from mem>        >write by hand<
//--------------------------------------------------------------
//      |..... pargs .....|            <..... pargs .....>
//      |mov  rax , [mgic]|            <mov  rax>, [data]<
// addr |mov qword ptr    |    --->    >push rax         <
//      |  [rbp-8], rax   |            >mov  rax , [addr]<
//      |    ...   ...    |            >jmp  rax         <
//      |.... orifunc ....|       addr |    ...   ...    |
//--------------------------------------------------------------
template <class... Args>
class NativeClosure {
    static_assert(sizeof...(Args) < 0, "NativeClosure only accepts function types as template arguments.");
};
template <class Ret, class... Args>
class NativeClosure<Ret(Args...)> {
    static inline Ret closureImpl(Args... args) {
        volatile uintptr_t data   = detail::closureMagicNumber;
        auto               stored = (PackedData*)data;
        return stored->func(stored->data, std::forward<Args>(args)...);
    }
    static inline size_t implOffset = detail::getVolatileOffset(closureImpl);

public:
    using origin_fn  = Ret(uintptr_t, Args...);
    using closure_fn = Ret(Args...);

    struct PackedData {
        origin_fn* func;
        uintptr_t  data;
    } stored;

    VirtualMemory closure{};

    NativeClosure(origin_fn* func, uintptr_t data) : stored({func, data}) {
        detail::initNativeClosure(this, closureImpl, implOffset);
    }

    closure_fn* get() const { return closure.get<closure_fn>(); }

    ~NativeClosure() { detail::releaseNativeClosure(this); }

    NativeClosure(NativeClosure&&)                 = delete;
    NativeClosure(NativeClosure const&)            = delete;
    NativeClosure& operator=(NativeClosure&&)      = delete;
    NativeClosure& operator=(NativeClosure const&) = delete;
};
template <class Ret, class... Args>
NativeClosure(Ret (*)(uintptr_t, Args...), uintptr_t) -> NativeClosure<Ret(Args...)>;

template <class... Args>
class FunctionalClosure {
    static_assert(sizeof...(Args) < 0, "FunctionalClosure only accepts function types as template arguments.");
};
template <class Ret, class... Args>
class FunctionalClosure<Ret(Args...)> : public NativeClosure<Ret(Args...)> {
    static inline Ret closureImpl(uintptr_t data, Args... args) {
        return ((FunctionalClosure*)data)->func(std::forward<Args>(args)...);
    }

public:
    using closure = Ret(Args...);
    std::function<closure> func;

    FunctionalClosure(std::function<closure> const& func)
    : NativeClosure<Ret(Args...)>(closureImpl, (uintptr_t)this),
      func(func) {}
};
template <class Ret, class... Args>
FunctionalClosure(Ret (*)(Args...)) -> FunctionalClosure<Ret(Args...)>;
template <class T>
FunctionalClosure(std::function<T> const&) -> FunctionalClosure<T>;
} // namespace ll::memory

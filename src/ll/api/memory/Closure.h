#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <functional>
#include <memory>

namespace ll {
namespace detail {
static constexpr size_t closureMagicNumber = 0x58ffffbffdffffafui64;

#pragma pack(push, 1)
//    ...    [data]
// push rax
// mov  rax, [addr]
// jmp  rax
struct NativeClosurePrologue {
    uintptr_t data;
    uint8_t   push_rax;
    uint8_t   mov_rax[2];
    uintptr_t addr;
    uint8_t   jmp_rax[2];
};
#pragma pack(pop)

LLAPI size_t getVolatileOffset(void*);
LLAPI void   initNativeClosure(void*);
LLAPI void   releaseNativeClosure(void*);
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
// |from compiler|        <copy from mem>        >wirte by hand<
//--------------------------------------------------------------
//      |..... pargs .....|            <..... pargs .....>
//      |mov  rax , [mgic]|            <mov  rax>, [data]<
// addr |mov qword ptr    |    --->    >push rax         <
//      |  [rbp-8], rax   |            >mov  rax , [addr]<
//      |    ...   ...    |            >jmp  rax         <
//      |.... orifunc ....|       addr |    ...   ...    |
//--------------------------------------------------------------
template <class Ret, class... Args>
class NativeClosure {
    static inline Ret closureImpl(Args... args) {
        volatile uintptr_t data   = detail::closureMagicNumber;
        auto               stored = (PackedData*)data;
        return (*stored->func)(stored->data, std::forward<Args>(args)...);
    }

public:
    using Origin  = Ret(uintptr_t, Args...);
    using Closure = Ret(Args...);

    struct PackedData {
        Origin*   func;
        uintptr_t data;
    } stored;
    void*                    impl;
    ulong                    oldProtectFlags{};
    std::unique_ptr<uchar[]> closure;
    size_t                   closureSize;

    LLAPI NativeClosure(Origin* func, uintptr_t data) : stored({func, data}), impl(NativeClosure::closureImpl) {
        detail::initNativeClosure(this);
    }

    LLAPI Closure* get() const { return (Closure*)closure.get(); }

    LLAPI ~NativeClosure() { detail::releaseNativeClosure(this); }
};
template <class Ret, class... Args>
class FunctionalClosure : public NativeClosure<Ret, Args...> {
    static inline Ret closureImpl(uintptr_t data, Args... args) {
        auto self = (FunctionalClosure*)data;
        return self->func(std::forward<Args>(args)...);
    }

public:
    using Closure = Ret(Args...);
    std::function<Closure> func;

    FunctionalClosure(std::function<Closure> const& func)
    : NativeClosure<Ret, Args...>(FunctionalClosure::closureImpl, (uintptr_t)this),
      func(func) {}
};
} // namespace ll

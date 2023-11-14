#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <memory>

namespace ll {
template <class Ret>
class NativeClosure;
namespace detail {
static constexpr size_t magic = 0x58ffffbffdffffafui64;

#pragma pack(push, 1)
//    ...    [data]
// push rax
// mov  rax, [addr]
// jmp  rax
struct Prologue {
    uintptr_t data;
    uint8_t   push_rax;
    uint8_t   mov_rax[2];
    uintptr_t addr;
    uint8_t   jmp_rax[2];
};
#pragma pack(pop)

template <class Ret>
inline Ret nativeClosureImpl() {
    volatile uintptr_t data   = magic;
    auto               stored = (typename NativeClosure<Ret>::PackedData*)data;
    return (*stored->func)(stored->data);
}
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
template <class Ret>
class NativeClosure {
public:
    using Origin  = Ret(uintptr_t);
    using Closure = Ret();

    struct PackedData {
        Origin*   func;
        uintptr_t data;
    } stored;
    void*                    impl;
    ulong                    oldProtectFlags{};
    std::unique_ptr<uchar[]> closure;
    size_t                   closureSize;

    LLAPI NativeClosure(Origin* func, uintptr_t data, void* impl = detail::nativeClosureImpl<Ret>)
    : stored({func, data}),
      impl(impl) {
        detail::initNativeClosure(this);
    }

    LLAPI Closure* get() const { return (Closure*)closure.get(); }

    LLAPI ~NativeClosure() { detail::releaseNativeClosure(this); }
};
} // namespace ll

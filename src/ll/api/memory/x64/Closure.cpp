#include "ll/api/memory/Closure.h"

#include <cstddef>
#include <cstdint>
#include <cstring>

#include "ll/api/base/StdInt.h"
#include "ll/api/memory/Memory.h"
#include "ll/core/LeviLamina.h"

namespace ll::memory::detail {

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

size_t getVolatileOffset(void* impl) {
    impl = unwrapFuncAddress(impl);
    for (size_t offset = 0; offset < 4096; offset++) {
        if (*(uintptr_t*)((uintptr_t)impl + offset) == (uintptr_t)closureMagicNumber) {
            return offset;
        }
    }
    getLogger().fatal("ClosureMagicNumber does not found 0x{}", impl);
    return 0;
}
using T = NativeClosure<void*()>;
void initNativeClosure(void* self, void* impl, size_t offset) {
    auto size  = offset + sizeof(NativeClosurePrologue);
    impl       = unwrapFuncAddress(impl);
    auto tSelf = (T*)self;

    tSelf->closure.alloc(size);

    memcpy(tSelf->closure.writable(), impl, offset);

    new ((char*)(tSelf->closure.writable()) + offset) NativeClosurePrologue{
        .data     = (uintptr_t)&tSelf->stored,
        .push_rax = 0x50,
        .mov_rax  = {0x48, 0xB8},
        .addr     = (uintptr_t)impl + offset + sizeof(uintptr_t) - 1, // -1 for 0x58 in magic
        .jmp_rax  = {0xFF, 0xE0}
    };
}
void releaseNativeClosure(void* /*self*/) {}

} // namespace ll::memory::detail

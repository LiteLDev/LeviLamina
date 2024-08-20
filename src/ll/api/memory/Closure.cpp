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
};
using T = NativeClosure<void*()>;
void initNativeClosure(void* self_, void* impl, size_t offset) {
    auto size = offset + sizeof(NativeClosurePrologue);
    impl      = unwrapFuncAddress(impl);
    auto self = (T*)self_;

    self->closure.alloc(size, AccessMode::Execute | AccessMode::Read);

    modify(self->closure.get(), size, [&]() {
        memcpy(self->closure.get(), impl, offset);

        new ((char*)(self->closure.get()) + offset) NativeClosurePrologue{
            .data     = (uintptr_t)&self->stored,
            .push_rax = 0x50,
            .mov_rax  = {0x48, 0xB8},
            .addr     = (uintptr_t)impl + offset + sizeof(uintptr_t) - 1, // -1 for 0x58 in magic
            .jmp_rax  = {0xFF, 0xE0}
        };
    });
}
void releaseNativeClosure(void* self_) {
    auto self = (T*)self_;
    self->closure.free();
}
} // namespace ll::memory::detail

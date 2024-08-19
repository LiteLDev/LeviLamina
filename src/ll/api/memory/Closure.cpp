#include "ll/api/memory/Closure.h"

#include <cstddef>
#include <cstdint>
#include <cstring>

#include "ll/api/base/StdInt.h"
#include "ll/api/memory/Memory.h"
#include "ll/core/LeviLamina.h"

#if defined(LL_WIN32)
#include "Windows.h"
#elif defined(LL_LINUX)
#include <sys/mman.h>
#endif

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

#if defined(LL_WIN32)
    self->closure = VirtualAlloc(nullptr, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
#elif defined(LL_LINUX)
    self->closure = mmap(nullptr, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
#endif

    memcpy(self->closure, impl, offset);

    new ((char*)(self->closure) + offset) NativeClosurePrologue{
        .data     = (uintptr_t)&self->stored,
        .push_rax = 0x50,
        .mov_rax  = {0x48, 0xB8},
        .addr     = (uintptr_t)impl + offset + sizeof(uintptr_t) - 1, // -1 for 0x58 in magic
        .jmp_rax  = {0xFF, 0xE0}
    };

    ulong _;

#if defined(LL_WIN32)
    VirtualProtect(self->closure, size, PAGE_EXECUTE_READ, &_);
#elif defined(LL_LINUX)
    mprotect(self->closure, size, PROT_READ | PROT_EXEC);
#endif
}
void releaseNativeClosure(void* self_) {
    auto self = (T*)self_;
    if (self->closure != nullptr) {
#if defined(LL_WIN32)
        VirtualFree(self->closure, 0, MEM_RELEASE);
#elif defined(LL_LINUX)
        munmap(self->closure, 0);
#endif
        self->closure = nullptr;
    }
}
} // namespace ll::memory::detail

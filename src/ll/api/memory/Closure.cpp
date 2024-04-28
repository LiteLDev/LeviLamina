#include "ll/api/memory/Closure.h"

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <memory>
#include <stdexcept>

#include "ll/api/base/StdInt.h"
#include "ll/api/memory/Memory.h"

#include <memoryapi.h>
#include <winnt.h>

namespace ll::memory::detail {
size_t getVolatileOffset(void* impl) {
    impl = unwrapFuncPtrJmp(impl);
    for (size_t offset = 0; offset < 4096; offset++) {
        if (*(uintptr_t*)((uintptr_t)impl + offset) == (uintptr_t)closureMagicNumber) {
            return offset;
        }
    }
    std::terminate();
};
using T = NativeClosure<void*()>;
void initNativeClosure(void* t, void* impl, size_t offset, size_t size) {
    impl      = unwrapFuncPtrJmp(impl);
    auto self = (T*)t;

    self->closure = VirtualAlloc(nullptr, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    memcpy(self->closure, impl, offset);

    new ((char*)(self->closure) + offset) NativeClosurePrologue{
        .data     = (uintptr_t)&self->stored,
        .push_rax = 0x50,
        .mov_rax  = {0x48, 0xB8},
        .addr     = (uintptr_t)impl + offset + sizeof(uintptr_t) - 1, // -1 for 0x58 in magic
        .jmp_rax  = {0xFF, 0xE0}
    };

    ulong _;
    VirtualProtect(self->closure, size, PAGE_EXECUTE_READ, &_);
}
void releaseNativeClosure(void* t, size_t) {
    auto self = (T*)t;
    if (self->closure != nullptr) {
        VirtualFree(self->closure, 0, MEM_RELEASE);
        self->closure = nullptr;
    }
}
} // namespace ll::memory::detail

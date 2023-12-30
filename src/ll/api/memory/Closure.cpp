#include "ll/api/memory/Closure.h"

#include <stdexcept>

#include "memoryapi.h"

#include "ll/api/memory/Memory.h"
#include "ll/api/utils/StringUtils.h"

namespace ll::memory::detail {
size_t getVolatileOffset(void* impl) {
    impl = unwrapFuncPtrJmp(impl);
    for (size_t offset = 0; offset < 4096; offset++) {
        if (*(uintptr_t*)((uintptr_t)impl + offset) == (uintptr_t)closureMagicNumber) {
            return offset;
        }
    }
    std::cout << string_utils::strToHexStr({(char*)impl, 32}) << std::endl;
    throw std::runtime_error("can't parse closure asm offset");
};
using T = NativeClosure<void*>;
void initNativeClosure(void* t, void* impl, size_t offset, size_t size) {
    impl                       = unwrapFuncPtrJmp(impl);
    auto                  self = (T*)t;
    NativeClosurePrologue asmc = {
        .data     = (uintptr_t)&self->stored,
        .push_rax = 0x50,
        .mov_rax  = {0x48, 0xB8},
        .addr     = (uintptr_t)impl + offset + sizeof(uintptr_t) - 1, // -1 for 0x58 in magic
        .jmp_rax  = {0xFF, 0xE0}
    };

    self->closure = std::make_unique_for_overwrite<uchar[]>(size);

    VirtualProtect(self->closure.get(), size, PAGE_EXECUTE_READWRITE, &self->oldProtectFlags);

    memcpy(self->closure.get(), impl, offset);
    memcpy(self->closure.get() + offset, &asmc, sizeof(asmc));
}
void releaseNativeClosure(void* t, size_t size) {
    auto  self = (T*)t;
    ulong _;
    VirtualProtect(self->closure.get(), size, self->oldProtectFlags, &_);
}
} // namespace ll::memory::detail

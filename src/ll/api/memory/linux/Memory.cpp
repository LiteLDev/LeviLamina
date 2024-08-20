#include "ll/api/memory/Memory.h"

#include <optional>
#include <vector>

#include "ll/api/Logger.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "pl/SymbolProvider.h"

#include "sys/mman.h"

namespace ll::memory {

// TODO
FuncPtr resolveSignature(std::string_view signature, std::span<std::byte> range) {
    if (range.empty()) {
        return nullptr;
    }
    // if (auto res = hat::parse_signature(signature); !res.has_value()) {
    //     return nullptr;
    // } else {
    //     return const_cast<std::byte*>(hat::find_pattern(range.begin(), range.end(), res.value()).get());
    // }
}
void* unwrapFuncAddress(void* ptr) noexcept {
    if (*(char*)ptr == '\xE9') {
        (uintptr_t&)(ptr) += *(int*)((uintptr_t)ptr + 1);
    }
    return ptr;
}
static int readMemProtection(void* addr) {
    int            a;
    int            res = 0;
    FILE*          f   = fopen("/proc/self/maps", "r");
    struct buffer* b   = _new_buffer(1024);
    while ((a = fgetc(f)) >= 0) {
        if (_buf_putchar(b, a) || a == '\n') {
            char*         end0  = (void*)0;
            unsigned long addr0 = strtoul(b->mem, &end0, 0x10);
            char*         end1  = (void*)0;
            unsigned long addr1 = strtoul(end0 + 1, &end1, 0x10);
            if ((void*)addr0 < addr && addr < (void*)addr1) {
                res |= (end1 + 1)[0] == 'r' ? PROT_READ : 0;
                res |= (end1 + 1)[1] == 'w' ? PROT_WRITE : 0;
                res |= (end1 + 1)[2] == 'x' ? PROT_EXEC : 0;
                break;
            }
            _buf_reset(b);
        }
    }
    free(b);
    fclose(f);
    return res;
}

void modify(void* ptr, size_t len, const std::function<void()>& callback) {
    std::unique_ptr<thread::GlobalThreadPauser> pauser;
    if (getGamingStatus() != GamingStatus::Default) {
        pauser = std::make_unique<thread::GlobalThreadPauser>();
    }
    int oldProtect = readMemProtection(ptr);
    mprotect(self->closure, size, PROT_READ | PROT_WRITE | PROT_EXEC);
    callback();
    mprotect(self->closure, size, oldProtect);
}
void VirtualMemory::alloc(size_t size, AccessMode mode) {
    free();
    memSize = size;

    int fProtect {}
    if ((bool)(mode & AccessMode::Read)) fProtect |= PROT_READ;
    if ((bool)(mode & AccessMode::Write)) fProtect |= PROT_WRITE;
    if ((bool)(mode & AccessMode::Execute)) fProtect |= PROT_EXEC;

    pointer = mmap(nullptr, memSize, fProtect, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
}
void VirtualMemory::free() {
    if (!pointer) return;
    munmap(pointer, memSize);
    pointer = nullptr;
}
} // namespace ll::memory

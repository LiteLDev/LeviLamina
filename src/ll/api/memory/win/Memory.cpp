#include "ll/api/memory/Memory.h"

#include <optional>
#include <vector>

#include "ll/api/io/Logger.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "pl/SymbolProvider.h"

#include "Windows.h"

namespace ll::memory {

void modify(void* ptr, size_t len, std::function<void()> const& callback) {
    std::optional<thread::GlobalThreadPauser> pauser;
    if (getGamingStatus() != GamingStatus::Default) {
        pauser.emplace();
    }
    DWORD oldProtect;
    VirtualProtect(ptr, len, PAGE_EXECUTE_READWRITE, &oldProtect);
    callback();
    VirtualProtect(ptr, len, oldProtect, &oldProtect);
}
void VirtualMemory::alloc(size_t size, AccessMode mode) {
    free();
    memSize = size;
    DWORD fProtect{PAGE_NOACCESS};
    if ((bool)(mode & AccessMode::Read) && (bool)(mode & AccessMode::Write)) {
        fProtect = PAGE_READWRITE;
    } else if ((bool)(mode & AccessMode::Read)) {
        fProtect = PAGE_READONLY;
    } else if ((bool)(mode & AccessMode::Write)) {
        fProtect = PAGE_WRITECOPY;
    }
    if ((bool)(mode & AccessMode::Execute)) fProtect *= PAGE_EXECUTE;

    pointer = VirtualAlloc(nullptr, memSize, MEM_COMMIT | MEM_RESERVE, fProtect);
}
void VirtualMemory::free() {
    if (!pointer) return;
    VirtualFree(pointer, 0, MEM_RELEASE);
    pointer = nullptr;
}

} // namespace ll::memory

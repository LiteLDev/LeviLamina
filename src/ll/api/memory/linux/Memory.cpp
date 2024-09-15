#include "ll/api/memory/Memory.h"

#include <optional>
#include <vector>

#include "ll/api/io/Logger.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "sys/mman.h"
#include "unistd.h"

namespace ll::memory {

static int readMemProtection(void* addr) {
    int fd = open("/proc/self/maps", O_RDONLY);
    if (fd < 0) {
        return 0;
    }
    char    buffer[4096];
    ssize_t len = read(fd, buffer, sizeof(buffer) - 1);
    close(fd);
    if (len <= 0) {
        return 0;
    }
    buffer[len] = '\0';

    auto uintptr = reinterpret_cast<uintptr_t>(addr);

    char* line = strtok(buffer, "\n");
    while (line != nullptr) {
        char* startPtr = line;
        char* endPtr   = strchr(line, '-');
        char* permPtr  = strchr(line, ' ') + 1;

        if (endPtr == nullptr || permPtr == nullptr) {
            line = strtok(nullptr, "\n");
            continue;
        }
        *endPtr         = '\0';
        uintptr_t start = strtoull(startPtr, nullptr, 16);
        uintptr_t end   = strtoull(endPtr + 1, nullptr, 16);

        if (uintptr >= start && uintptr < end) {
            int prot = 0;
            if (permPtr[0] == 'r') prot |= PROT_READ;
            if (permPtr[1] == 'w') prot |= PROT_WRITE;
            if (permPtr[2] == 'x') prot |= PROT_EXEC;
            return prot;
        }
        line = strtok(nullptr, "\n");
    }
    return 0;
}
void modify(void* ptr, size_t len, std::function<void()> const& callback) {
    std::optional<thread::GlobalThreadPauser> pauser;
    if (getGamingStatus() != GamingStatus::Default) {
        pauser.emplace();
    }
    int oldProtect = readMemProtection(ptr);
    mprotect(ptr, len, PROT_READ | PROT_WRITE | PROT_EXEC);
    callback();
    mprotect(ptr, len, oldProtect);
}
void VirtualMemory::alloc(size_t size, AccessMode mode) {
    free();
    memSize = size;
    int fProtect{};
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

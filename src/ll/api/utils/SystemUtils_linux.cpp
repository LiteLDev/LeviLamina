#include "ll/api/utils/SystemUtils.h"

#include <cstdint>
#include <fstream>
#include <sstream>
#include <string>

namespace ll::internal {

// Defined in CompilerPredefine.h
LLAPI void* getCurrentModuleHandle() noexcept {
    std::ifstream maps("/proc/self/maps");
    std::string   line;

    if (std::getline(maps, line)) {
        std::istringstream stream(line);
        std::string        address;
        if (std::getline(stream, address, '-')) {
            return (uintptr_t*)std::stoull(address, nullptr, 16);
        }
    }

    return nullptr;
}

} // namespace ll::internal

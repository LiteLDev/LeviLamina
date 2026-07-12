#include "ll/api/memory/Memory.h"

#include <cstdint>
#include <cstring>
#include <execution>
#include <optional>
#include <vector>

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/memory/IMemoryAllocator.h"

#include "pl/MemoryResource.h"

namespace ll::memory {

LLNDAPI std::optional<uint> getVtableIndex(FuncPtr virtualFunction) noexcept {
#if defined(_WIN32) && defined(_MSC_VER) && defined(__clang__) && defined(_M_X64)
    auto const* code = static_cast<std::uint8_t const*>(virtualFunction);
    if (!code) {
        return std::nullopt;
    }

    for (size_t i = 0; i < 4 && code[0] == 0xE9; ++i) {
        std::int32_t relativeOffset{};
        std::memcpy(&relativeOffset, code + 1, sizeof(relativeOffset));
        code += 5 + relativeOffset;
    }

    constexpr std::uint8_t vcallPrefix[] = {0x48, 0x8B, 0x01, 0x48, 0x8B, 0x80};
    for (size_t i = 0; i <= 32 - sizeof(vcallPrefix); ++i) {
        if (std::memcmp(code + i, vcallPrefix, sizeof(vcallPrefix)) != 0) {
            continue;
        }

        std::int32_t byteOffset{};
        std::memcpy(&byteOffset, code + i + sizeof(vcallPrefix), sizeof(byteOffset));
        if (byteOffset < 0 || byteOffset % sizeof(void*) != 0) {
            return std::nullopt;
        }
        return static_cast<uint>(byteOffset / sizeof(void*));
    }
#endif
    return std::nullopt;
}

LLAPI FuncPtr resolveSymbol(char const* symbol) { // for link
    auto sym = SymbolView{
        {symbol, strlen(symbol)}
    };
    auto res = sym.resolve(true);
    if (res == nullptr) {
        getLogger().fatal("Couldn't find: {}", sym.toString());
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}
size_t getUsableSize(void* ptr) { return getDefaultAllocator().getUsableSize(ptr, false); }

[[noreturn]] void throwMemoryException(size_t size) {
    if (size == std::numeric_limits<size_t>::max()) {
        throw std::bad_array_new_length();
    } else {
        throw std::bad_alloc();
    }
}
void DualMapping::alloc(size_t size) {
    free();
    memSize         = size;
    auto& allocator = pl::DualMappingMemoryResource::getInstance();
    rw              = allocator.allocate(size);
    rx              = allocator.executable(rw, memSize);
}
void DualMapping::free() {
    if (!rw) return;
    rx = nullptr;
    pl::DualMappingMemoryResource::getInstance().deallocate(std::exchange(rw, nullptr), std::exchange(memSize, 0));
}
} // namespace ll::memory

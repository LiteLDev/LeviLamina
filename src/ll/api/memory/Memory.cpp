#include "ll/api/memory/Memory.h"

#include <execution>
#include <optional>
#include <vector>

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

namespace ll::memory {

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
size_t getUsableSize(void* ptr) { return getDefaultAllocator().getUsableSize(ptr); }

[[noreturn]] void throwMemoryException(size_t size) {
    if (size == std::numeric_limits<size_t>::max()) {
        throw std::bad_array_new_length();
    } else {
        throw std::bad_alloc();
    }
}
} // namespace ll::memory

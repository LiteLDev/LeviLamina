#include "ll/api/memory/Memory.h"

#include <execution>
#include <optional>
#include <vector>

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/memory/IMemoryAllocator.h"

#include "pl/MemoryResource.h"

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
void DualMapping::alloc(size_t size) {
    free();
    memSize = size;
    pointer = pl::DualMappingMemoryResource::getInstance().allocate(size);
}
void DualMapping::free() {
    if (!pointer) return;
    pl::DualMappingMemoryResource::getInstance().deallocate(std::exchange(pointer, nullptr), std::exchange(memSize, 0));
}
void* DualMapping::executable() const {
    if (!pointer) return nullptr;
    return pl::DualMappingMemoryResource::getInstance().executable(pointer, memSize);
}
} // namespace ll::memory

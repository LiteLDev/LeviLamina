#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/InternalHeapAllocator.h"

namespace ll::memory {
auto replaceMemoryAllocator = []() -> bool {
    auto allocator = *reinterpret_cast<void***>(&getDefaultAllocator());
    auto vftable   = ::Bedrock::Memory::InternalHeapAllocator::$vftable();

    modify(vftable, 8 * sizeof(void*), [&] {
        for (size_t i = 0; i < 8; ++i) {
            vftable[i] = allocator[i];
        }
    });

    return true;
}();
} // namespace ll::memory
#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/InternalHeapAllocator.h"

namespace ll::memory {
auto replaceMemoryAllocator = []() -> bool {
    auto           allocator = *reinterpret_cast<void***>(&getDefaultAllocator());
    auto           vftable   = ::Bedrock::Memory::InternalHeapAllocator::$vftable();
    constexpr auto vfcount   = 7;


    modify(vftable, vfcount * sizeof(void*), [&] {
        for (size_t i = 0; i < vfcount; ++i) {
            vftable[i] = allocator[i];
        }
    });

    return true;
}();
} // namespace ll::memory

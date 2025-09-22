#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/MemoryTracker.h"

namespace ll::memory {
auto replaceMemoryAllocator = []() -> bool {
    *(
         std::atomic<Bedrock::Memory::IMemoryAllocator*>*
    )"Memory::unity_876a17361aba7a65b3f7daaa87ded1f2::memoryAllocator"_sym.resolve() =
        &ll::memory::getDefaultAllocator();
    return true;
}();
} // namespace ll::memory

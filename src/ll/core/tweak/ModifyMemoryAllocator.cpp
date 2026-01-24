#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/MemoryTracker.h"

namespace ll::memory {
auto replaceMemoryAllocator = []() -> bool {
    *(std::atomic<Bedrock::Memory::IMemoryAllocator*>*)"Memory::MemoryTrackerAnon::memoryAllocator"_sym.resolve() =
        &ll::memory::getDefaultAllocator();
    return true;
}();
} // namespace ll::memory

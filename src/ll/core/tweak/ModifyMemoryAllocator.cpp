#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/MemoryTracker.h"

namespace ll::memory {
    auto replaceMemoryAllocator = []() -> bool {
        *(Bedrock::Memory::IMemoryAllocator **)
                "Bedrock::Memory::sDefaultAllocator"_sym.resolve() = &ll::memory::getDefaultAllocator();
        Memory::MemoryTracker::mInstance() = &ll::memory::getMemoryTracker();
        return true;
    }();
} // namespace ll::memory

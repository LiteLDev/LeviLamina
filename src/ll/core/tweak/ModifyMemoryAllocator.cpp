#include "ll/api/memory/Memory.h"

namespace ll::memory {
auto replaceMemoryAllocator = []() -> bool {
    *(
         std::atomic<Bedrock::Memory::IMemoryAllocator*>*
    )"?memoryAllocator@MemoryTrackerAnon@?A0xC8249FD8@Memory@@3U?$atomic@PEAVIMemoryAllocator@Memory@Bedrock@@@std@@A.llvm.2596172611057690430"_sym
         .resolve() = &ll::memory::getDefaultAllocator();
    return true;
}();
} // namespace ll::memory

#include "ll/api/memory/Memory.h"

namespace ll::memory {
auto replaceMemoryAllocator = []() -> bool {
#ifdef LL_PLAT_C
    *reinterpret_cast<std::atomic<Bedrock::Memory::IMemoryAllocator*>*>(
        "?memoryAllocator@MemoryTrackerAnon@?A0x2B00547D@Memory@@3U?$atomic@PEAVIMemoryAllocator@Memory@Bedrock@@@std@@A.llvm.15156713813458777238"_sym
            .resolve()
    ) = &ll::memory::getDefaultAllocator();
#else
    *reinterpret_cast<std::atomic<Bedrock::Memory::IMemoryAllocator*>*>(
        "?memoryAllocator@MemoryTrackerAnon@?A0xC8249FD8@Memory@@3U?$atomic@PEAVIMemoryAllocator@Memory@Bedrock@@@std@@A.llvm.2622925147260331965"_sym
            .resolve()
    ) = &ll::memory::getDefaultAllocator();
#endif
    return true;
}();
} // namespace ll::memory

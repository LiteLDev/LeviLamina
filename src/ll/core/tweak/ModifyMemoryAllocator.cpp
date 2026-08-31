#include "ll/api/memory/Memory.h"

// In some reasons, mimalloc crashes on client, so we use std memory allocator on client.
#ifdef LL_PLAT_S
namespace ll::memory {
auto replaceMemoryAllocator = []() -> bool {
#ifdef LL_PLAT_S
    *(
         std::atomic<Bedrock::Memory::IMemoryAllocator*>*
    )"?memoryAllocator@MemoryTrackerAnon@?A0xC8249FD8@Memory@@3U?$atomic@PEAVIMemoryAllocator@Memory@Bedrock@@@std@@A.llvm.2596172611057690430"_sym
         .resolve() = &ll::memory::getDefaultAllocator();
#else
    *(
         std::atomic<Bedrock::Memory::IMemoryAllocator*>*
    )"?memoryAllocator@MemoryTrackerAnon@?A0x2B00547D@Memory@@3U?$atomic@PEAVIMemoryAllocator@Memory@Bedrock@@@std@@A.llvm.10711607328665019324"_sym
         .resolve() = &ll::memory::getDefaultAllocator();
#endif
    return true;
}();
} // namespace ll::memory
#endif

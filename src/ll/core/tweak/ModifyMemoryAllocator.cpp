#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/IMemoryAllocator.h"
#include "mc/deps/core/memory/MallocAllocator.h"

namespace ll::memory {
#ifdef LL_PLAT_C
LL_AUTO_TYPE_INSTANCE_HOOK(
    MallocAllocateHook,
    HookPriority::Highest,
    Bedrock::Memory::MallocAllocator,
    &Bedrock::Memory::MallocAllocator::$_allocate,
    void*,
    uint64 size
) {
    return ll::memory::getDefaultAllocator()._allocate(size);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    MallocReleaseHook,
    HookPriority::Highest,
    Bedrock::Memory::MallocAllocator,
    &Bedrock::Memory::MallocAllocator::$_release,
    void,
    gsl::not_null<void*> ptr
) {
    return ll::memory::getDefaultAllocator()._release(ptr);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    MallocAlignedAllocateHook,
    HookPriority::Highest,
    Bedrock::Memory::MallocAllocator,
    &Bedrock::Memory::MallocAllocator::$_alignedAllocate,
    void*,
    uint64 size,
    uint64 alignment
) {
    return ll::memory::getDefaultAllocator()._alignedAllocate(size, alignment);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    MallocAlignedReleaseHook,
    HookPriority::Highest,
    Bedrock::Memory::MallocAllocator,
    &Bedrock::Memory::MallocAllocator::$_alignedRelease,
    void,
    gsl::not_null<void*> ptr
) {
    return ll::memory::getDefaultAllocator()._alignedRelease(ptr);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    MallocSizeHook,
    HookPriority::Highest,
    Bedrock::Memory::MallocAllocator,
    &Bedrock::Memory::MallocAllocator::$_getUsableSize,
    uint64,
    gsl::not_null<void*> ptr,
    bool                 alignedAllocation
) {
    return ll::memory::getDefaultAllocator()._getUsableSize(ptr, alignedAllocation);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    MallocReallocHook,
    HookPriority::Highest,
    Bedrock::Memory::MallocAllocator,
    &Bedrock::Memory::MallocAllocator::$_realloc,
    void*,
    gsl::not_null<void*> ptr,
    uint64               newSize
) {
    return ll::memory::getDefaultAllocator()._realloc(ptr, newSize);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    MallocAlignedReallocHook,
    HookPriority::Highest,
    Bedrock::Memory::MallocAllocator,
    &Bedrock::Memory::MallocAllocator::$_alignedRealloc,
    void*,
    gsl::not_null<void*> ptr,
    uint64               newSize,
    uint64               alignment
) {
    return ll::memory::getDefaultAllocator()._alignedRealloc(ptr, newSize, alignment);
}
#endif

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

#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/bedrock/Memory.h"

namespace ll::memory {

LL_AUTO_STATIC_HOOK(
    ModifyMemoryAllocactor,
    HookPriority::Highest,
    &Bedrock::Memory::getDefaultAllocator,
    Bedrock::Memory::IMemoryAllocator&
) {
    return getDefaultAllocator();
}

} // namespace ll::memory

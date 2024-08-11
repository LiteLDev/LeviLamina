#include "ll/api/memory/Hook.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"
#include "mc/deps/core/common/bedrock/Memory.h"

namespace ll::memory {

LL_AUTO_STATIC_HOOK(ReplaceMemoryAllocator, HookPriority::High, ::Bedrock::Memory::getDefaultAllocator, ::Bedrock::Memory::IMemoryAllocator&) {
    return ::ll::memory::getDefaultAllocator();
}

} // namespace ll::memory

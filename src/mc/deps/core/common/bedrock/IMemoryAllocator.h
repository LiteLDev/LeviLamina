#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    // prevent constructor by default
    IMemoryAllocator& operator=(IMemoryAllocator const&);
    IMemoryAllocator(IMemoryAllocator const&);
    IMemoryAllocator();
};

}; // namespace Bedrock::Memory

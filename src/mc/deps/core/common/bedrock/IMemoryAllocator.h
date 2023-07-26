#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {

public:
    // prevent constructor by default
    IMemoryAllocator& operator=(IMemoryAllocator const&) = delete;
    IMemoryAllocator(IMemoryAllocator const&)            = delete;
    IMemoryAllocator()                                   = delete;
};

}; // namespace Bedrock::Memory

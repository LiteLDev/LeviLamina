#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_MEMORY_IMEMORYALLOCATOR
public:
    IMemoryAllocator& operator=(IMemoryAllocator const&) = delete;
    IMemoryAllocator(IMemoryAllocator const&)            = delete;
    IMemoryAllocator()                                   = delete;
#endif

public:
};

}; // namespace Bedrock::Memory

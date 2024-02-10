#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    virtual ~IMemoryAllocator() = default;

    virtual void* allocate(uint64) = 0;

    virtual void release(void* ptr) = 0;

    virtual void* alignedAllocate(uint64, uint64) = 0;

    virtual void alignedRelease(void* ptr) = 0;

    virtual uint64 getUsableSize(void* ptr) = 0;

    virtual void logCurrentState() = 0;

    virtual void* _realloc(gsl::not_null<void*> p, uint64 newSize) = 0;
};

}; // namespace Bedrock::Memory

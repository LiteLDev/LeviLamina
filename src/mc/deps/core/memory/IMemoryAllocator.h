#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMemoryAllocator() = default;

    virtual void* allocate(uint64 size) = 0;

    virtual void release(void* ptr) = 0;

    virtual void* alignedAllocate(uint64 size, uint64 alignment) = 0;

    virtual void alignedRelease(void* ptr) = 0;

    virtual uint64 getUsableSize(void* ptr, bool alignedAllocation) = 0;

    virtual void* _realloc(::gsl::not_null<void*> p, uint64 newSize) = 0;

    virtual void* _alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Memory

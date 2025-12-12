#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMemoryAllocator() = default;

    virtual void* allocate(uint64) = 0;

    virtual void release(void*) = 0;

    virtual void* alignedAllocate(uint64, uint64) = 0;

    virtual void alignedRelease(void*) = 0;

    virtual uint64 getUsableSize(void*, bool) = 0;

    virtual void* _realloc(::gsl::not_null<void*>, uint64) = 0;

    virtual void* _alignedRealloc(::gsl::not_null<void*>, uint64, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Memory

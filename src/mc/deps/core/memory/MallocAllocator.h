#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class MallocAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* _allocate(uint64 size) /*override*/;

    virtual void _release(::gsl::not_null<void*> ptr) /*override*/;

    virtual void* _alignedAllocate(uint64 size, uint64 alignment) /*override*/;

    virtual void _alignedRelease(::gsl::not_null<void*> ptr) /*override*/;

    virtual uint64 _getUsableSize(::gsl::not_null<void*> ptr, bool alignedAllocation) /*override*/;

    virtual void* _realloc(::gsl::not_null<void*> p, uint64 newSize) /*override*/;

    virtual void* _alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $_allocate(uint64 size);

    MCAPI void $_release(::gsl::not_null<void*> ptr);

    MCAPI void* $_alignedAllocate(uint64 size, uint64 alignment);

    MCAPI void $_alignedRelease(::gsl::not_null<void*> ptr);

    MCAPI uint64 $_getUsableSize(::gsl::not_null<void*> ptr, bool alignedAllocation);

    MCAPI void* $_realloc(::gsl::not_null<void*> p, uint64 newSize);

    MCAPI void* $_alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment);


    // NOLINTEND
};

} // namespace Bedrock::Memory

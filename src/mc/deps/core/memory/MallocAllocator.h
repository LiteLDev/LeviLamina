#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class MallocAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* allocate(uint64 size) /*override*/;

    virtual void release(void* ptr) /*override*/;

    virtual void* alignedAllocate(uint64 size, uint64 alignment) /*override*/;

    virtual void alignedRelease(void* ptr) /*override*/;

    virtual uint64 getUsableSize(void* ptr, bool alignedAllocation) /*override*/;

    virtual void* _realloc(::gsl::not_null<void*> p, uint64 newSize) /*override*/;

    virtual void* _alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $allocate(uint64 size);

    MCAPI void $release(void* ptr);

    MCAPI void* $alignedAllocate(uint64 size, uint64 alignment);

    MCAPI void $alignedRelease(void* ptr);

    MCAPI uint64 $getUsableSize(void* ptr, bool alignedAllocation);

    MCAPI void* $_realloc(::gsl::not_null<void*> p, uint64 newSize);

    MCAPI void* $_alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Memory

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class InternalHeapAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void* allocate(uint64 size) /*override*/;

    // vIndex: 2
    virtual void release(void* ptr) /*override*/;

    // vIndex: 3
    virtual void* alignedAllocate(uint64 size, uint64 alignment) /*override*/;

    // vIndex: 4
    virtual void alignedRelease(void* ptr) /*override*/;

    // vIndex: 5
    virtual uint64 getUsableSize(void* ptr, bool alignedAllocation) /*override*/;

    // vIndex: 6
    virtual void* _realloc(::gsl::not_null<void*> p, uint64 newSize) /*override*/;

    // vIndex: 0
    virtual ~InternalHeapAllocator() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void* $allocate(uint64 size);

    MCNAPI void $release(void* ptr);

    MCNAPI void* $alignedAllocate(uint64 size, uint64 alignment);

    MCNAPI void $alignedRelease(void* ptr);

    MCNAPI uint64 $getUsableSize(void* ptr, bool alignedAllocation);

    MCNAPI void* $_realloc(::gsl::not_null<void*> p, uint64 newSize);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Memory

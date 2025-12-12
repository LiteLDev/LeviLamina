#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class DefaultAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* allocate(uint64) /*override*/;

    virtual void release(void*) /*override*/;

    virtual void* alignedAllocate(uint64, uint64) /*override*/;

    virtual void alignedRelease(void*) /*override*/;

    virtual uint64 getUsableSize(void*, bool) /*override*/;

    virtual void* _realloc(::gsl::not_null<void*>, uint64) /*override*/;

    virtual void* _alignedRealloc(::gsl::not_null<void*>, uint64, uint64) /*override*/;

    virtual ~DefaultAllocator() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Memory

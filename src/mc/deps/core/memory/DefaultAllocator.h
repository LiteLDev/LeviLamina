#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class DefaultAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* _allocate(uint64) /*override*/;

    virtual void _release(::gsl::not_null<void*>) /*override*/;

    virtual void* _alignedAllocate(uint64, uint64) /*override*/;

    virtual void _alignedRelease(::gsl::not_null<void*>) /*override*/;

    virtual uint64 _getUsableSize(::gsl::not_null<void*>, bool) /*override*/;

    virtual void* _realloc(::gsl::not_null<void*>, uint64) /*override*/;

    virtual void* _alignedRealloc(::gsl::not_null<void*>, uint64, uint64) /*override*/;
    // NOLINTEND
};

} // namespace Bedrock::Memory
